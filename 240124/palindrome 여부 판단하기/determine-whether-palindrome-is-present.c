#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r){
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int is_palindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){

    char input[101] = { 0, };
    
    scanf("%s", input);

    if (is_palindrome(input))
        printf("Yes");
    else 
        printf("No");

    return 0;
    
}