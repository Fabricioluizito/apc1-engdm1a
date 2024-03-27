/* 7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/


#include <stdio.h>
#include <math.h>

int main() {
    float distancia, angle, height;

    printf("Entre com a altura: ");
    scanf("%f", &distancia);

    printf("Entre com o angulo: ");
    scanf("%f", &angle);

    angle = angle * P_tmpdir / 180;

    height = distancia * sin(angle);

    printf("A altura é: %f\n", height);

    return 0;
}
