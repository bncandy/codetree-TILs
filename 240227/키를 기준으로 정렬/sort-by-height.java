import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int i, j, min_index = 0;
        int n;
        n = scanner.nextInt();
        User[] p = new User[n];
        for (i = 0; i < n; i++){
            String buff_1;
            int buff_2;
            int buff_3;
            buff_1 = scanner.next();
            buff_2 = scanner.nextInt();
            buff_3 = scanner.nextInt();
            p[i] = new User(buff_1, buff_2, buff_3);
        }

        for (i = 0; i < n - 1; i++){
            User temp;
            min_index = i;
            for (j = i + 1; j < n; j++){
                if (p[j].height < p[min_index].height)
                    min_index = j;
            }
            temp = p[i];
            p[i] = p[min_index];
            p[min_index] = temp;
        }

        for (i = 0; i < n; i++)
            p[i].printUser();
        // 여기에 코드를 작성해주세요.
    }
}

class User{
    String name;
    int height;
    int weight;
    User(String buff_1, int buff_2, int buff_3){
        this.name = buff_1;
        this.height = buff_2;
        this.weight = buff_3;
    }
    void printUser(){
        System.out.println(this.name + " " + this.height + " " + this.weight);
    }
}