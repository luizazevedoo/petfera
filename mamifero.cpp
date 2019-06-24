#include <mamifero.h>

using namespace std;

Mamifero::Mamifero():Animal(){
};

void Mamifero::setCor_pelo(string cor_pelo){
	this->cor_pelo = cor_pelo;
};

string Mamifero::getCor_pelo(){
	return this->cor_pelo;
};

Mamifero::~Mamifero(){
};

