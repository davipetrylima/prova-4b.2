#include <stdio.h>

int main(){
int opção = -1;
int opção2 = -1;

while(opção != 0){
    printf("Aperte 0 para sair loop\n");
    printf("Aperte 1 para ligar para a polícia\n");
    printf("Aperte 2 para ligar para o bombeiro\n");
    printf("Aperte 3 para ligar para o SAMU\n");
    scanf("%d",&opção);
    if(opção == 1){
        printf("Ligando para a polícia\n");
        printf("Aperte 0 para finalizar a ligação\n");
        scanf("%d",&opção2);
    }
    else if(opção == 2){
        printf("Ligando para o bombeiro\n");
        printf("Aperte 0 para finalizar a ligação\n");
        scanf("%d",&opção2);
    }
    else if(opção == 3){
        printf("Ligando para o Samu\n");
        printf("Aperte 0 para finalizar a ligação\n");
        scanf("%d",&opção2);
    }
    
}
    return 0;
}