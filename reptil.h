#ifndef REPTIL_H
#define REPTIL_H

class Reptil: protected Animal{
private:
	bool veneno;
	string tipo_veneno;

public:
	Reptil(Veterinario veterinario, Tratador tratador, int id = 0, string classe = "", string nome_cientifico = "", char sexo = '', double tamanho = 0, string dieta = "", string nome_batismo = "", bool veneno = false, string tipo_veneno = ""): Animal(veterinario, tratador, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo);
	void setVeneno(bool veneno);
	bool getVeneno();
	void setTipo_veneno(string tipo_veneno);
	string getTipo_veneno();
	~Reptil();
};

#endif
