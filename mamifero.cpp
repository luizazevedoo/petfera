#include <mamifero.h>

using namespace std;

Mamifero::Mamifero(Veterinario veterinario, Tratador tratador, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, string nome_batismo, string cor_pelo): Animal(veterinario, tratador, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo){
	this->cor_pelo = cor_pelo;
};

void Mamifero::setCor_pelo(string cor_pelo){
	this->cor_pelo = cor_pelo;
};

string Mamifero::getCor_pelo(){
	return this->cor_pelo;
};

Mamifero::~Mamifero(){
};

