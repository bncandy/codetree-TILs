import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, i, j, min_index = 0;
        Std temp;
        n = scanner.nextInt();
        Std[] p = new Std[n];
        for (i = 0; i < n; i++){
            String buff_1;
            int buff_2, buff_3, buff_4;
            buff_1 = scanner.next();
            buff_2 = scanner.nextInt();
            buff_3 = scanner.nextInt();
            buff_4 = scanner.nextInt();
            p[i] = new Std(buff_1, buff_2, buff_3, buff_4);
        }

        for (i = 0; i < n - 1; i++){
            min_index = i;
            for (j = i + 1; j < n; j++){
                if (p[j].SOS() < p[min_index].SOS())
                    min_index = j;
            }
            temp = p[i];
            p[i] = p[min_index];
            p[min_index] = temp;
        }

        for (i = 0; i < n; i++)
            p[i].printStd();
        // 여기에 코드를 작성해주세요.
    }
}

class Std {

    String name;
    int scr_1;
    int scr_2;
    int scr_3;
    Std (String buff_1, int buff_2, int buff_3, int buff_4){
        this.name = buff_1;
        this.scr_1 = buff_2;
        this.scr_2 = buff_3;
        this.scr_3 = buff_4;
    }
    void printStd(){
        System.out.println(this.name + " " + this.scr_1 + " " + this.scr_2 + " " + this.scr_3);
    }
    int SOS(){
        return this.scr_1 + this.scr_2 + this.scr_3;
    }

}