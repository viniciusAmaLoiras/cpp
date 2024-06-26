#include <stdio.h>

   char poder (){
   char aceitar  = 's';
   
   while (aceitar == 's'){
       
       printf ("quer usar o poder?\n");
       scanf ("%s" ,&aceitar);
          printf ("Voce usou o poder!");
          
   }
         return aceitar; 
   }
   int main () {
       poder ();
       return 0;
}