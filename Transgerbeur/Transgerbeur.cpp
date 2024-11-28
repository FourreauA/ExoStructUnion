#include<stdio.h>
#include<iostream>
using namespace std;


enum EEtat {vide, palette, rouleau };

struct SPalette {
	int poids;
	char reference[20];

};

struct SRouleau {
	float longueur;
	int numero;
};

union UContenu {
	SPalette pal;
	SRouleau roul;
};

struct SCasier {
	int px;
	int py;
	UContenu cont;
	EEtat etat;
};

int main()
{
	cout << "Bienvenue dans le Transgerbeur";
	SCasier tabCasier[9];
	SRouleau  ro1;
	SPalette pa1;
	pa1.poids = 40;
	strcpy_s(pa1.reference, "Attila veut mortis"); // ignisalisation des chaine de caractere
	EEtat etatC1;
	etatC1 = vide;
	cont1.pal = pa1;
	cont1.roul = ro1;
	SCasier c1;
	SCasier c2;
	c1.cont = cont1;
	c1.etat = etatC1;
	c1.px = 2;
	c1.py = 3;
	c2.cont = cont1;

}