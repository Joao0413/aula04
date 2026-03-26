#include <stdio.h>

int main() {
    int horas, minutos, totalMinutos, horasTrabalhadas, minutosRestantes;

    printf("Quantas horas você trabalhou no dia? ");
    scanf("%d", &horas);
    printf("Quantos minutos você trabalhou no dia? ");
    scanf("%d", &minutos);

    totalMinutos = horas * 60 + minutos;
    horasTrabalhadas = totalMinutos / 60;
    minutosRestantes = totalMinutos % 60;

    if (totalMinutos > 480) {
        if (horasTrabalhadas > 8) {
            printf("Quantidade adicionada ao banco: %d horas\n", horasTrabalhadas - 8);
        }
        printf("Quantidade adicionada ao banco: %d minutos\n", minutosRestantes);
    } else {
        if (horasTrabalhadas < 7) {
            printf("Quantidade retirada do banco: %d horas\n", 8 - horasTrabalhadas - 1);
            printf("Quantidade retirada do banco: %d minutos\n", 60 - minutos);
        } else {
            printf("Quantidade retirada do banco: %d minutos\n", 480 - totalMinutos);
        }
    }

    return 0;
}