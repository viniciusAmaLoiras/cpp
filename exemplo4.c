#include <stdio.h> 

int main()  {
    int quantidadedeNotas;
    float nota, soma = 0, media;
    
    printf("Quantas notas deseja inserir? ");
    scanf("%d" , &quantidadedeNotas); 
       for (int i = 1; i <=quantidadedeNotas; i++) {
           
           printf ("Digite a nota #%d: ", 1);
           scanf("%f", &nota) ; 
           
           soma += nota; 
        
       } 
    
    media = soma / quantidadedeNotas;
    
    printf("A media das notas é; %.2f\n" , media);
    
    return 0;
    
    }