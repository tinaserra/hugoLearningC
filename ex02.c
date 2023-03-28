#include <stdio.h> // Bibliotheque pour que ton compilateur puisse aller chercher printf() et scanf()

int main()
{
    char couleur_feu;
        printf("rentrer la couleur du feu: (R:rouge    V:vert    O:orange)\n");
        scanf("%c", &couleur_feu);
        if (couleur_feu == 'R'){
            printf("STOP\n");
            return 0;
        }
        if (couleur_feu == 'V'){
            printf("ON PASSE\n");
            return 0;
        }
        if (couleur_feu == 'O'){
            printf("RALENTISSEZ\n");
            return 0;
        }
        else 
            printf("rentrer une des couleurs citees\n");
    return 0;
}