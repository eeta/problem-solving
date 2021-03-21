// A+B - 6

#include <stdio.h>

int main() {
    int t;
    int a, b;
    char c;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %c %d", &a, &c, &b);
        printf("%d\n", a + b);
    }
    return 0;
}