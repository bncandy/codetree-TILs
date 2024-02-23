import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String buff_1;
        char buff_2;
        int buff_3;
        Site p;
        
        buff_1 = scanner.next();
        buff_2 = scanner.next().charAt(0);
        buff_3 = scanner.nextInt();
        p = new Site(buff_1, buff_2, buff_3);
        p.printsite();
        // 여기에 코드를 작성해주세요.
    }
}

class Site {
    String code;
    char buff;
    int time;

    Site(String buff_1, char buff_2, int buff_3){
        this.code = buff_1;
        this.buff = buff_2;
        this.time = buff_3;
    }
    void printsite(){
        System.out.printf("secret code : %s\n", this.code);
        System.out.printf("meeting point : %c\n", this.buff);
        System.out.printf("time : %d", this.time);
    }
}