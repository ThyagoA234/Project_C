#include <stdio.h>
#include <stdlib.h>

void V_MaiorouMenor();
void S_DoisNumeros();
void V_Primo();


int main()
{ 
    int i,x,op,soma,p,v;
    int c=0;
   
    printf("\n\t*Bem Vindo ao Comparador*\n\n");
    
    printf("*Qual operação deseja realizar?*\n");
    printf("Digite (1) para verificar o Maior ou Menor número\n");
    printf("Digite (2) para soma de dois números\n");
    printf("Digite (3) para verificar se o número digitado é primo\n");
    printf("Digite (4) para finalizar operação\n");
    printf("Op: ");
    
    scanf("%d",&op);
    
    
    switch(op){
        
    case 1:
    V_MaiorouMenor();
    break;
    
    
    case 2:
    S_DoisNumeros();
    break;
    
    
    case 3:
    V_Primo();
    break;
    
    case 4:
    return 0;
    break;
    
    default:
    printf("*******Favor digitar Valor Valido!!*******");
    return 0;
    break;
    
    }

     while(op<4){
         int c=0;
         
         
         printf("\n\t*Deseja realizar outra operação?*\n\n");
    
    printf("*Qual operação deseja realizar?*\n");
    printf("Digite (1) para verificar o Maior ou Menor número\n");
    printf("Digite (2) para soma de dois números\n");
    printf("Digite (3) para verificar se o número digitado é primo\n");
    printf("Digite (4) para finalizar operação\n");
    printf("Op: ");
    
    scanf("%d",&op);
    
        
   switch(op){
        
    case 1:
    V_MaiorouMenor();
    break;
    
    
    case 2:
    S_DoisNumeros();
    break;
    
    
    case 3:
    V_Primo();
    break;
    
    case 4:
    return 0;
    
    default:
    printf("Favor digitar Valor Valido!!");
    
    break;
}   
}
}

void V_MaiorouMenor(){
    int i,x;
    
    printf("Digite o primeiro valor a ser analisado: ");
    scanf("%d",&i);
    
    printf("Digite o segundo valor a ser analisado: ");
    scanf("%d",&x);
    
    
    if(i>x)
    {
        printf("*******O maior valor é %d*******\n",i);
        printf("*******O menor valor é o %d*******\n",x);
    }
    
    else
    {
        
    printf("*******O menor valor é %d*******\n",i);
    printf("*******O maior valor é o %d*******\n",x);
    }
    
    
}



void S_DoisNumeros(){
    int i,x,soma;
    
    printf("Digite o primeiro valor a ser somado: ");
    scanf("%d",&i);
    
    printf("Digite o segundo valor a ser somado: ");
    scanf("%d",&x);    
    
    soma=i+x;
    
    printf("*******O Resultado é %d*******\n",soma);
    
}


void V_Primo(){
    int p,v;
    int c = 0;
          printf("Favor digitar o número a ser analisado: ");
    scanf("%d", &v);
    for (p =1; p<=v; p++){
        if (v % p==0){
            c++;
        }
    }
       
        if(c==2){printf("*******O número %d, é primo*******\n", v);}
        
        else{printf("*******O número %d, não é primo*******\n", v);}
        
    
}

