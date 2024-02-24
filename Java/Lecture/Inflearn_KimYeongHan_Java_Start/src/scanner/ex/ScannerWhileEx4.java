package scanner.ex;

import java.util.Scanner;

public class ScannerWhileEx4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int totalCost = 0;

        while (true) {
            System.out.println("1: 상품 입력, 2: 결제, 3: 프로그램 종료");
            int num = input.nextInt();

            if (num == 1) {
                input.nextLine();

                System.out.print("상품명을 입력하세요: ");
                String name = input.nextLine();


                System.out.print("상품의 가격을 입력하세요: ");
                int price = input.nextInt();
                input.nextLine();

                System.out.print("상품의 수량을 입력하세요: ");
                int cnt = input.nextInt();
                input.nextLine();

                System.out.println("상품명:" + name + " 가격:" + price + " 수량:" + cnt + " 합계:" + price * cnt);
                totalCost += price * cnt;

            } else if (num == 2) {
                System.out.println("총 비용: " + totalCost);
                totalCost = 0;  // 결제 후 총 비용 0으로 초기화
            } else if (num ==3) {
                System.out.println("프로그램을 종료합니다.");
                break;
            } else {
                System.out.println("올바른 옵션을 선택해주세요.");
            }
        }
    }
}