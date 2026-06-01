/*
컴파일 : make
실행 : ../../bin/dis042 < expression.txt
*/

#include <iostream>
#include <string>
#include "MyLinkedStack.h"
 
using namespace std;
 
void printError(const string& line, const string& msg, MyLinkedStack& stack, string& currentLine) {
    cout << line << endl;
    cout << "=> " << msg << endl;
    stack.initialize();
    currentLine = "";
}
 
int main() {
    MyLinkedStack stack;
    string token;
    string line = "";
    bool skip = false;      // = 까지 버리는 상태 (잘못된 문자, 잘못된 숫자 에러)
    bool restart = false;   // 다음 # 부터 새 식 (연산자 에러)
 
    // 토큰 단위로 읽음
    while (cin >> token) {
 
        if (skip) {
            // 에러 상태: = 나올 때까지 토큰 전부 버림
            if (token == "=") skip = false;
            continue;
        }
 
        if (restart) {
            // 연산자 에러 후: # 숫자 만나면 새 식 시작, 아니면 버림
            if (token[0] == '#') {
                restart = false;
                line = token;
                string numStr = token.substr(1);
                bool valid = !numStr.empty();
                for (char c : numStr) {
                    if (!isdigit(c)) { valid = false; break; }
                }
                if (!valid) {
                    printError(line, "Expression error !!!", stack, line);
                    skip = true;
                } else {
                    stack.push(stoi(numStr));
                }
            }
            else if (token == "=") {
                restart = false;
            }
            continue;
        }
 
        // 현재 줄 재조합
        line += (line.empty() ? "" : " ") + token;
 
        if (token[0] == '#') {
            // 숫자 -> # 제거 및 정수로 변환 후 push
            string numStr = token.substr(1);
 
            // # 뒤가 숫자로만 이루어져 있는지 확인
            bool valid = !numStr.empty();
            for (char c : numStr) {
                if (!isdigit(c)) {
                    valid = false;
                    break;
                }
            }
 
            if (!valid) {
                printError(line, "Expression error !!!", stack, line);
                skip = true;
                continue;
            }
 
            stack.push(stoi(numStr));
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/") {
            // 연산자 -> calculate 호출
            if (stack.getcount() < 2) {
                printError(line, "Expression error !!!", stack, line);
                restart = true;     // 다음 # 부터 새 식
                continue;
            }
            // calculate: 스택에서 두 수를 꺼내 계산, 결과를 result에 저장
            int result;
            if (!stack.calculate(token, result)) {  // Division by 0이면 false
                printError(line, "Division by 0", stack, line);
                restart = true;     // 다음 # 부터 새 식
                continue;
            }
            stack.push(result);
        }
        else if (token == "=") {
            // 계산 종료, top이 최종 결과
            if (stack.isempty()) {
                cout << line << endl;
                cout << "=> Expression error !!!" << endl;
            }
            else if (stack.getcount() > 1) {
                cout << line << endl;
                cout << "=> Too many operands" << endl;
            }
            else {
                cout << line << " " << stack.top() << endl;
            }
            line = "";
            stack.initialize();
        }
        else {
            // #, 연산자, = 이외의 문자는 예외 처리
            printError(line, "Expression error !!!", stack, line);
            skip = true;    // = 까지 버림
        }
    }
 
    return 0;
}