import java.util.*;

public class Main {
    public static void main(String[] args) {
        int[] lotto = new int[6];
        lotto[0] = (int)(Math.random()*45+1);

        for(int i=1;i<6;i++) {
            lotto[i] = (int)(Math.random()*45+1);

            for(int j=0;j<i;j++) {
                while(true) {
                    if(lotto[i]==lotto[j])
                        lotto[i]=(int)(Math.random()*45+1);
                    else
                        break;
                }
            }
        }
        Arrays.sort(lotto);

        for(int j=0;j<6;j++) {
            System.out.println(lotto[j]);
        }
    }
}