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

// 이외에도 PrintWriter 클래스 등을 활용해 파일에 데이터를 저장할 수 있음.
// FileOutputStream 클래스는 바이트 단위로 데이터를 저장하기 때문에, 문자열을 저장하려면 문자열을 바이트 배열로 변환해야 함. (getBytes() 메서드 활용)
// PrintWriter 클래스는 문자 단위로 데이터를 저장하기 때문에, 문자열을 바로 저장할 수 있음. (println() 메서드 활용)