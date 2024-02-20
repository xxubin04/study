package scanner.ex;

import java.util.Scanner;

public class ScannerWhileEx3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int total = 0;
        int cnt = 0;
        int num = 0;

        System.out.println("숫자를 입력하세요. 입력을 중단하려면 -1을 입력하세요:");

        while ((num = input.nextInt()) != -1) {
            if (num == -1) {
                break;
            }

            total += num;
            cnt += 1;
        }

        double average = (double) total / cnt;
        System.out.println("입력한 숫자들의 합계: " + total);
        System.out.println("입력한 숫자들의 평균: " + average);
    }
}
