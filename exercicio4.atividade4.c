#include <stdio.h>

int recuperar (){
    int cemig;
    while(cemig <=100){
        
        printf("Recuperando forças. . . (%d%%)\n", cemig);
        cemig+=10;
        
    }
    
    printf("Força recuperada.");
    return cemig;
    
}

int main ()
{
    recuperar();
    return 0;
}