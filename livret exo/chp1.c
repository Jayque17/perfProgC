
#include <stdio.h>

/*

Exercice 1.1


1. 
Ce sont des instruction qui permettent de tester si une condition est vraie ou non.
il y a : if, if ... else, switch

2.
switch est pratique pour tester plusieur résultat possible sur une condition.
Quand à if il sert plus à verifier si la condition est vrai.

switch(couleur) {
    case rouge :
    printf("rouge\n");break;


    case bleu :
    printf("bleu\n");break;

    case jaune :
    printf("jaune\n");break;

    default:
    printf("ni rouge ni bleu ni jaune\n");break;

}

if(strcmp(couleur, "rouge")){
    printf("c'est la couleur rouge");
}

3.
C?X:Y

si la condition C est vrai
    faire X
sinon
    faire Y



Exercice 1.2


1.
Elles permettent de répeter les mêmes instructions plusieurs fois.
il y a : for, while, do...while

2.
la boucle for repete un nombre de fois definis l'instruction demandée.
Tandis que la boucle while va le faire de manière indéfinis.



Exercice 1.3

1.
Un bloc est une suite de déclarations et d'instructions encadrée par les deux 
accolades { et }. Du point de vue de la syntaxe il se comporte comme une instruction 
unique et peut figurer en tout endroit ou une instruction simple est permise.

2.
La portée lexicale d'une variable c'est là où elle peut être utiliser dans le programme.

3.
(a) a, b et c ont une portée léxicale de la ligne 2 à la 16.
(b) x de l1 à l14
    y de l3 à l13
    z de l4 à l13
(c) a et b l1 à l16



Ex 1.4

1.
(a) 0000 0000 0000 0000 (0)
(b) 0000 0000 0000 0001 (1)
(c) 0000 0000 0000 1010 (10)
(d) 0000 1000 1011 0000 (2224)
(e) 0000 1100 1000 0000 (3200)
(f) 0000 0000 0000 0000 (-0)
(g) 1111 1111 1111 1111 (-1)
(h) 1111 1111 1111 0110 (-10)
(i) 1111 1111 1111 0000 (-16)
(j) 1111 1111 1110 0000 (-32)
(k) 1111 0111 0101 0000 (-2224)
(l) 1111 0011 1000 0000 (-3200)

2.
(a) 0000 3A81
(b) 0000 0001
(c) 000F F25F
(d) 0000 0010

3.
(a) 0001 0000 0001 0000 (1010)
(b) 0000 1010 1011 1100 (ABC)
(c) 0000 1111 0000 1011 (F0B)
(d) 0001 0010 0011 1010 (123A)



ex 1.5

1.
*/

int main(void){

    int n;
    printf("Choisir une valeur pour la suite de Syracuse : \n");
    scanf("%d", &n);
    
    printf("n = %d\n", n);    
    
    while(n > 1){

       
        if(n % 2 == 0){

            n = n/2;
        }

        else{

            n = 3*n + 1;
        }

        printf("n = %d\n", n);
    }

    printf("n = %d\n", n);

    return 0;
}

/*
2.
Oui car c'est un ensemble de règles opératoires dont l'application permet de résoudre 
un problème énoncé au moyen d'un nombre fini d'opérations. Un algorithme peut être 
traduit, grâce à un langage de programmation, en un programme exécutable par un 
ordinateur.
*/