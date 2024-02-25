import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int i, n, j, min_index = 0;
        String buff_1, buff_2, buff_3;
        
        n = scanner.nextInt();
        Popul[] p = new Popul[n];
        for (i = 0; i < n; i++){
            buff_1 = scanner.next();
            buff_2 = scanner.next();
            buff_3 = scanner.next();
            p[i] = new Popul(buff_1, buff_2, buff_3);
        }
        for (i = 0; i < n - 1; i++){
            min_index = i;
            for (j = i + 1; j < n; j++){
                if (p[j].name.compareTo(p[min_index].name) > 0)
                    min_index = j;
            }
            Popul temp = p[i];
            p[i] = p[min_index];
            p[min_index] = temp;
        }
        p[0].printPopul();

        // 여기에 코드를 작성해주세요.
    }
}

class Popul {
    String name;
    String bunji;
    String region;
    Popul(String buff_1, String buff_2, String buff_3){
        this.name = buff_1;
        this.bunji = buff_2;
        this.region = buff_3;
    }
    void printPopul(){
        System.out.printf("name %s\n", this.name);
        System.out.printf("addr %s\n", this.bunji);
        System.out.printf("city %s", this.region);
    }
}