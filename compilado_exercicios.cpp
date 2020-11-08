#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int numero,resultado,n1,n2,n3,n4,n5,maior,menor,media;
int vetor[50];
double n6,n7,n8,n9,n10,resultado1;
float a,b,c,delta,r1,r2;
char nome[30],resultado2,nome1;
int matrizA[4][4];

int parimpar (int a)                                    // EXERCICIO 1 //
{

	if (a % 2 == 0){
		printf("\n Seu numero e PAR! \n");
	
	}
	else {
		printf("\n Seu numero e IMPAR! \n");
	}
	
	system("pause");
}
	

int maiornumero (int a,int b,int c)                 //EXERCICIO 2 //
{
	
	if (a>b && a>c)
    printf(" \n o maior numero e o : %d \n",a);
    
    else if (b>c) 
    printf(" \n o maior numero e o : %d \n",b);
    
    else 
    printf(" \n o maior numero e o : %d \n",c);
	
	system("pause");
}


int juiz (int a,int b,int c, int d, int e, int m, int n,int med)   //EXERCICIO 3 //
{
	
	if (a>b && a>c && a>d && a>e){
	m=a;

    }
	else if (b>a && b>c && b>d && b>e){
    m=b;
}
    else if (c>b && c>a && c>d && c>e){
    m=c;
}
    else if (d>b && d>c && d>a && d>e){
    m=d;
}
    else {
    m=e;
}
    
    if (a<b && a<c && a<d && a<e){
	 n=a;
     
     }
	 else if (b<a && b<c && b<d && b<e){
	 
    n=b;
}
    else  if (c<b && c<a && c<d && c<e){

    n=c;
}
    else if (d<b && d<c && d<a && d<e){

    n=d;
}
    else {
    n=e;
}
   
    med = ((a+b+c+d+e)-(m+n))/3;

   printf("\n a media final e : %d \n ", med);
   
   system("pause");
}



int impares (int i,int impar)                        //EXERCICIO 4 //
{

	for(i=0;i<100;i++)
	
	if(i % 2 == 1){
		impar=impar+i;
	}
		
		printf("\n A soma dos numeros Impares ate 100 e : %d\n",impar);
		
		system("pause");
	}
	
	
int gados (int i,double peso,double media,double soma,int a)     //EXERCICIO 5 //
{
	
	
	
		
	do{
		printf("\n Digite quantos gados deseja saber a media: \n");
		scanf("%d",&i);
		soma=0;
	    
			
		for (a = 1; a <= i; a++) {
        printf("\n Digite o peso do gado : \n ");
		scanf("%lf",&peso);
        soma += peso;
        
        if(peso==0)
        break;
 } 
		
	
	media = soma  / i;
	printf("\n A media dos gados e : %f \n",media);

	
	}while (i != 0);
	
	system("pause");
}


int aluno(int a,int b,double nota,double media,double soma,double maior,double menor){             //EXERCICIO 6 //
	
	
	do{
		printf("\n Numeros de alunos que deseja verificar media: \n ");
		scanf("%d",&a);
		
		soma=0;
		
		for (b = 1; b <= a; b++){
			printf("\n Digite a nota do aluno %d :" , b); 
			scanf("%lf",&nota);
			
			soma += nota;
			if(nota==0){
		break;	
		}
		
		
			if (b==1){
			maior=nota;
			menor=nota;	
				
			}else {
				if (nota>maior){
					maior=nota;
				}else{
					if(nota<menor){
						menor=nota;
					}
				}
			}
			
			
			
		}
				
		media = soma / a;
		printf("A media da sala e: %f \n ",media);
		printf("A maior nota foi: %f \n",maior);
		printf("A menor nota foi: %f \n",menor);
		
	
	}while (a != 0);
	
	system("pause");
		
}


