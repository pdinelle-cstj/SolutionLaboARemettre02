// But : Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une
//       automobile louée.L’algorithme tient compte du kilométrage parcouru et de la durée du voyage qui sont
//       soumises par le requérant
// Auteur : Patrice Dinelle
// Date : 2020-09-16

/*
Les différentes sources de dépenses sont :
o Coût de la location de 45$ par jour et comprend 250 km gratuits par jour.
o La consommation du véhicule est 7.6 litres aux 100 km.
o 1 litre d’essence coûte 1.25$
o 0.05$ du kilomètre est exigé pour chaque kilomètre supplémentaire.
*/


#include <iostream>

void main()
{
	setlocale(LC_ALL, "");         // pour afficher les accents dans la console

	//FR : varables qui sont entrer par l'utilisateur
	int jours;
	float km;
	//FR : variable utiliser pour arriver au prix final 
	float kmt;
	float kmprix;
	float gaz;
	float prixj ;
	//demander les question pour les calculs
	// FR : Ligne suivante
	std::cout << "Veuiller entrer le nombre de jour que vous avez utiliser la vouture : ";
	std::cin >> jours;
	// FR : Ligne suivante
	std::cout << "veullier entrer le nombre de km que vous avez parcourue : ";
	std::cin >> km;


	if (km / jours > 250) // si le km dépace le nombre donné par jour
	{
		kmt = (km - (250 * jours));// pour savour le nombre de km d'extra
		kmprix = (kmt* 0.05);	   // prix pour les km de plus
		gaz = (((km / 100)*7.6) * 1.25); // prix du gaz
		prixj = jours * 45;				 // prix par jour
		std::cout << "Le prix total de votre location est : " << prixj + gaz + kmprix << "$"; // afficher le prix final
	}
	else    // FR : si les km donner ne sont pas tout utilisé
	{
		gaz = (((km / 100)*7.6) * 1.25); // prix du gaz
		prixj = jours * 45;				 // prix par jour
		std::cout << "Le prix total de votre location est : " << prixj + gaz << "$"; // FR : aficheer le prix final 
	}

}

//plan de test
/*
nb de jour		nb de km		prix final
2				600				152$
5				500				272.50$
3				750				206.25$
7				2100			532$
*/
/*
•	La solution est bien nommée et comporte un projet 5/ 5
•	Les fichiers sources contiennent l'identification complète du programme et de son auteur	5/5
•	Le code source est sans erreur de compilation 15/ 15
•	Le programme est fonctionnel 20/ 20
•	Le programme passe le plan de tests 20/ 20
•	Le code source est largement commenté 20 / 20
•	La solution est déposée dans LEA et dans GitHub.L'adresse est envoyée via Outlook	10/15
        // KM : Il faut solutionner le problème de la compression, je ne veux pas du .rar
Fautes de français = -5
Note 90/100
Très bon travail ! 
*/
