#include <stdio.h>
#include <stdlib.h>

//d�claration des constantes pour le dessin du carr�
#define ETOILE '*'
#define PLUS '+'

int main()
//BUT : faire un carr� constitu� de * et de +
//ENTREE : deux entiers saisis par l'utilisateur
//SORTIE : carr� de contours *, de longueurs choisies par l'utilisateur et rempli de +
{
    int nb1=0;
    int nb2=0;
    int i=0;
    int j=0;

    //r�cup�ration des longueurs choisies par l'utilisateur
    printf("Entrez un entier pour la longueur du 1er cote\n");
    scanf("%d",&nb1);

    printf("Entrez un entier pour la longueur du 2e cote\n");
    scanf("%d",&nb2);

    //boucles pour le dessin du carr�
    for(i=0;i<nb2;i++){

            for(j=0;j<nb1;j++){

                //contours
                if((i==0) || (i==(nb2-1)) || (j==0) || (j==(nb1-1)))
                    printf("%c",ETOILE);

                //int�rieur
                else
                    printf("%c",PLUS);

            }

            printf("\n");
    }

    return 0;
}
