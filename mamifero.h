#ifndef MAMIFERO_H
#define MAMIFERO_H

class Mamifero: protected Animal{
private:
	string cor_pelo;

public:
	Mamifero(Veterinario veterinario, Tratador tratador, int id = 0, string classe = "", string nome_cientifico = "", char sexo = '', double tamanho = 0, string dieta = "", string nome_batismo = "", string cor_pelo = ""): Animal(veterinario, tratador, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo);
	void setCor_pelo(string cor_pelo);
	string getCor_pelo();
	~Mamifero();
};

#endif
