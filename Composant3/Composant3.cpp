
#include "Composant3.h"
#include "Composant3Version.h"
#include "stdafx.h"

// declaration des fonctions internes
int addition_interne3(int a1, int a2);



int composant3(int p1, int p2)
{
	return addition_interne3(p1, p2);
}

int addition_interne3(int a1, int a2)
{
	return a1 + a2;
}

char * getComposant3Version()
{
	return "Composant 3 version " COMPOSANT_VERSION_STR;
}
