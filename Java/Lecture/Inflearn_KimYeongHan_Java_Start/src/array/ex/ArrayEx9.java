package array.ex;

import java.util.Scanner;

public class ArrayEx9 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] stuffs = new String[10];

        int cnt = 0;
        while (true) {
            System.out.println("1. 상품 등록 | 2. 상품 목록 | 3. 종료");
            System.out.print("메뉴를 선택하세요:");
            int choice = scanner.nextInt();
            scanner.nextLine();

            if (choice == 1) {
                if (cnt < 10) {
                    System.out.print("상품 이름을 입력하세요:");
                    String name = scanner.nextLine();
                    System.out.print("상품 가격을 입력하세요:");
                    int price = scanner.nextInt();
                    stuffs[cnt] = name + ": " + price + "원";
                    cnt++;
                } else {
                    System.out.println("더 이상 상품을 등록할 수 없습니다.");
                }
            } else if (choice == 2) {
                if (cnt == 0) {
                    System.out.println("등록된 상품이 없습니다.");
                } else {
                    for (int i = 0; i < cnt; i++) {
                        System.out.println(stuffs[i]);
                }
                }
            } else if (choice == 3) {
                System.out.println("프로그램을 종료합니다.");
                break;
            } else {
                System.out.println("Invalid Choice");
            }
        }
    }
}
