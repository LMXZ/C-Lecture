#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int ans = (c-a)*60 + d-b;
    printf("%d %d\n", ans/60, ans%60);
}