#TP Realise par:
Barazzouk ALi
## Objectif 
  L'objectif de ce TP est de bien maitriser les structures et les manipuler
## Definir les structures date et composant
``` c
typedef struct {
	int jour;
	int mois;
	int an;
}date;
typedef struct {
	int composant;
	char COMP[5];
}composant;
```
## Ecrire une fonction qui saisit une date.
``` c
void SaisirJour(date date1){
 
 printf("Saisir le jour\n");
 scanf("\n%d",&date1.jour);
 if(date1.jour>31 || date1.jour<0){
	printf("Valeur saisie incorrecte \n");
	SaisirJour(date1);
}
}
void SaisirMois(date date1){

printf("Saisir le mois\n");
scanf("\n%d",&date1.mois);
if(date1.mois>12 || date1.mois<0){
	printf("Valeur saisie incorrecte \n");
	SaisirMois(date1);
}
}
void SaisirAn(date date1){
printf("saisir l'an \n");
scanf("\n%d",&date1.an);
}
```
## Ecrire une fonction qui Affiche une date.
``` c
void Affichagedate(date date1){
	printf("La date est %d | %d | %d",date1.jour,date1.mois,date1.an);
}
```
## Ecrire une fonction qui saisit un composant.
``` c
void SaisirComp(composant comp1){
	printf("\nsaisir composant\n");
	scanf("%d",&comp1.composant);
}
```
## Ecrire une fonction qui Affiche un composant.
``` c
void Affichagecomp(composant comp1){
	printf("\nle composant est : %d\n",comp1.composant);
}
```
## Ecrire une fonction qui saisit un tableau de composants.
``` c
void SaisirComp2(composant comp2){
	for (int i=0;i<5;i++){
		printf("\nsaisir composant %d : \n",i);
		scanf("%s",&comp2.COMP[i]);
}
	}
```
## Ecrire une fonction qui Affiche un tableau de composants.
``` c
void Affichagecomp2(composant comp2){
	for(int i=0;i<5;i++){
	
	printf("\nle composant est : %s",comp2.COMP[i]);
}
}
```
## Note
J'ai pas fais les autres questions du a des difficultes rencontre dans l'implementation je veux bien que tu m'aide a les resoudre durant la seance.
