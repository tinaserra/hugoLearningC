#include <stdio.h>

/*
 * printf() -> écris (print) ce que tu lui demandes dans le terminal / la console (la sortie standard)
 *             elle peut prendre un ou plusieurs parametres entre ses parentheses:
 *             - Un 'char*' : une string (chaine de caractere) -> printf("ceci est une string");
 *             - Un 'char' : caracter (un caractere ascii donc le caractere 'a' '2' '?') -> printf("%c", 'a');
 *             - Un 'int' : integer (un nombre entier negatif ou positif) -> printf("%d", 42);
 *             - Un 'float' : un nombre a virgule negatif ou positif -> printf("%f", 42.0000);
 * 
 * scanf() ->  récupere ce que tu ecris danss le terminal (l'entree standard) et le stocke dans une variable
 *             le format est le meme que pour printf()
 *             - pour recuperer un int et le stocker dans la variable 'nb' on fait scanf("%d", &nb);
 *               /!\ ne pas oublier le '&'
*/

int main()
{
	float prixHT,TVA,prixTTC;

	printf("veuillez saisir le prixHT: ");
	scanf("%f", &prixHT);

	printf("veuillez saisir la TVA (20 - 10 - 5) :");
	scanf("%f", &TVA);

	prixTTC = prixHT * (1 + TVA / 100);

	printf("taux de TVA : %f\nprix HT: %f\nprix TTC : %f\n", TVA, prixHT, prixTTC);

	return 0;
}