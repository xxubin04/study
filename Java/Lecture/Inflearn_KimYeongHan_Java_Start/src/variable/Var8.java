package variable;

public class Var8 {
    public static void main(String[] args) {
        //정수
        byte b = 127; //-128 ~ 127
        short s = 32767; //-32,768 ~ 32,767
        int i = 2147483647; //-2,147,483,648 ~ 2,147,483,647 (약 20억)

        long l = 9223372036854775807L;

        //실수
        float f = 10.0f; //double보다 좀 더 작은 실수값
        double d = 10.0; //float보다 부동소수점 오류가 적기 때문에 권장됨
    }
}
