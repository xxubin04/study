package array;

public class Array1Ref4 {

    public static void main(String[] args) {
        int[] students = {90, 80, 70, 60, 50, 40, 30, 20, 10}; // 배열 생성과 초기화

        /*
        int[] students;
        students = {90, 80, 70, 60, 50};
         */   // 이건 불가, 한줄에 선언과 초기화를 같이 해야 Java가 추론가능
        
        for (int i = 0; i < students.length; i++) {
            System.out.println("학생" + (i + 1) + " 점수: " + students[i]);
        }
    }
}
