package ch03_operator;

public class Exercise3_02 {
    public static void main(String[] args) {
        int numOfApples = 123;
        int sizeOfBucket = 10;
// 내 풀이
//        double numOfBucket = Math.ceil((float)numOfApples / sizeOfBucket);
//        System.out.println("필요한 바구니의 수 : " + (int)numOfBucket);

        int numOfBucket =
                numOfApples/sizeOfBucket + (numOfApples%sizeOfBucket > 0 ? 1 : 0);
        System.out.println("필요한 바구니의 수 : " + numOfBucket);
    }

}
