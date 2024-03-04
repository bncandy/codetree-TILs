import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n;
        int i, j, min_index;
        n = scanner.nextInt();
        Std[] p = new Std[n];
        for (i = 0; i < n; i++){
            String buff_0;
            int buff_1;
            int buff_2;
            int buff_3;
            buff_0 = scanner.next();
            buff_1 = scanner.nextInt();
            buff_2 = scanner.nextInt();
            buff_3 = scanner.nextInt();
            p[i] = new Std(buff_0, buff_1, buff_2, buff_3);
        }

        Arrays.sort(p);

        for (i = n - 1; i >= 0; i--){
            p[i].printStd();
        }
        // 여기에 코드를 작성해주세요.
    }
}

class Std implements Comparable<Std> {
    String name;
    int kor;
    int eng;
    int mat;
    Std(String buff_0, int buff_1, int buff_2, int buff_3){
        this.name = buff_0;
        this.kor = buff_1;
        this.eng = buff_2;
        this.mat = buff_3;
    }
    void printStd(){
        System.out.println(this.name + " " + this.kor + " " + this.eng + " " + this.mat);
    }
    public int compareTo(Std student){
        if (this.kor == student.kor)
            if (this.eng == student.eng)
                return this.mat - student.mat;
        return (this.kor == student.kor) ? 
               ((this.eng == student.eng) ? 
               this.mat - student.mat : this.eng - student.eng) 
               : this.kor - student.kor;
    }

}