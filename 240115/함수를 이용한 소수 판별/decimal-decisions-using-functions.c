#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
#define COMPARE(x, y) (((x) < (y)) ? -1 : ((x) == (y)) ? 0 : 1)

int input[200000];

int bin_search(int* a, int left, int right, int find) {
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (find == a[middle])
            return middle;
        else if (find < a[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }
    return -1;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int is_tsn(int n) {

    int p = 0;
    int result;

    while (n) {

        result = n % 10;
        if (result % 3 == 0 && result != 0)
            p = 1;
        n /= 10;

    }

    if (p == 1)
        return 1;
    else
        return 0;

}

int is_prime(int n) {

    int i;
    int result = 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0)
            result++;
    }

    if (result == 1)
        return 1;
    else
        return 0;
}

int main() {

    int result = 0;
    int cnt = 0;
    int a, b;
    int i;

    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) {
        if (is_prime(i) == 1) {
            cnt++;
            result += i;
        }
    }

    printf("%d", result);

    return 0;

}