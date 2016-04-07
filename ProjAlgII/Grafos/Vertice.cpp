#include "Vertice.h"

Vertice::Vertice(const string &nome)
{
	this->nome = nome;
	//this->adj_out = 0;
}

Vertice::~Vertice()
{
	//delete [] adj_out;
}

string Vertice::get_nome() const
{
	return this->nome;
}