#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100000
 

void randomiza(int vet[],int num)
{
     int i;
     srand(time(NULL));
        printf("Vetor em Ordem Aleatoria \n");
        for (i=0; i<TAM; i++)
        {
                vet[i]=rand() % TAM;
        }
}
 

void QuickSort(int vet[], int esquerda, int direita)
{
    int i, j;
    int x, y;
    i=esquerda; j=direita;
    x=vet[(esquerda+direita)/2];
 
  do
  {
    while(vet[i]<x && i<direita)
    i++;
         while(x<vet[j] && j>esquerda)
     j--;
     if(i<=j)
     {
         y=vet[i];
         vet[i]=vet[j];
         vet[j]=y;
         i++;
         j--;
     }
 
   }while(i<=j);
 
    if(esquerda<j)
    QuickSort(vet, esquerda, j);
           if(i<direita)
           QuickSort(vet, i, direita);
}

 

void SelectionSort(int vet[], int num)
{
     int menor, i=0, y, aux;
     while (i<num)
    {
            menor=vet[i];
            y=i+1;
            while (y<num)
        {
                    if (vet[y] < menor)
            {
                                  aux = vet[y];
                                  vet[y] = menor;
                                  menor = aux;
                        }
                     y++;
                 }
           vet[i]=menor;
           i++;
       }
}

 

void InsertionSort(int vet[], int num)
{
        int i, j;
        int key;
        for (j=1;j<num;++j)
    {
                key = vet[j];
                i = j - 1;
                while (vet[i] > key && i >= 0)
         {
                        vet[i+1] = vet[i];
                        --i;
                 }
              vet[i+1] = key;
        }
}





void bubbleSort (int v[],int num) {
    int a, b, aux;
    for (a=num-1; a>=1; a--) {
        for (b=0; b<a; b++) {
            if (v[b]>v[b+1]) {
                aux = v[b];
                v[b] = v[b+1];
                v[b+1] = aux;
            }
        }
    }
}



void shell_sort(int *a, int size){ 
    int i , j , value;
    int gap = 1;
      do {
        gap = 3*gap+1;
         } while(gap < size);
      do {
          gap /= 3;
          for(i = gap; i < size; i++) {
          value = a[i];
          j = i - gap;
             while (j >= 0 && value < a[j]) {
            a[j + gap] = a[j];
            j -= gap;
            }
         a[j + gap] = value;
         }
      }while(gap > 1);
 }




 

int main()
{
        clock_t inicio,fim;
        int vet[TAM],i,num=0,opcao,op;
        double quick=0,selection=0,insertion=0,sort=0,shell=0;
        
    do
    {
      printf("\n***************Tempo de Cada metodo de Ordenacao*************\n\n");
      printf(" 1 - QuickSort\n 2 - SelectionSort\n 3 - InsertionSort\n 4 - BubbleSort\n 5 -  ShellSort\n 6 - Mostrar Tempos\n 7 - Sair\n");
      printf("\n\n ____________________________________________\n\n");
      scanf("%d",&opcao);
      
  switch(opcao)
  {
       case 1:   system("cls");
       {
           
             randomiza(vet,TAM);
 
            inicio=clock();
                QuickSort(vet, 0, TAM-1);
                fim=clock();
                quick = (double)(((double)fim-(double)inicio)/CLOCKS_PER_SEC);
                printf("\n%3.3f Segundos para Ordenar %d numeros com o Metodo QuickSort\n\n",quick,TAM);
               
                break;
 
         }
         case 2:  system("cls");
     {
             
               randomiza(vet,TAM);
 
                 inicio=clock();
                 SelectionSort(vet,TAM);
                 fim=clock();
                 selection = (double)(((double)fim-(double)inicio)/CLOCKS_PER_SEC);                               
				  printf("\n%3.4f Segundos para Ordenar %d numeros com o Metodo SelectionSort\n\n",selection,TAM);
         
                 break;
 
      }
          case 3:  system("cls");
      {
              
                randomiza(vet,TAM);
 
              inicio=clock();
              InsertionSort(vet,TAM);
          fim=clock();
          insertion = (double)(((double)fim-(double)inicio)/CLOCKS_PER_SEC);                                       
		     printf("\n%3.4f Segundos para Ordenar %d numeros com o Metodo InsertionSort\n\n",insertion,TAM);
                 
                  break;
 
          }
          
           case 4:  system("cls");
      {
             
                randomiza(vet,TAM);
 
              inicio=clock();
              bubbleSort(vet,TAM);
          fim=clock();
          sort = (double)(((double)fim-(double)inicio)/CLOCKS_PER_SEC);                                       
		     printf("\n%3.4f Segundos para Ordenar %d numeros com o Metodo BubbleSort\n\n",sort,TAM);
               
                  break;
 
          }
          
          
          case 5: system("cls");
      {
             
                randomiza(vet,TAM);
 
              inicio=clock();
              shell_sort(vet,TAM);
          fim=clock();
          shell = (double)(((double)fim-(double)inicio)/CLOCKS_PER_SEC);                                       
		     printf("\n%3.4f Segundos para Ordenar %d numeros com o Metodo ShellSort\n\n",shell,TAM);
               
                  break;
 
          }
          
          case 6:  system("cls");
          {
                      printf("Tempo do QuickSort = %3.3f s\n",quick);
                      printf("Tempo do SelectionSort = %3.3f s\n",selection);
                      printf("Tempo do InsertionSort = %3.3f s\n",insertion);
                       printf("Tempo do BubbleSort = %3.3f s\n",sort);
                       printf("Tempo do ShellSort = %3.3f s\n",shell);
                      break;
          }
          
          case 7: exit(1);
		break;
		
		
		default : system("cls");
		
		printf("\n\n\n COMANDO ERRADO! \n\n\n");
        
        system("pause");
 
     }
 
    }while(opcao>0||opcao<7);
return 0;
}
