#include <stdio.h>
#include <stdarg.h>


int sum(int count, ...) {
    va_list arg;
    int s = 0;
    va_start(arg, count);

    for(int i = 0; i < count; ++i) {
        s += va_arg(arg, int);
    }

    va_end(arg);

    return s;
}


int main() {
    int a, b, c, d;
    if(scanf("%d%d%d%d", &a, &b, &c, &d) != 4) {
        printf("n/a");
        return 0;
    }

    
    printf("%d", sum(4, a, b, c, d));

    return 0;
}