#ifndef VERTICE_H
#define VERTICE_H
#include <string>

using std::string;

class Vertice
{
public:
	Vertice(const string &);
	~Vertice();
	
	string get_nome() const;
	
	struct Aresta
	{
		Vertice *adj;
		int caminho;
	};
	
	Aresta adj_out;
	
private:
	string nome;

};

#endif // VERTICE_H
