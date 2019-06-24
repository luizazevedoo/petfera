#include <map>
#include <iostream>
#include "animal.h"
#include "ave.h"
#include "anfibio.h"
#include "reptil.h"
#include "mamifero.h"
#include "manipular_arquivos.h"
#include "veterinario.h"
#include "tratador.h"
#include "sistema.h"

using namespace std;

Sistema::Sistema(){

};

void Sistema::displayMenu(){
	cout << "Bem vindo ao sistema de gestão do PetFera." << endl;
	cout << "Selecione uma opção:" << endl;
	cout << "1 - Cadastrar um novo animal" << endl;
	cout << "2 - Realizar venda" << endl;
	cout << "3 - Alterar dados dos animais cadastrados" << endl;
	cout << "4 - Consultas" << endl;
	cout << "5 - Cadastrar funcionários" << endl;
	cout << "0 - Encerrar programa" << endl;
	cin >> this->selecaoAtual;
};

void Sistema::displayClasses(){
	cout << "Selecione a classe do animal a ser cadastrado: " << endl;
	cout << "1 - Anfíbio" << endl;
	cout << "2 - Ave" << endl;
	cout << "3 - Mamífero" << endl;
	cout << "4 - Réptil" << endl;
	cin >> this->selecaoClasse;

};


void Sistema::operarSistema(){
	string classe;

	switch(this->selecaoAtual){
		case 0:
			break;

		case 1: 
			registrarAnimal();
			break;
		case 2:

		case 3:

		case 4:
			cout << "Qual consulta que realizar: " << endl;
			cout << "1 - Funcionário" << endl;
			cout << "2 - Animal" << endl;
			cin >> this->selecaoConsulta;
			

		case 5:
			cout << "Selecione o tipo do funcionário a ser cadastrado: " << endl;
			cout << "1 - Tratador" << endl;
			cout << "2 - Veterinário" << endl;
			cin >> this->selecaoFuncionarios;
			if(selecaoFuncionarios == 1):
				funcaoTratador();
			else if(selecaoFuncionarios == 2):
				funcaoVeterinario();
			else{
				cout << "Opção digitade incorreta" << endl;			
			}
			

		default:
			cout << "Seleção inválida. Por favor, selecione uma opção válida." << endl;
			Sistema::displayMenu();
	}
};

int Sistema::funcaoTratador(){
	Tratador* novoT = new Tratador();
	int op;
	double aux;
	string aux1;
	int aux2;
	short aux3;
	char aux4;
	cout << "Qual id do tratador?" << endl;
	cin >> aux2;
	novoT->setId(aux2);
	cout << "Qual nome do tratador?" << endl;
	cin >> aux1;
	novoT.setNome(aux1);
	cout << "Qual cpf do tratador?" << endl;
	cin >> aux1;
	novoT.setCpf(aux1);
	cout << "Qual idade do tratador?" << endl;
	cin >> aux3;
	novoT.setIdade(aux3);
	cout << "Qual tipo saguíneo do tratador?" << endl;
	cin >> aux3;
	novoT.setTipo_sanguineo(aux3);
	cout << "Qual fator rh do tratador?" << endl;
	cin >> aux4;
	novoT.setFator_rh(aux4);
	cout << "Qual a especialidade do tratador?" << endl;
	cin >> aux1;
	novoT.setEspecialidade(aux1);
	cout << "Qual nivel de segurança do tratador?" << endl;
	cin >> aux2;
	novoT.setM_nivel_de_seguranca(aux2);
	mapTratador.insert(pair<int, Tratador>(novoT.getId(), novoT));
	return novoT.getId();
};

int Sistema::funcaoVeterinario(){
	Veterinario * novoT = new Veterinario();
	int op;
	double aux;
	string aux1;
	int aux2;
	short aux3;
	char aux4;
	cout << "Qual id do Veterinário?" << endl;
	cin >> aux2;
	novoT.setId(aux2);
	cout << "Qual nome do Veterinário?" << endl;
	cin >> aux1;
	novoT.setNome(aux1);
	cout << "Qual cpf do Veterinário?" << endl;
	cin >> aux1;
	novoT.setCpf(aux1);
	cout << "Qual idade do Veterinário?" << endl;
	cin >> aux3;
	novoT.setIdade(aux3);
	cout << "Qual tipo saguíneo do Veterinário?" << endl;
	cin >> aux3;
	novoT.setTipo_sanguineo(aux3);
	cout << "Qual fator rh do Veterinário?" << endl;
	cin >> aux4;
	novoT.setFator_rh(aux4);
	cout << "Qual a especialidade do Veterinário?" << endl;
	cin >> aux1;
	novoT.setEspecialidade(aux1);
	cout << "Qual nivel de segurança do Veterinário?" << endl;
	cin >> aux2;
	cout << "Qual a M_crmv do Veterinário?" << endl;
	cin >> aux1;
	novoT.setM_crmv(aux1);
	mapVeterinario.insert(pair<int, Veterinario>(novoV.getId(), novoV));
	return novoT.getId();
};

