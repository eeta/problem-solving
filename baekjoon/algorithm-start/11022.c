// A+B - 8

#include <stdio.h>

int main() {
    int t;
    int a, b;
    int n = 1;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: ", n++);
        printf("%d + %d = ", a, b);
        printf("%d\n", a + b);
    }
    return 0;
}