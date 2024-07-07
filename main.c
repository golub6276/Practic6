#include <math.h>
#include <stdio.h>

int main(void) {
    int x1, x2, y1, y2;
    float module;
    printf("Enter the x1 y1 and x2 y2 coordinates of the vector:\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    module = sqrt((pow((x2 - x1),2))-pow((y2 - y1),2));
    printf("Lenght of this vector is: %.6f\n", module);
    return 0;
}
