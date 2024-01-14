#include <stdio.h>
int EUD(int a, int b) {
	if (a == 0) return b;
	else return EUD(b % a, a);
}


long long lcm(int x, int y) {

	int gcd;
	long long result;

	gcd = EUD(x, y);
	result = (long long)x * y / gcd;

	return result;
}

int main() {

    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", lcm(n, m));
    return 0;
}