package j061;

import java.util.Scanner;
import j061.service.ICRUD;
import j061.service.WordCRUD;

class Main {
    public static void main(String[] args) {
        int menu, quit = 0;
        Scanner sc = new Scanner(System.in);
        ICRUD manager = new WordCRUD();
        while(true) {
            System.out.println("Menu> 1 Add 2 Edit 3 List 4 Delete 0 Exit");
            menu = sc.nextInt();
            switch(menu) {
                case 1: manager.addWord(); break;
                case 2: manager.editWord(); break;
                case 3: manager.listWord(); break;
                case 4: manager.deleteWord(); break;
                default: quit = 1;
            }
            if(quit == 1) break;
        }
    }
}
