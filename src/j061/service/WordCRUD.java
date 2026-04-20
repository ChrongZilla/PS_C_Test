// 자바 가변 배열 : Java Collection Framework 사용

package j061.service;

import j061.model.Word;

import java.util.ArrayList;
import java.util.Scanner;

public class WordCRUD implements ICRUD {
    ArrayList<Word> list;
    Scanner sc = new Scanner(System.in);

    public WordCRUD() {
        list = new ArrayList<Word>();
    }

    @Override
    public void addWord() {
        String english, korean;
        int level;

        System.out.print("English > ");
        english = sc.next();

        // 입력버퍼 비우기
        sc.nextLine();

        System.out.print("Korean > ");
        korean = sc.next();
        System.out.print("Leve (1~3) > ");
        level = sc.nextInt();
        Word new_word = new Word(english, korean, level);
        list.add(new_word);
    }

    @Override
    public void editWord() {
        System.out.print("Eidt word > ");
        String editWord = sc.next();
        sc.nextLine();

        boolean isFound = false;
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).getEnglish().equals(editWord)) {
                System.out.print("new Kroean > ");
                String newKorean = sc.nextLine();
                list.get(i).setKorean(newKorean);
                System.out.println("Complete edit.");
                isFound = true;
                break;
            }
        }
        if (!isFound) {
            System.out.println("Cannot find the word.");
        }
    }

    @Override
    public void listWord() {
        for(int i = 0; i < list.size(); i++)
            System.out.printf("%d - %s\n", i+1, list.get(i).toString());
    }

    @Override
    public void deleteWord() {
        System.out.print("Delete word > ");
        String deleteWord = sc.next();

        boolean isFound = false;
        for (int i = 0; i < list.size(); i++) {
            // i번째에 삭제하고자 입력한 영단어가 있으면 ArrayList에서 i번째 인덱스 삭제
            if (list.get(i).getEnglish().equals(deleteWord)) {
                list.remove(i);
                System.out.println("Complete deletion.");
                isFound = true;
                break;
            }
        }
        if (!isFound) {
            System.out.println("Cannot find the word.");
        }
    }
}