int polinomio (float a,float b,float c,float delta,float r1,float r2){         //EXERCICIO 7 //
	
	
	printf("\n Digite o valor de A: \n");
	scanf("%f",&a);
	
	printf("\n Digite o valor de B: \n ");
	scanf("%f",&b);
	
	printf("\n Digite o valor de C: \n");
	scanf("%f",&c);
	
	delta=pow(b,2)-4*a*c;
	
	if(delta<0){
		
		printf("\n Nao existem raizes ! \n");
	}	
	
	r1=((-b)+(sqrt(delta)))/(2*a);
	r2=((-b)-(sqrt(delta)))/(2*a);
	
	if(delta==0){
		printf("x : %f \n",r1);
	}
	if(delta>0){
		printf("x1 : %f \n",r1);
		printf("x2 : %f \n",r2);
	}
	
	system("pause");
	
}

int triangulo (int a,int b,int c){               //EXERCICIO 8 //
	
	
	printf("\n Digite o primeiro lado do triangulo: \n");
	scanf("%d",&a);
	
	printf("\n Digite o segundo lado do triangulo: \n");
	scanf("%d",&b);
	
	printf("\n Digite o terceiro lado do triangulo: \n");
	scanf("%d",&c);
	
	
	if (a+b>=c && a+c>=b && b+c>=a) {
		

	
	if (a==b && a==c && b==c){
		
		printf("\n Triangulo EQUILATERO \n");
	}else
	
	if (a==b || a==c || b==c){
		
		printf("\n Triangulo ISOSCELES \n");
	}else 
	
	if (a!=b && a!=c && b!=c){
		
		printf("\n Triangulo ESCALENO \n");
	}
	
	}else 
		printf("\n Os numeros nao representam os lados de um triangulo. \n");
		
		system("pause");	
}


int aluno1 (int vet[50],int a,int media,int soma,int maior,int menor){          //EXERCICIO 9 //
  
	for(a=1;a<=50;a++){
		
		
		printf(" Digite a nota do aluno: ");
		scanf("%d",&vet[a]);
		
		soma +=vet[a];
			
			if (a==1){
			maior=vet[a];
			menor=vet[a];	
				
			}else {
				if (vet[a]>maior){
					maior=vet[a];
				}else{
					if(vet[a]<menor){
						menor=vet[a];
					}
				}
			}	
	}
	
	media= soma /50;	
	printf("\n A media da sala e: %d \n ",media);
	printf("\n A maior nota foi: %d \n",maior);
	printf("\n A menor nota foi: %d \n",menor);
	
	
	system("pause");
}


int nomealuno (char nome[30],int x,int y,int tamanho,int contador){         //EXERCICIO 10 //
	    
	   contador=0;
		
	    gets(nome);
	    
	    tamanho = strlen(nome);
	    
	    for(x = tamanho; x >= 0; x--)
{
if(nome[x] == '{FONTE}')
nome[x]='{FONTE}';

printf("%c", nome[x]);
 
 if((nome[x]=='a')||(nome[x]=='e')||(nome[x]=='i')||(nome[x]=='o')||(nome[x]=='u')||(nome[x]=='A')||(nome[x]=='E')||(nome[x]=='I')||(nome[x]=='O')||(nome[x]=='U')){


contador++;
}  	
	
}
printf("\n O numero de vogais e: %d \n",contador);

system("pause");

}
 

struct temperatura{
	char cidade[50];
	int temp[5];
};

int temperatura(int a,int soma,int maior,int menor,int media){         //EXERCICIO 11 //
	
	struct temperatura p;
	char  nome;
	int x,tamanho;
	
	gets(p.cidade);
									      	
 
	for(a=1;a<=5;a++){
	printf("\n Digite a temperatura do dia %d : ",a);
	scanf("%d",&p.temp[a]);
	
	soma +=p.temp[a];
			
			if (a==1){
			maior=p.temp[a];
			menor=p.temp[a];	
				
			}else {
				if (p.temp[a]>maior){
					maior=p.temp[a];
				}else{
					if(p.temp[a]<menor){
						menor=p.temp[a];
					}
				}
			}
		
		
	}
	printf("\n");
		
	media= soma /5;	
	
		tamanho = strlen(p.cidade);
	

	for(x = 0; x <= tamanho; x++)
{
		
	printf("%c", p.cidade[x]);
	
	
}
    printf("\n");
	printf("\n Temperatura media : %d \n ",media);
	printf("\n A maior temperatura : %d \n",maior);
	printf("\n A menor temperatura : %d \n",menor);	
	
	system("pause");
}



