import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Agent[] setup = new Agent[5];
        int i, j, min_index = 0;
        
        for (i = 0; i < 5; i++){
            String buff_1;
            int buff_2;
            buff_1 = scanner.next();
            buff_2 = scanner.nextInt();
            setup[i] = new Agent(buff_1, buff_2);
        }

        for (i = 0; i < 4; i++){
            Agent temp;
            temp = new Agent("", 0);
            min_index = i;
            for (j = i + 1; j < 5; j++){
                if (setup[j].score < setup[min_index].score){
                    min_index = j;
                }
            }
            temp = setup[i];
            setup[i] = setup[min_index];
            setup[min_index] = temp;
        }
        setup[0].printAgent();
        // 여기에 코드를 작성해주세요.
    }
}

class Agent{
    String id;
    int score;
    Agent(String buff_1, int buff_2){
        this.id = buff_1;
        this.score = buff_2;
    }
    void printAgent(){
        System.out.printf("%s %d", this.id, this.score);
    }
}