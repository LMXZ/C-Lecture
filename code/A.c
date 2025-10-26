#include <stdio.h>

int global_arr[10];

float func(int x, float y, int arr[]) {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    float res = ((float)x) / 10 + y;
    for (int i = 0; i < 10; i++) {
        res += ++arr[i];
    }
    x++;
    return res;
}

int main() {
    int a;
    float b;
    scanf("%d %f", &a, &b);
    float result = func(a, b, global_arr);
    printf("Result: %.2f\n", result);
    for (int i = 0; i < 10; i++) {
        printf("global_arr[%d] = %d\n", i, global_arr[i]);
    }
    print("a after func: %d\n", a);
    return 0;
}