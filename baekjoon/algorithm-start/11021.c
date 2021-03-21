// A+B - 7

#include <stdio.h>

int main() {
    int a, b;
    int t;
    int n = 1;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: ", n++);
        printf("%d\n", a + b);
    }
    return 0;
}