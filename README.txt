
On a fait l'ensemble du projet a part les strutures, c'est à dire un compilateur qui comprend:
    1. [x] un mécanisme de déclarations explicite de variables,
    2. [x] des expresssion arithmétiques arbitraire de type calculatrice,
    3. [x] des lectures ou écritures mémoires via des affectations avec variable utilisateur,
    4. [x] un mécanisme de typage comprenant notamment int et float,
    5. [x] des lectures ou écritures mémoires via des pointeurs,
    6. [x] définitions et appels de fonctions paramétrés et récursives.
    7. [ ] un mécasnime de déclaration et d'utilisation de typé structurés (struct),

On a également:
    - changé la grammaire pour corriger l'utilisation des points virgules
    - changé la grammaire pour faciliter l'implimentation (notament block,if,func,..)
    - printf apres chaque affectation
    - une pile pour les portées de variables dans les blocs
    - une pile pour les paramètres de fonction et les adresses de retour (récursive)

NB:
    - le nom d'un variable doit etre unique dans tout le code source
    - si le type de retour d'une fonction != void elle doit contenir l'inst "return"
Pour compiler le projet:
$ make

Pour tester le projet:
$ make test

Pour nettoyer le projet:
$ make clean

Pour lancer le compilateur:
$ ./compil.sh test/test.myc


TODO: 
    - structs using a buffer + attribute offset
    - handle casting correctly



int a, c;
int* b;

void f(int f_x) { x = x+1; }

a = 4;
*b = 2;
c = a + *b * 2;
if (c == 10) {
    c = c + 1;
} else {
    c = c + 10;
}
*b = c - a;
f(a);
a = 0;