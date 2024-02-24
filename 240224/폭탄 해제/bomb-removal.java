import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String buff_1;
        char buff_2;
        int buff_3;
        buff_1 = scanner.next();
        buff_2 = scanner.next().charAt(0);
        buff_3 = scanner.nextInt();
        Spike p;
        p = new Spike(buff_1, buff_2, buff_3);
        p.printSpike();
        // 여기에 코드를 작성해주세요.
    }
}

class Spike {
    String defuse;
    char color;
    int second;
    Spike(String buff_1, char buff_2, int buff_3){
        this.defuse = buff_1;
        this.color = buff_2;
        this.second = buff_3;
    }
    void printSpike(){
        System.out.printf("code : %s\ncolor : %c\nsecond : %d", this.defuse, this.color, this.second);
    }
}