package study.file;

import java.io.FileNotFoundException;
import java.io.FileInputStream;
import java.io.IOException;

class FileInputStreamEX {
    public static void main(String[] args) {
        try {
            FileInputStream fis = new FileInputStream("output.txt");

            int one;
            while((one = fis.read()) != -1) {
                System.out.print((char)one);
            }
            System.out.println("\n데이터 로딩 완료!");
            fis.close();

        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
