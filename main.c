#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>



int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float d = pow(b, 2) - 4 * a * c;
    if(d > 0)
    {
        float x1 = (-b + sqrt(d)) / 2*a;
        float x2 = (-b - sqrt(d)) / 2*a;
        printf("first x - %lf, second x - %lf", x1, x2);
    }
    else if(d == 0){
        float x = (-b + sqrt(d)) / 2*a;
        printf("x - %lf", x);
    }
    else
    {
        printf("No x");
    }
    printf("\n");

    
}