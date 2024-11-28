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
	

}