//Ladet die Bibliotheken 
#include <stdio.h>
// Standard Bibliothek
#include <stdlib.h>
//ladet die Bibliothek für die time für den randomiser 
#include <time.h>

int main()
{
    //Random Zahl
    srand(time(NULL));
    int K = rand() %100+1;
    //Variablen 
    int a;
    int i = 0;
    int richtig = 0;

    //Hier beginnt das Ratespiel  
    printf("Gib eine Zahl ein:\n");
    scanf("%d", &a);
    //sobald richtig == 1 hört das programm auf(Abbruchsedingung)
    while (!richtig) 
    {
        if ( i == 8 )
        {
            richtig = 1;
        }
        else if (a == K )
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