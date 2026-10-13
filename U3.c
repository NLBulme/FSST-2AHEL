#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int K = rand() %100+1;
    
    int a;
    int i = 0;
    int richtig = 0;

    printf("Gib eine Zahl ein:\n");
    scanf("%d", &a);
    while (!richtig)
    
    {
    if ( i == 8 )
    {
        richtig = 1;
    }
    if (a == K )
    {
        printf("Richtig \n");
        richtig = 1;
    }
    else if (a > K)
    {
        printf("Deine Zahl ist groesser als die Konstante \n");
        scanf("%d", &a);
        i++;
    }
    else
    {
        printf("Deine Zahl ist kleiner als die Konstante \n");
        scanf("%d", &a);
        i++;
    }
    }
    return 0;

}