int fatorial (int n,float fat,int i){                      //EXERCICIO 12 //
	
	
	printf("\n Digite o numero que deseja calcular seu fatorial : \n");
	scanf("%d",&n);
	
	fat=1;
	if (n==0){
	  printf("\n O fatorial de 0 e: 1 \n");
		
	}
	
	else if (n<0){
		printf("Nao existe fatorial de numero negativo!");
	}
	else{
	
	for(i=1; i<=n; i++){
		
		fat=fat*i;
	}
	
	printf("\n O fatorial de %d e: %f \n",n,fat);
}

system("pause");
}


double contfatorial (double n){        //EXERCICIO 13 //
	
 double num = 0, fat = 1, i;
	
	for(i=1; 1<=n; i++){
		
		fat=fat*i;
		
		num=num+(1/fat);
	
		if(i==n){
			
		 printf(" 1 / %.2lf = %lf",fat,num); break;
			
		}
		else{
			
		printf(" 1 / %.2lf + \n",fat); 	
		}
}   
system("pause");
		
	}
	
	
	int condominio(int a,int b){             //EXERCICIO 14 //
		
		int i,j;
		int d[1000];
		srand(time(NULL));
		printf("\n Os Soteados das %d vagas sao: ",a);	
		for(i=1;i<=a;i++){
			
		 d[i]=rand() % b+1;	
		 
		 if(a>b){
		 	
		 	printf("\n\n Valor Invalido! Favor digitar numero de vagas menor que quantidade de condominos! \n\n");
		 	break;
		 }
		   
		   for(j=1;j<i;j++)
		   
		   if(d[i]==d[j])
		   d[i]=rand() % b+1;
		   
			printf(" %d ",d[i]);	
		}
		system("pause");
	}
	
float segundograu (float a,float b,float c){              //EXERCICIO 15 //
	
	float delta,r1=0,r2=0;
	
	delta=pow(b,2)-4*a*c;
	
	if(delta<0){
		
		printf("\n Nao existem raizes ! \n");
	}	
	
	r1=((-b)+(sqrt(delta)))/(2*a);
	r2=((-b)-(sqrt(delta)))/(2*a);
	
	if(delta==0){
		printf("x : %f \n",r1);
	}
	if(delta>0){
		printf("x1 : %f \n",r1);
		printf("x2 : %f \n",r2);
	}
	system("pause");
}

int matriz(int matrizA[4][4]){           //EXERCICIO 16 //
	
	int matrizB[4][4];
	int i,j;
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
	        printf (" Digite o numero [%d][%d] da Matriz : ", i, j);
			scanf ("%d", &matrizA[i][j]);
		}
	
}
    printf("\n \n Matriz Original : \n");
	for (i=0; i<4; i++)
	{
          for (j=0; j<4; j++) 
		  {
            printf("%d\t", matrizA[i][j]);

		  }
		  printf("\n");
}

	printf("\n \n Matriz Inversa : \n");
	for (i=3;i>=0;i--){                      
		
		for (j=3;j>=0;j--){
			
			printf(" %d\t",matrizA[i][j]);
			
	
		}
		printf("\n");
}
		
	for (i=0; i<4; i++)
	{

			for (j=0; j<4; j++)
			{
				matrizB[i][j]=matrizA[j][i];
			}

	}
    printf("\n\n A Matriz Transposta : \n\n");
    
    
	for (i=0; i<4; i++)
	{
          for (j=0; j<4; j++) 
		  {
		  	
            printf(" %d\t", matrizB[i][j]);

		  }
		  printf("\n");
	}
	

		system("pause");	
	}


