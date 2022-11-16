#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Déclaration des variables
    float x, y, z ;

    // Travail à faire
    printf("Veuillez entrer le nombre X: ");
    scanf("%f",&x);

    printf("Veuillez entrer le nombre Y: ");
    scanf("%f",&y);

    z = pow(x,y);
    printf("Le resultat de x puissance y est de %.1f .", z);

    return 0;
}
