/* 
Q1 
a = b = b + 1
-> a = 4
l'effet de bord produit fait que 4 est affecté à b et 4 est affecté à a.

Q2
c != '/0' est vraie donc elle à pour valeur 1
donc ce qui est renvoyé est la première partie de la conditionnelle, cad en 0.
donc l'expression globale est équiavalent à l'expression a = 0.
Cette expression à pour valeur 0 et possède comme effet de bord d'affecter 0 à la variable a.

Q3
printf(..) renvoie le nb de caractère imprimé.
réalise un effet de bord en modifiant le fichier stdout.
attention à la "," c'est la valeur de l'expr1 qui est conservée mais les effet de bord de expr1 et expr2 sont bien exécutées.

Q4
* (*x + 1) - **x
x : short**

Règles:
(1)si x : T*
    *x : T (déréférentiation)

(2) si x:T
    &x : T* (considère l'adresse)

*x : short*
*x + 1 : short*
* (*x + 1) : short
* (*x + 1) - **x : short
justification = faire les sous expressions.

Q13
NE PAS OUBLIER LA PREASSERTION AVEC PTR != NULL


REGARDER LES EXOS 8.3 ET 8.2 DU LIVRET.
APPEL DE FONCTIONS DANS LE PROTOTYPE PERMET D'EVITER LA REDONDANCE DE CODE.
*/