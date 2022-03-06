#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int jour;
	int mois;
	int an;
}date;
typedef struct {
	int composant;
	char COMP[5];
}composant;


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

void Affichagedate(date date1){
	printf("La date est %d | %d | %d",date1.jour,date1.mois,date1.an);
}
void SaisirComp(composant comp1){
	printf("\nsaisir composant\n");
	scanf("%d",&comp1.composant);
}
void Affichagecomp(composant comp1){
	printf("\nle composant est : %d\n",comp1.composant);
}
void SaisirComp2(composant comp2){
	for (int i=0;i<5;i++){
		printf("\nsaisir composant %d : \n",i);
		scanf("%s",&comp2.COMP[i]);
}
	}
void Affichagecomp2(composant comp2){
	for(int i=0;i<5;i++){
	
	printf("\nle composant est : %s",comp2.COMP[i]);
}
}

int main(){
date date1;
composant comp1,comp2;
SaisirJour(date1);
SaisirMois(date1);
SaisirAn(date1);
Affichagedate(date1);
SaisirComp(comp1);
Affichagecomp(comp1);
SaisirComp2(comp2);
Affichagecomp2(comp2);
}

