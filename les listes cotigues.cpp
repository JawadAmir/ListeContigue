#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TAILLE 5
typedef struct{
    int tab[TAILLE];
	int longueur;
}listeContigue;
 bool est_pleine(listeContigue l){
 	if(l.longueur<TAILLE) {
 		return false;
	 }
	 else{
	 	return true;
	 }
 }
 void afficher(listeContigue l){
 	int i;
 	for(i=0;i<TAILLE;i++)
 	printf("%d : [%d]\n",i,l.tab[i]);
 }
 void inserer(listeContigue *l,int e,int p){
 	int i;
 	if((!est_pleine(*l))&&(p<TAILLE)){
	 for(i=(*l).longueur;i>p;i--){
	 	(*l).tab[i+1]=(*l).tab[i];
}
	 (*l).longueur++;
	 (*l).tab[p]=e;
	 
}
else{printf("Erreur\n");
}
}
 void supprimer(listeContigue *l,int p){
 	int i;
 	for(i=p;i<(*l).longueur;i++){
 		(*l).tab[i]=(*l).tab[i+1];
	 }
	 (*l).longueur--;
 }
 
 int main(void){
	 listeContigue l={{0},1};
 	bool j=false;int a;
 	while(!j){
		printf("Pour ajouter (1)\nPour afficher (2)\nPour supprimer (3)\nPour quitter (4)\n");
		scanf("%d",&a);
		switch(a){
			case 1:int e;int p;
			printf("Donner la position\n");
			scanf("%d",&p);
			printf("Donner l'element\n");
			scanf("%d",&e);
			inserer(&l,e,p);
			break;
			case 2:afficher(l);break;
			case 3:printf("Donner la position\n");
			scanf("%d",&p);
			supprimer(&l,p);break;
			case 4:j=true;break;
		}		
	 }

 	
 	return 0;
 }
 
