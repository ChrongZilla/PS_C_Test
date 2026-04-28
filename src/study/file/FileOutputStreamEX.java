package study.file;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

class FileOutputStreamEX {
    public static void main(String[] args) {
        try {
            FileOutputStream fos = new FileOutputStream("output.txt");
            fos.write('A'); // A의 아스키 코드 : 65
            fos.write(65);
            fos.write('\n');
            System.out.println("AA 저장됨!");

            String str = "Hello World!!!";
            fos.write(str.getBytes());
            System.out.println("문자열 저장됨!");

            fos.close();

        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
