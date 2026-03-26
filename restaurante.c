#include <stdio.h>

int main() {
    
    int tipo;
    
    printf("Tipo: casal - 1, familia com criança - 2, outros - 3: ");
    scanf("%d", &tipo);
    
    switch(tipo){
        case 1:
            printf("Indicar area jardim.");
            break;
        case 2:
            printf("Indicar area brinquedos.");
            break;
        case 3:
            printf("Indicar area vip.");
            break;
        default:
            printf("Erro. Tente novamente.");
            break;
    }
   
    return 0;
}