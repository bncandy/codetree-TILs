#include <stdio.h>

int is_season(int m){

    if(m >= 3 && m <= 5)
        return 1;
    else if (m >= 6 && m <= 8)
        return 2;
    else if (m >= 9 && m <= 11)
        return 3;
    else return 4;

}

int is_yoon(int y){

    int temp1 = 0;
    int temp2 = 0;
    int temp3 = 0;

    if (y % 4 == 0)
        temp1 = 1;
    
    if (y % 100 == 0)
        temp2 = 1;
    
    if (y % 400 == 0)
        temp3 = 1;

    if (temp1 && (!temp2 || temp3))
        return 1;
    else return 0;

}

int is_cal(int y, int m, int d){

    int yoon = 0;
    int temp1 = 0;
    int temp2 = 0;
    int temp3 = 0;
    int temp4 = 0;
    int temp5 = 0;
    int temp6 = 0;

    yoon = is_yoon(y);

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        temp1 = 1;
    else if (m == 2)
        temp3 = 1;
    else temp2 = 1;

    if (d <= 28)
        temp4 = 1;
    else if (d >= 29 && d <= 30)
        temp5 = 1;
    else temp6 = 1;

    if (temp1 && (temp4 || temp5 || temp6))
        return 1;
    else if (temp2 && (temp4 || temp5 && !temp6))
        return 1;
    else if (temp3 && (temp4 || ((is_yoon(y) && d == 29))))
        return 1;

}

void print_result(int y, int m, int d){

    if (is_cal(y, m, d)){
        switch(is_season(m)){
            case 1 :
                printf("Spring");
                break;
            case 2 : 
                printf("Summer");
                break;
            case 3:
                printf("Fall");
                break;
            case 4:
                printf("Winter");

        }
    }
    else printf("-1");

}

int main() {

    int y, m, d;

    scanf("%d %d %d", &y, &m, &d);

    print_result(y, m, d);

    // 여기에 코드를 작성해주세요.
    return 0;
}