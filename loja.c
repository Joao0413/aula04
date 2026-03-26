#include <stdio.h>

int main() {
    
    float compra;
    
    printf("Qual o valor total da compra? ");
    scanf("%f", &compra);
    printf("Total da compra: %.2f\n", compra);
    
    if(compra > 50){
        printf("Você ganhou um brinde!");
    }

    return 0;
}