void Sistema::registrarAnimal(){
	int op;
	double aux;
	string aux1;
	Animal * novo = new Animal();
	cout << "Qual animal você deseja registrar?" << endl;
	cout << "1 - Mamifero" << endl;
	cout << "2 - Ave" << endl;
	cout << "3 - Anfibio" << endl;
	cout << "4 - Reptil" << endl;
	cin >> op;
	cout << "informe o tamanho do animal:" << endl;
	cin >> aux;
	novo.setTamanho(aux);
	cout << "informe a classe: "
	cin >> aux1;
	novo.setClasse(aux1);
	cout << "informe o nome cientifico do animal: " << endl;
	cin >> aux1;
	novo.setNome_cientifico(aux1);
	cout << "informe o nome de batismo do animal: " << endl;
	cin >> aux1;
	novo.setNome_batismo(aux1);
	cout << "informe a dieta: " << endl;
	cin >> aux1;
 	novo.setDieta(aux1);
	cout << "informe o sexo do animal (M ou F): " << endl;
	cin >> aux1;
	novo.setSexo(aux1);
	cout << "animal está ameaçado de extinção? " << endl;
	cout << "1 - sim" << endl;
	cout << "2 - não" << endl;
	cin >> aux;
	if(int(aux) == 1){
		novo.setAmeacadoExtincao(true);
	else{
		novo.setAmeacadoExtincao(false);
	}
	cout << "Listando tratadores disponíveis" << endl;
	imprimirTratador();
	cout << "deseja escolher algum tratador dos cadastrados ou registrar um novo tratador?" << endl;
	cout << "1 - escolher existente" << endl;
	cout << "2 - registrar novo" << endl;
	cin >> aux;
	if(int(aux) == 1){
		cout << "informe o id do tratador que deseja: " << endl;
		cin >> aux;
		novo.setTratador(mapTratador[int(aux)]);
	}else{
		novo.setTratador(mapTratador[funcaoTratador()]);
	}
	cout << "deseja escolher algum veterinario dos cadastrados ou registrar um novo?" << endl;
	cout << "1 - escolher existente" << endl;
	cout << "2 - registrar novo" << endl;
	cin >> aux;
	if(int(aux) == 1){
		cout << "informe o id do veterinario" << endl;
		cin >> aux;
		novo.setVeterinario(mapVeterinario[int(aux)]);
	}else{
		novo.setVeterinario(mapVeterinario[funcaoVeterinario()]);
	}	
	Mamifero * novoMamifero = dynamic_cast<Animal *>(novo);
	Ave * novaAve = dynamic_cast<Animal *>(novo);
	Anfibio * novoAnfibio = dynamic_cast<Anfibio *>(novo);
	Reptil * novoReptil = dynamic_cast<Animal *>(novo);
	switch(op){
		case 1: 
			cout << "informe a cor do pelo do animal" << endl;
			cin >> aux1;
			novoMamifero.setCor_pelo(aux1);
			mapMamifero.insert(pair<int, Mamifero>(novoMamifero.getId(), novoMamifero));
			break;
		case 2: 
			cout << "informe o tamanho do bico da ave: " << endl;
			cin >> aux;
			novaAve.setTamanho_bico(aux);
			cout << "informe a envergadura das asas" << endl;
			cin >> aux;
			novaAve.setEnvergadura_asas(aux); 
			mapAve.insert(pair<int, Ave>(novoAve.getId(), novoAve));
			break;
		case 3: 
			cout << "informe o total de mudas" << endl;
			cin >> aux;
			novoAnfibio.setTotal_mudas(int(aux));
			cout << "informe a data da ultima muda" << endl;
			cin >> "aux2";
			novoAnfibio.setUltima_muda(aux2);
			mapAnfibio.insert(pair<int, Anfibio>(novoAnfibio.getId(), novoAnfibio));
			break;
		case 4: 
			cout << "possui veneno? 1 para sim, 0 para não" << endl;
			cin >> aux;
			novoReptil.setVeneno(int(aux));
			cout << "informe o tipo do veneno/ se não possuir veneno deixe em branco" << endl;
			cin >> aux1;
			novoReptil.setTipo_veneno(aux1);
			mapReptil.insert(pair<int, Reptil>(novoReptil.getId(), novoReptil));
			break;
		default: cout << "opção inválida" << endl;
	}
	delete(novo);
	delete(novoMamifero);
	delete(novoAve);
	delete(novoReptil);
	delete(novoAnfibio);
};	

void Sistema::imprimirTratador(){
	for(auto it = mapTratador.begin(), it != mapTratador.end(), ++it){
		cout << "ID: " << it->first << "  Tratador: " << it->second->getNome() << endl;
	}
};

void Sistema::imprimirVeterinario(){
	for(auto it = mapVeterinario.begin(), it != mapVeterinario.end(), ++it){
		cout << "ID: " << it->first << "  Veterinário: " << it->second->getNome() << endl;
	}
};

void Sistema::imprimirMamifero(){
	for(auto it = mapMamifero.begin(), it != mapMamifero.end(), ++it){
		cout << "ID: " << it->first << "  Tipo: " << it->second->getClasse() << "  Nome: " << it->second->getNome_batismo() <<endl;
	}
};

void Sistema::imprimirAve(){
	for(auto it = mapAve.begin(), it != mapAve.end(), ++it){
		cout << "ID: " << it->first << "  Tipo: " << it->second->getClasse() << "  Nome: " << it->second->getNome_batismo() <<endl;
	}
};

void Sistema::imprimirAnfibio(){
	for(auto it = mapAnfibio.begin(), it != mapAnfibio.end(), ++it){
		cout << "ID: " << it->first << "  Tipo: " << it->second->getClasse() << "  Nome: " << it->second->getNome_batismo() <<endl;
	}
};

void Sistema::imprimirReptil(){
	for(auto it = mapReptil.begin(), it != mapReptil.end(), ++it){
		cout << "ID: " << it->first << "  Tipo: " << it->second->getClasse() << "  Nome: " << it->second->getNome_batismo() <<endl;
	}
};

Sistema::~Sistema(){

};
