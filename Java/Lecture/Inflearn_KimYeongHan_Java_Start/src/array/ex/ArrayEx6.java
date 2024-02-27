package array.ex;

import java.util.Scanner;

public class ArrayEx6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("입력받을 숫자의 개수를 입력하세요: ");
        int num = scanner.nextInt();
        int[] numbers = new int[num];

        System.out.println(num + "개의 정수를 입력하세요:");
        for (int i = 0; i < num; i++) {
            ;
            numbers[i] = scanner.nextInt();
        }

        int minNum, maxNum;
        minNum = maxNum = numbers[0];
        for (int j = 1; j < num; j++) {
            if (numbers[j] < minNum) {
                minNum = numbers[j];
            }
            if (numbers[j] > maxNum) {
                maxNum = numbers[j];
            }
        }
        System.out.println("가장 작은 정수: " + minNum);
        System.out.println("가장 큰 정수: " + maxNum);
    }
}