int carrega(int n){                                   // exercicio 17 //
	int *v;
	int i;
	v = (int*) malloc(n * sizeof(int));
	if(v == NULL){
		printf("Sem memoria \n");
	}
	
	printf("Digite o valor de N para preencher o Vetor V: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Digite o numero %d: ",i+1);
	scanf("%d",&v[i]);
		
	}
	printf("Todos os numeros de N no vetor V sao: \n");
	for(i=0;i<n;i++){
		printf("%d\n",v[i]);	
}
    
	system("pause");
	
}

char puts(char *s){                                 // exercicio 18 //
	
	s = (char*) malloc(31 * sizeof(char));
    if (!s) {
        printf("sem memoria...\n");
        system("pause");
    }
	
	printf ("\n Digite uma palavra: ");
    scanf("%s30",s);
    
    printf("\n %s \n", s);
    
    system("pause");
	
}

char strlen(){                                        // Exercicio 19 //
	int tamanho;
	
   char *s ;
   s = (char*) malloc(31*sizeof(char));
   if (!s) {
        printf("sem memoria...\n");
        system("pause");
    }

   
	printf ("\n Digite uma palavra: ");
    scanf("%s30",s);
	
	tamanho = strlen(s);

	printf("\nTotal de letras da palavra : %d \n\n",tamanho);
	
	system("pause");
}



char ordena(){
	
	char nomes[10][15]={{'o'},{'r'},{'d'},{'e'},{'n'},{'a'}}, aux[15];          //exercicio 20 //
    
int qtde, i, j;


for(i=0; i<10; i++) {
	for(j=0; j<10; j++) {
		if(strcmp(nomes[i], nomes[j]) < 0) {
		strcpy(aux, nomes[i]);
		strcpy(nomes[i], nomes[j]);
		strcpy(nomes[j], aux);
		}
	}
}

printf("\n palavra O R D E N A em ordem alfabetica \n");
for(i=0; i<10; i++){

	printf(" %s ", nomes[i]);
	
}
printf(" \n\n");
system("pause");	
	
}


int questionamentos(){
	
	printf("1)Qual o pior caso para o algoritmo BUBBLESORT?\n");
	printf("Resposta:  No pior caso, são feitas n^2 operacoes. A complexidade desse algoritmo e de Ordem quadratica. Por isso, ele nao e recomendado para programas que precisem de velocidade e operem com quantidade elevada de dados.\n\n");
	
	printf("2)Esse algoritmo pode ter melhorias? qual ou quais? \n");
	printf("Resposta: Sim, dividir o vetor em dois vetores menores que serao ordenados independentemente e combinados para produzir o resultado final. \n\n");
	
	printf("3)No metodo SHAkERSORT o numero de interacoes(trocas) e maior ou menor comparado com o BUBBLESORT? \n");
	printf("Resposta: E menor, pois o shakersort ordena em ambas as direcoes em cada passagem da lista. \n\n");
	
	system("pause");
}


