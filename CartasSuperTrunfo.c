#include <stdio.h>

int main () {
//supertrunfo parte2. nivel novato if e else

//CARTA 1

char estado1 = 'C';
char codigo1 [10] = "C01";
char cidade1 [20] = "Curitiba";
unsigned long int população1 = 1830000;
float area1 = 435.036;
float pib1 = 120.000000000;
int turismo1 = 47;

//CARTA 2

char estado2 = 'D';
char codigo2 [10] = "D02";
char cidade2 [20] = "Caruaru";
unsigned long int população2 = 405410;
float area2 = 923.150;
float pib2 = 29.738000;
int turismo2 = 48;

if (população1 > população2) {
    printf ("A população da Carta 1 é maior do que da Carta 2\n");
}else {
    printf ("A população da Carta 2 é maior do que da Carta 1\n");

}
if (area1 > area2) {
    printf ("A Area da Carta 1 é maior que a Area da Carta 2\n");

}else {
    printf ("A Area da Carta 2 é maior que a Area da Carta 1\n");
}

if (pib1 > pib2) {
    printf ("O PIB da Carta 1 é maior que o da Carta 2\n");
}else {
    printf ("O PIB da Carta 2 é maior que o da Carta 1\n");
}

if (turismo1 > turismo2) {
   printf ("A Carta 1 tem maiores pontos turisticos\n");
}else {
    printf ("A Carta 2 tem maiores pontos turisticos\n");
}

return 0;

}