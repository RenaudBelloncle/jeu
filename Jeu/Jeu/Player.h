#pragma once
#include "Unite.h"
#include "Batiment.h"
#include "CouleurJoueur.h"
#include "SpriteManager.h"
#include "Technologie.h"
#include <list>
#include <iostream>

class Player {
private : 
	sf::Color couleur;
	int energie;
	int essence;
	int metaux;
	int vivre;
	std::vector<Unite*> listUnite;
	std::vector<Batiment*> listBatiment;

public : 
	Player(sf::Color color);
	void initTechnologies();
	void rechercheTechnologie(Technologie *tech);
	void creerUnite(Unite *unite);
	void deplacerUnite(Unite *unite, int newX, int newY);
	void attaquer(Unite *unite, Entite *ennemi);
	//void creerBatiment(Batiment batiment);
	//void detruireBatiment(Batiment batiment);
	void render(sf::RenderWindow *renderWindow, SpriteManager *manager);
	int getNombreUnite();
	int getNombreBatiment();
	Unite* getUnite(int index);
	Batiment* getBatiment(int index);
	sf::Color getColor();
};