
#include "Composant4.h"
#include "Composant4Version.h"
#include "Composant3.h"
#include "Composant3Version.h"
#include "stdafx.h"

// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant4(int p1, int p2)
{
	return composant3(p1, p2);
}

int addition_interne(int a1, int a2)
{
	return a1 + a2;
}

char * getComposant4Version()
{
	return getComposant3Version();
}
