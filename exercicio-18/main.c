#include <stdio.h>

int main() {
    int velocidade_maxima, velocidade_motorista, excesso, multa;
  
    printf("Digite a velocidade maxima permitida na avenida (km/h): ");
    scanf("%d", &velocidade_maxima);
    
    printf("Digite a velocidade com que o motorista estava dirigindo (km/h): ");
    scanf("%d", &velocidade_motorista);
  
    if (velocidade_motorista > velocidade_maxima) {
        excesso = velocidade_motorista - velocidade_maxima;
        multa = excesso * 5;
        printf("O motorista foi multado! Valor da multa: R$ %d\n", multa);
    } else {
        printf("O motorista não foi multado.\n");
    }

    return 0;
}
