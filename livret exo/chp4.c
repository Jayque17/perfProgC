/* Chapitre 4 : Entrées et sorties */
#include <stdio.h>

/* Exercice 4.1 */
/* 1. */

void afficher_drapeau(int n){

    int minus = n;
    int star = 0;

    while(star < n){

        for(int i = 0; i < star; ++i){

            printf("*");
        }

        for(int i = 0; i < minus; ++i){

            printf("-");
        }

        printf("\n");

        -- minus;
        ++ star;
    }
}


/* 2. */

void afficher_damier(int n){

    for(int i = 0; i < n; ++i){

        if(i % 2 == 0){

            for(int j = 0; j < n; ++j){

                if(j % 2 == 0){

                    printf("*");
                }

                else{

                    printf("-");
                }
            }

            printf("\n");
        }

        else{

            for(int j = 0; j < n; ++j){

                if(j % 2 == 0){

                    printf("-");
                }

                else{

                    printf("*");
                }
            }

            printf("\n");
        }
    }
}


/* 3. */

void affiche_triangle(int n){

    int star = 1;
    for(int i = 1; i <= n; ++i){

        for(int j = star; j > 0; --j){

            printf("*");
        }

        printf("\n");

        star += i;
    }
}


/* to test de functions */

int main(void){

    int num;
    int n;

    printf("choose a number : ");
    scanf("%d", &num);

    printf("now choose beetween :\n");
    printf("[1] display a flag, [2] display a checkboard, [3] display a triangle\n");
    scanf("%d", &n);

    switch(n){

        case 1:

            afficher_drapeau(num); break;

        case 2:

            afficher_damier(num); break;

        case 3:
            
            affiche_triangle(num); break;
        default:

            printf("your choice is incorrect, bye"); break;
    }

    return 0;
}