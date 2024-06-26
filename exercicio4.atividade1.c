#include <stdio.h> 

void guerra () {
    int batalha = 7; 
    
    for (int i = 1; i<= batalha; i++){
        printf("batalha %d:\n", i);
          printf("Player ataca!\n"); 
    }
       printf("Player vence!");
}

int main ()  
{
    printf("Exercício 1:");
    guerra();
    return 0;
    
    }
    