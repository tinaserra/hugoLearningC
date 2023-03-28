# Les bases du C

## 0. Compiler un fichier C

1. Sur mac ou linux on a `gcc` et `clang`

```
gcc [ton_fichier.c]
```

2. Le compilateur va te creer un executable (un binaire) : `a.out`

3. Tu peux executer `a.out` :

```
./a.out
```

4. Tu peux faire les deux commandes a la suite sur la meme ligne:

```
gcc [ton_fichier.c] && ./a.out
```

## 1. Les types de variables

Dans ce tableau il n'y a pas tous les types qui existent en C mais les principaux que tu peux  rencontrer

| Type           | Description           | Exemples                              | Limits | Format |
| :------------- | :-------------------- | :------------------------------------ | :----- | :----- |
| `char`         | Caractere ascii       | `'a'` `'9'` `'%'`                     |        | `%c`   |
| `char *`       | Chaine de caracteres  | `"Ceci est une chaine de caracteres"` |        | `%s`   |
| `int`          | Nombre entier         | `1` `-1` `42` `0`  | de `-2147483648` a `+2147483647` | `%d` |
| `unsigned int` | Nombre enntier positif | `1` `42` `0` | de `0` a `+4294967295` | `%u` |
| `float`        | Nombre a virgule | `1.0001` `1.0` `42.4242` `-1.0` | de `1.17549e-038` a `3.40282e+038` | `%f` |
| `bool`         | **true** ou **false** |   |   |   |

## 2. Utiliser `printf()`

* Voir le man de [printf()](http://manpagesfr.free.fr/man/man3/printf.3.html)

`printf()` permet d'**afficher** ce que tu lui passes en parametre dans le terminal (la sortie standard).
Tu peux lui passer **un ou plusieurs parametres** mais le premier est toujours une **string** (chaine de caractere) et on ecris les string entre double quote : `"Super string de la mort qui tue"`.

```c
printf("premier parametre", ..., ...);
```

### TYPE

Tu peux lui passer en parametre autre chose qu'une chaine de caractere mais pour cela il faut lui specifier le type de ce que tu veux afficher :

* Conversion specifier : `%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`...

| Type | Argument     | Format en sorti | Exemple |
| :--- | :----------- | :-------------- | :------ |
| `%c` | char         | Affiche un caractere | `printf("%c", 'a');` |
| `%d` | int          | Affiche un decimal entier positif ou negatif | `printf("%d", 42);` `printf("%d", -42);` |
| `%i` | int          | Affiche un decimal entier positif ou negatif| `printf("%d", 42);` `printf("%d", -42);` |
| `%u` | unsigned int | Affiche un decimal entier positif | `printf("%u", 42);` |
| `%f` | float        | Affiche un nombre a virgule | `printf("%f", 42.0000);` |
| `%s` | char*        | Affiche une chaine de caractere | `printf("%s", "Hello World!");` |

### FLAGS, WIDTH et PRECISION

En plus du `%d` tu peux ajouter dess flags comme `0` ou `-` et egalement une `witdh`, une `precision` une `taille` et un `type`.

La syntaxe du format sera toujours :
```
%[flags][width][.precision][size][type]
```

on passe rapidement la dessus :

* `width` : permet de donner un minimum de caractere a afficher. cela ajoute autant d'espaces que necessaire pour arriver au minimum demandé.

```js
printf("%5d", 42); --> '   42'
printf("%5d", 123456); --> '12345678'
```

* `flag 0` : si la `width` est precedee d'un `0`, on print des `0` avant ce quon veut afficher pour arriver au minimum de caracteres demandés.

```js
printf("%05d", 42); --> '00042'
printf("%05d", 12345678); --> '12345678'
```
* `flag -` : meme comportement que pour `width` mais ce la affiche les espaces apres.

```js
printf("%-5d", 42); --> '42   '
```

* `.precision` : differe selon les types. pour une string cela permet de tronquer la string aunombre de caractere precisé. pour un float cela permet de tronquer a X chiffre apres la virgule.

```js
printf("%.5s", "Bonjour"); --> 'Bonjo'
printf("%.5f", 42.123456789); --> '42.12345'
```

