#include <iostream>
#include <string>
#include "Vertice.h"

using namespace std;

int main()
{
    Vertice *vert1 = new Vertice("A");
    Vertice *vert2 = new Vertice("B");
	
    vert1->adj_out[0].adj = vert2;
    vert1->adj_out[0].caminho = 5;
    
	return 0;
}