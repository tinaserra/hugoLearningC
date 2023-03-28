#include <stdio.h>

/*
 * printf() -> écris (print) ce que tu lui demandes dans le terminal / la console (la sortie standard)
 *             elle peut prendre un ou plusieurs parametres entre ses parentheses:
 *             - Un 'char*' : une string (chaine de caractere) -> printf("ceci est une string");
 *             - Un 'char' : caracter (un caractere ascii donc le caractere 'a' '2' '?') -> printf("%c", 'a');
 *             - Un 'int' : integer (un nombre entier negatif ou positif) -> printf("%d", 42);
 *             - Un 'float' : un nombre a virgule negatif ou positif -> printf("%f", 42.0000);
*/

int main()
{
	/* Tu declares tes varaibles de type float */
	float prixHT = 169, TVA = 20, prixTTC;

	prixTTC = (TVA / 100 + 1) * prixHT;
	/*
	 * /!\ Ne peut pas s'ecrire (TVA / 100 + 1) * prixHT = prixTTC;
	 * en C c'est la valeur de ce qui est a droite du egal
	 * qui est assigné dans la variable a gauche du egal
	*/

	/* Tu affiches prixTTC */
	printf("Le prix TTC est de %f\n", prixTTC);
}