import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String buff_1;
        int buff_2;
        User s, p;
        s = new User("codetree", 10);
        buff_1 = scanner.next();
        buff_2 = scanner.nextInt();
        p = new User(buff_1, buff_2);
        s.printUser();
        p.printUser();
        // 여기에 코드를 작성해주세요.
    }
}

class User {
    String ID;
    int level;
    User(String buff_1, int buff_2){
        this.ID = buff_1;
        this.level = buff_2;
    }
    void printUser(){
        System.out.printf("user %s lv %d\n", this.ID, this.level);
    }
}