int main(int argc, char *argv[]) {
	
	system ("color f0");
	int decisao;
	
	while (decisao != 25)
	{
	printf("\n                                                                                       Data da entrega: 28/04/2017     \n");
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");
	printf("\n **************************************************ESTRUTURA DE DADOS**************************************************\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("                                RA: NOME:Carlos                                 \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\n 1- PAR e IMPAR \n");
	printf(" 2- MAIOR Numero \n");
	printf(" 3- Media das notas dos Juizes descartando-se a maior e menor nota\n ");
	printf("4- Soma de todos numeros impares ate 100 \n");
	printf(" 5- Peso medio dos animais(gados) \n");
	printf(" 6- Media dos alunos e menor e maior nota \n");
	printf(" 7- Raizes do polinomio ax²+bx+c=0 \n");
	printf(" 8- Equilatero,isosceles e escaleno \n ");
	printf("9- Armazenar 50 notas e mostrar menor e maior nota, e a media da turma \n");
	printf(" 10- Escreva o nome do aluno e receba na ordem inversa, e veja a quantidade de vogais \n");
	printf(" 11- Nome da cidade e as temperaturas de 5 dias, maior, menor e temperatura media \n");
	printf(" 12- Calcular o valor fatorial \n");
	printf(" 13- Calcular valor de e=1/1!+1/2!+1/3!...1/m! \n ");
	printf("14- Vagas para condominos a cada 12 meses \n");
	printf(" 15- Calcular raizes de 2° grau usando funcoes \n");
	printf(" 16- Receber matriz e escrever ela transposta e inversa \n");
	printf(" 17- Ponteiros - funcao carrega \n");
	printf(" 18- Ponteiros - funcao puts \n");
	printf(" 19- Ponteiros - funcao strlen \n");
	printf(" 20- Ordenar em ordem alfabettica a palavra 'O R D E N A' usando o metodo bolha \n");
	printf(" 21- Questionamentos \n");
	printf(" 22- SAIR \n");
	
	printf("\n\n----------------------------------------------------------------------------------------------------------------------\n\n");
	
	scanf("%d", &decisao);
	
	    switch (decisao){
		      
		case 1: 
		        system("cls");
		        printf("\n \n 1) Digite o numero para saber se ele e PAR ou IMPAR ! \n \n");
		        printf("Digite um numero: ");
	            scanf("%d",&numero);
	
	            resultado= parimpar(numero);
		break;
		
		case 2: system("cls");
		        printf("\n \n 2) Digite 3 numeros e descubra o maior deles ! \n \n");
		        printf("Digite o primeiro numero: ");
                scanf("%d",&n1);
    
                printf("Digite o segundo numero: ");
                scanf("%d",&n2);
    
                printf("Digite o terceiro numero: ");
                scanf("%d",&n3);
                
                resultado = maiornumero(n1,n2,n3);
		break;
		
		case 3: system("cls");
		        printf(" \n \n 3) Digite 5 notas e descubra a media das notas dos Juizes descartando-se a maior e menor nota ! \n \n ");
		        printf("digite a primeira nota: ");
                scanf("%d",&n1);
    
                printf("digite a segunda nota: ");
                scanf("%d",&n2);
    
                printf("digite a terceira nota: ");
                scanf("%d",&n3);
    
                printf("digite a quarta nota: ");
                scanf("%d",&n4);
    
                printf("digite a quinta nota: ");
                scanf("%d",&n5);
                
                resultado = juiz(n1,n2,n3,n4,n5,maior,menor,media);
                
        break;
        
        case 4: system("cls");
        printf("\n \n 4) Soma de todos numeros impares ate 100  \n \n");
		resultado = impares(n1,n2);
        break;
        
        case 5: system("cls");
                printf("\n \n 5) Primeiro digite quantos gados deseja saber a media, depois coloque o Peso dos animais(gados) !  \n \n");
                printf("\n*****Digite 0 para voltar e mais um 0 para sair.****** \n ");
                
                resultado = gados(numero,n8,n6,n7,n3);
        break;        
        
        case 6: system("cls");
                printf("\n \n 6) Primeiro digite a quantidade de alunos, e depois a nota, sera apresentado a Media,menor e maior nota !  \n \n");
		        printf("*******Digite 0 para voltar e mais um 0 para sair.***** \n");
        
                resultado = aluno(n1,n2,n8,n6,n7,n9,n10);
        break;
        
        case 7: system("cls");
                printf("\n \n 7) Digite o valor de A, depois de B, e por ultimo C, para verificar se ha Raizes do polinomio ax²+bx+c=0 ! \n \n");
		resultado = polinomio(a,b,c,delta,r1,r2);
        break;
        
		case 8: system("cls");
		        printf("\n \n 8) Digite 3 numeros para descobrir se seu triangulo e Equilatero,isosceles ou escaleno ! \n \n ");
		resultado = triangulo(n1,n2,n3);
		break;
		
		case 9: system("cls");
		        printf("\n \n 9) Digite 50 notas e receba a menor e maior nota, e a media da turma ! \n \n");
		resultado = aluno1(vetor,n1,media,n2,maior,menor);
		break;
	    
	    case 10: system("cls");
	             printf("\n \n 10) Escreva o nome do aluno e receba na ordem inversa, e veja a quantidade de vogais tem no nome do aluno ! \n \n");
                 printf("\n Digite o nome do aluno : \n");
		         gets(nome);
		
		resultado = nomealuno(nome,n1,n2,n3,n4);
        break; 
		
		case 11: system("cls");
		printf("\n \n 11) Digite o nome da cidade e as temperaturas de 5 dias e receba a maior, menor e temperatura media ! \n \n");
		
		struct temperatura p;
		printf("Digite o nome da cidade : ");
	   
	    gets(p.cidade);
	    
		resultado = temperatura(a,n1,n2,n3,n4);
	 
		
		break;
		
		case 12:system("cls");
		printf("\n \n 12) Digite qualquer numero positivo para calcular o valor fatorial ! \n \n ");
		resultado = fatorial(n1,a,n3);
		break;
		
		case 13: system("cls");
		printf("\n \n 13) Digite qualquer numero para calcular valor de e=1/1!+1/2!+1/3!...1/m! \n \n ");
		
		printf("Digite o numero para calcular : ");
	    scanf("%lf",&n6);
		resultado1 = contfatorial(n6);
		break;
		
		case 14: system("cls");
		printf("\n \n 14) Digite o numero de vagas e a quantidade de condominos para efetuar o sorteio ! \n \n");
		
		printf("Digite o numero de vagas : ");
	    scanf("%d",&n1);
	    
	    printf("Quantidade de condominos : ");
	    scanf("%d",&n2);
	    
	    resultado = condominio(n1,n2);
	    break;
	    
		case 15: system("cls");
		printf("\n\n 15) Digite o valor de A,B e C para calcular raizes de 2 grau ! \n \n");
		
	    printf("\n Digite o valor de A: \n");
	    scanf("%f",&a);
	
	    printf("\n Digite o valor de B: \n ");
	    scanf("%f",&b);
	
	    printf("\n Digite o valor de C: \n");
	    scanf("%f",&c);
		
		r1 = segundograu(a,b,c);
		break;
		
		case 16: system("cls");
		
		printf("\n\n 16) Digite um total de 16 numeros para formar a matriz 4x4 e recebe-la transposta e inversa ! \n\n");
		resultado = matriz(matrizA);
		break;
		
		case 17: system("cls");
		printf("\n\n 17) Codifique a funcao carrega(v,n),que preenche um vetor v com n valores lidos do teclado \n\n");
		resultado = carrega(n1);
		break;
		
		case 18: system("cls");
		printf("\n\n 18) Codifique a funcao puts(s),que exibe uma string s no video e, depois , muda o cursor de linha \n\n");
		resultado2 = puts(&nome1);
		break;
		
		
		case 19: system("cls");
		printf("\n\n 19) Codifique a funcao strlen(s),que devolve o numero de caracteres existentes numa string s \n\n");
		resultado2 = strlen();
		break;
		
		
		
		case 20: system("cls");
		printf("\n\n 20) Ordenar em ordem alfabettica a palavra 'O R D E N A' usando o metodo bolha \n\n");
		resultado2=ordena();
		break;
		
		
		case 21: system("cls");
		printf("\n\n 21) Questionamentos: \n\n");
		resultado=questionamentos();
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
