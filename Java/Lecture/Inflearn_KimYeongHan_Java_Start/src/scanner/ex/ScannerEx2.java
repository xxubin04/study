package scanner.ex;

import java.util.Scanner;

public class ScannerEx2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("하나의 정수를 입력하세요:");
        int num = scanner.nextInt();

        String define;

        if (num % 2 == 0) {
            define = "짝수";
        } else {
            define = "홀수";
        }
        System.out.println("입력한 숫자 " + num + "는 " + define + "입니다.");
    }
}
