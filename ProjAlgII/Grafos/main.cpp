#include <iostream>
#include <string>
#include "Vertice.h"

using namespace std;

int main()
{
   Vertice *vert1 = new Vertice("A");
   Vertice *vert2 = new Vertice("B");
	
    vert1->adj_out.adj = vert2;
    vert1->adj_out.caminho = 5;
    
    cout << "Rodrigo como queres usar adj_out[0] se voce nao a tinha alocado em lugar algum.";
    
	return 0;
}