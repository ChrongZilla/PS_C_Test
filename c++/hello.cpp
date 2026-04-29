#include <iostream>

// namespace : 동일한 이름의 함수가 많아서 영역을 만들어서 사용
using namespace std;

int main() {
    string name;
    cin >> name;

    cout << "Hello, World!" << endl;
    cout << "Hello, " << name << "!" << endl;
    return 0;
}