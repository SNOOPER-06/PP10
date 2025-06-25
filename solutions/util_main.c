#include <stdio.h>
#include <math.h>
#include "util.h"

int main() {
    int result = clamp (15, 0, 10);
    printf("%d\n", result);
    return 0;
}
