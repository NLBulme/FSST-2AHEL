#include <stdio.h>

int main()
{
    const char secret[]="Billa";
    const int len  = sizeof(secret)- 1;
    char guessed[len];
    char guess;

    for ( int i = 0; i < len; i++){
            guessed[i] = '_';
    }

    int fails = 0;
    while (fails < 5) {
        printf("Erate den Buchstaben :");
        scanf(" %c",&guess);

        int hits = 0;
        for (int i = 0; i < len; i++)
        {
            if ((secret[i])==guess)
            {
                hits++;
                guessed[i] = guess;
            }
        }
        
        for (int i = 0; i < len; i++) {
            printf("%c ",guessed[i]);
        }
        printf("\n");

        fails += (hits == 0);
    }

    return 0;

}
    
