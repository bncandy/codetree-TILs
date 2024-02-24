import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String buff_1;
        int buff_2;
        MD p, s;
        buff_1 = scanner.next();
        buff_2 = scanner.nextInt();
        p = new MD(buff_1, buff_2);
        s = new MD("codetree", 50);
        s.printMD();
        System.out.println("");
        p.printMD();
        // 여기에 코드를 작성해주세요.
    }
}

class MD{
    String name;
    int code;
    MD(String buff_1, int buff_2){
        this.name = buff_1;
        this.code = buff_2;
    }
    void printMD(){
        System.out.printf("product %d is %s", this.code, this.name);
    }
}