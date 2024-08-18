package ch04_condition;

public class Exercise04_05 {
    public static void main(String[] args) {
        int i = 0;

        while (i++ <= 10) {
            int a = 1;
            while (a++ <= i) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


//public class Exercise04_05 {
//    public static void main(String[] args) {
//        int i=0;
//        while( i<=10) {
//            int j=0;
//            while(j<=i) {
//                System.out.print("*");
//                j++;
//            }
//            System.out.println();
//            i++;
//        }
//    } // end of main
//} // end of class