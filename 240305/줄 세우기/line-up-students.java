import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, i, cnt = 1;
        n = scanner.nextInt();
        Std[] p = new Std[n];
        for (i = 0; i < n; i++){
            int buff_2;
            int buff_3;
            buff_2 = scanner.nextInt();
            buff_3 = scanner.nextInt();
            p[i] = new Std(cnt, buff_2, buff_3);
            cnt++;
        }
        Arrays.sort(p);
        for (i = n - 1; i >= 0; i--){
            p[i].printStd();
        }
        // 여기에 코드를 작성해주세요.
    }
}

class Std implements Comparable<Std> {
    int num;
    int height;
    int weight;
    Std(int buff_1, int buff_2, int buff_3){
        this.num = buff_1;
        this.height = buff_2;
        this.weight = buff_3;
    }
    void printStd(){
        System.out.println(this.height + " " + this.weight + " " + this.num);
    }
    public int compareTo(Std student) {
    if (this.height != student.height)
        return this.height - student.height;
    if (this.weight != student.weight)
        return this.weight - student.weight;
    return this.num - student.num;
}
}