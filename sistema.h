#ifndef SISTEMA_H
#define SISTEMA_H

/**@brief classe referente à manipulação de informações, cadastro e venda de animais*/
#include <map>
#include "animal.h"
#include "ave.h"
#include "anfibio.h"
#include "reptil.h"
#include "mamifero.h"
#include "manipular_arquivos.h"

class Sistema{
private:
	/**@brief Guarda a seleção do menu*/
	int selecaoAtual;
	int selecaoClasse;
	int selecaoFuncionarios;
	int posicaoAnf;
	int posicaoAve;
	int posicaoMam;
	int posicaoRep;
	int posicaoTrat;
	int posicaoVet;
	map<int, Tratador> mapTratador;
	map<int, Veterinario> mapVeterinario;
	map<int, Mamifero> mapMamifero;
	map<int, Ave> mapAve;
	map<int, Reptil> mapReptil;
	map<int, Anfibio> mapAnfibio;	
public:
	Sistema();
	void displayMenu();
	void displayClasses();
	void operarSistema();
	void setStructAnimal();
	~Sistema();
};

#endif
