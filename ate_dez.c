#include <stdio.h>

int main() {
    
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    while(num <= 10){
        printf("%d\n", num);
        num++;
    }

    return 0;
}