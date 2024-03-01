import java.util.Scanner;

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

        for (i = 0; i < n - 1; i++){
            Std temp;
            min_index = i;
            for (j = i + 1; j < n; j++){
                if (p[j].kor < p[min_index].kor)
                    min_index = j;
            }
            temp = p[i];
            p[i] = p[min_index];
            p[min_index] = temp;
        }

        for (i = 0; i < n - 1; i++){
            Std temp;
            min_index = i;
            for (j = i + 1; j < n; j++){
                if (p[j].eng < p[min_index].eng)
                    min_index = j;
            }
            temp = p[i];
            p[i] = p[min_index];
            p[min_index] = temp;
        }


        for (i = 0; i < n - 1; i++){
            Std temp;
            min_index = i;
            for (j = i + 1; j < n; j++){
                if (p[j].mat < p[min_index].mat)
                    min_index = j;
            }
            temp = p[i];
            p[i] = p[min_index];
            p[min_index] = temp;
        }

        for (i = n - 1; i >= 0; i--){
            p[i].printStd();
        }
        // 여기에 코드를 작성해주세요.
    }
}

class Std {
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

}