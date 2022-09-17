#include <stdio.h>

#include <locale.h>    


int main() 

{ 

   setlocale(LC_ALL, "Portuguese");     
    

          int n1, n2, n3, n4, media;  

  

        printf("Bem vindo ao Sistema de Média Escolar!\n\n");  

  

        printf("Digite a primeira nota: "); 

        scanf("%d",&n1); 

         

        printf("Digite a segunda nota: "); 

        scanf("%d",&n2); 

         

        printf("Digite a terceira nota: "); 

        scanf("%d",&n3); 

         

        printf("Digite a quarta nota: "); 

        scanf("%d",&n4); 

  

        media = (n1 + n2 + n2 + n4)/4;  

  

        if(media>=5) {  

            printf("\nO aluno foi Aprovado!!!");  

            }  

  

        else {  

            printf("\nO aluno encontra-se REPROVADO!!!");  

            }  

  

              

  

        printf("\nA média do aluno foi de: %d", media);  

  

        printf("\n\n---Fim do Programa---");  

  

    return 0; 

} 