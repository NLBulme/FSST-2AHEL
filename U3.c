#include <stdio.h>



int main()
{

    int K = 4;
    int a;
    printf("Gib eine Zahl ein:\n");
    scanf("%d", &a);
    if (a == K )
    {
        printf("Deine Zahl ist gleich als deine  Konstante \n");
    }
    if (a > K)
    {
        printf("Deine Zahl ist groesser als die Konstante \n");
    }
    if (a < K)
    {
        printf("Deine Zahl ist kleiner als die Konstante \n");
    }



    return 0;

}