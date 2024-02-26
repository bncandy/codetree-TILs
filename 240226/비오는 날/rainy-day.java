import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int i, n, j, min_index = 0;
        String buff_1, buff_2, buff_3;
        
        n = scanner.nextInt();
        Weather[] p = new Weather[n];
        for (i = 0; i < n; i++){
            buff_1 = scanner.next();
            buff_2 = scanner.next();
            buff_3 = scanner.next();
            p[i] = new Weather(buff_1, buff_2, buff_3);
        }
        for (i = 0; i < n - 1; i++){
            min_index = i;
            for (j = i + 1; j < n; j++){
                if (p[j].date.compareTo(p[min_index].date) < 0)
                    min_index = j;
            }
            Weather temp = p[i];
            p[i] = p[min_index];
            p[min_index] = temp;
        }
        
        for (i = 0; i < n; i++){
            if (p[i].forecast.compareTo("Rain") == 0){
                p[i].printPopul();
                break;
            }
                
        }

        // 여기에 코드를 작성해주세요.
    }
}

class Weather {
    String date;
    String day;
    String forecast;
    Weather(String buff_1, String buff_2, String buff_3){
        this.date = buff_1;
        this.day = buff_2;
        this.forecast = buff_3;
    }
    void printPopul(){
        System.out.println(date + " " + day + " " + forecast);
    }
}