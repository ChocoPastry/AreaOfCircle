#include <stdio.h>
float EuDistance(int x1, int y1, int x2, int y2)
{
    float a, b;
    a= x2-x1;
    b= y2-y1;
    return (a/b);
}
float ArCircle(float (*ptr)(int , int , int , int ), int x1, int y1, int x2, int y2)
{
    float a, b;
    a = (*ptr)(x1, y1, x2, y2);
    b = (3.14)*(a*a);
    return b;
}
int main()
{
    int x1, y1, y2, x2;
    printf("Enter x1: ");
    scanf("%d", &x1);
    getchar();
    printf("Enter y1: ");
    scanf("%d", &y1);
    getchar();
    printf("Enter x2: ");
    scanf("%d", &x2);
    getchar();
    printf("Enter y2: ");
    scanf("%d", &y2);
    getchar();
    float (*ptr)(int, int, int , int);
    ptr = &EuDistance;
    float w = ArCircle(ptr, x1, y1, x2, y2);
    printf("%f", w);
    return 0;
}