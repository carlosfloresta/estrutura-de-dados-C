#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int numero,resultado,n1,n2,n3,n4,n5,maior,menor,media;


int exer1 ()                                    // EXERCICIO 1 //
{

    printf("\n Exercicio 1: \n");
    printf("\n 1 - Varivel 'total' nao existe so existe 'Total'");
    printf("\n 3 - so existe um 'porcentagem d' quando o certo seria 'porcentagem d' 'porcentagem f' 'porcentagem f'");
    
    int A = 20; 
	int B = 15;
	B += A;
	printf("\n 5 - O valor de A eh %d",A);
	{int B = 25;
	B+=A;
	A*=2;
	printf("\n");
	printf("\n 7 - O valor de A eh %d",A);
	}
	
	B=A;
	{
		int A = 35;
		B+=A;
		printf("\n");
		printf("\n 9 - O valor de A eh %d ",A);
	}
	
	
	int X = 25; 
	A = 40;
	
	X = A--;
	printf("\n 11 - O valor de X eh %d ",X);
	X=A-- - ++A - A-- + --A;
	printf("\n 13 - O valor de X eh %d ",X);
	
	
	static int valores[]={12,33,78,33,1000,56,12,88,123,-123,-55},*P;
	P = &valores[6];
	P+=2;
	printf("\n 15 - O valor de P eh %d ",*P);
	
	
	int a = 1, b=4,C;
	
	C= a>>b++;
	printf("\n");
	 printf("\n 17 - O valor de a eh %d ",a);
	 
	 C=a<<--b;
	 printf("\n");
	 printf("\n 19 - O valor de a eh %d ",a);
	 
	 C=--a+b++;
	 printf("\n");
	 printf("\n 21 - O valor de a eh %d ",a);
	 
	 C=a>b?(a<b?10:35):(b<a?60:90);
	 
	 printf("\n");
	 printf("\n 23 - O valor de A eh %d ",a);
	 
	 
	 char vet[] = "1370481323086";
	 char i,*ptr;
	 ptr = vet ;
	 
	 printf("\n 25 - O valor de ptr eh %c ",*ptr);
	 
	 
	 static char valoress[]={1,2,3,4,5,6,7,8,9,10,11},*p;
	 p=&valoress[2];
	 
	 p+=6;
	 printf("\n 27 - O valor de P eh %d ",*p);
	 
	
	
	
    
    
	
	system("pause");
}
	

int exer2 ()                 //EXERCICIO 2 //
{
	
	int X,A;
	printf("\n Exercicio 2 \n");
	printf("\n Insira o valor da variavel x :");
	scanf("%d",&X);
	printf("\n Insira o valor da variavel A :");
	scanf("%d",&A);
	
	X= A--;
	printf("\n 11 - O valor de A eh: %d , o valor de x eh %d:",A,X);
	X=A++ + A++ + A++ + ++A;
	printf("\n 12 - O valor de A eh: %d , o valor de x eh %d:",A,X);
	X = A-- - ++A - A-- + --A;
	printf("\n 13 - O valor de A eh: %d , o valor de x eh %d:",A,X);
	
	
	
	

	
	
	system("pause");
}


int exer3 ()   //EXERCICIO 3 //
{
	
	printf("\n Exercicio 3 \n");
	
	int a,b,C;
	
	printf("\n Insira o valor da variavel a :");
	scanf("%d",&a);
	
	printf("\n Insira o valor da variavel b :");
	scanf("%d",&b);
	
	
	C= a>>b++;
	
	printf("\n");
	 printf("\n 17 - O valor de a eh %d ",a);
	 printf("\n 18 - O valor de b eh %d ",b);
	 
	 C=a<<--b;
	 printf("\n");
	 printf("\n 19 - O valor de a eh %d ",a);
	 printf("\n 20 - O valor de C eh %d ",C);
	 
	 C=--a+b++;
	 printf("\n");
	 printf("\n 21 - O valor de a eh %d ",a);
	 printf("\n 22 - O valor de b eh %d ",b);
	 
	 C=a>b?(a<b?10:35):(b<a?60:90);
	 
	 printf("\n");
	 printf("\n 23 - O valor de A eh %d ",a);
	 printf("\n 24 - O valor de b eh %d ",b);
	 
	
	
   system("pause");
}



int exer4 ()                        //EXERCICIO 4 //
{

	int valores[]={1,3,7,0,4,8,1,4,1,3,0,7,1};
	
	int i;
	int mult,soma,div;
	
	for(i=0;i>13;i--){
		mult = i * valores[i] ;	
		
		soma +=mult;
	 
	}
	div= soma/11;	
	
	 
	 printf("\n 27 - Resto da divisao por 11 : %d \n",div);
	 printf("\n 28 - Par ou Impar ");
	 if (div % 2 == 0){
		printf("\n Seu numero e PAR! \n");
	
	}
	else {
		printf("\n Seu numero e IMPAR! \n");
	}
	 
		
		system("pause");
	}
	
	

int main(int argc, char *argv[]) {
	
	system ("color f0");
	int decisao;
	
	while (decisao != 25)
	{
	printf("\n                                                                                       Data da entrega: 15/05/2017     \n");
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	printf("\n **************************************************ESTRUTURA DE DADOS**************************************************\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("                                RA:1370481413071 NOME:Carlos Henrique Costa Floresta                                  \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\n 1- Exercicio 1 \n");
	printf(" 2- Exercicio 2 \n");
	printf(" 3- Exercicio 3 \n ");
	printf("4- Exercicio 4 \n");
	
	printf(" 22- SAIR \n");
	
	printf("\n\n----------------------------------------------------------------------------------------------------------------------\n\n");
	
	scanf("%d", &decisao);
	
	    switch (decisao){
		      
		case 1: 
		        system("cls");
		        
	            
	
	            resultado= exer1();
		break;
		
		case 2: system("cls");
		        
               
                
                resultado = exer2();
		break;
		
		case 3: system("cls");
		        
                
                resultado = exer3();
                
        break;
        
        case 4: system("cls");
        
		resultado = exer4();
        break;
        
        
		
		case 22: exit(1);
		break;
		
		
		default : system("cls");
		
		printf("\n\n\n COMANDO ERRADO! \n\n\n");
        
        system("pause");
	
	}	
    
}

	return 0;
}
