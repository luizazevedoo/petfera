#include <ave.h>

Ave::Ave(Veterinario veterinario, Tratador tratador, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, string nome_batismo, double tamanho_bico, double envergadura_asas) : Animal(veterinario, tratador, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo){
	this->tamanho_bico = tamanho_bico;
	this->envergadura_asas = envergadura_asas;
};

void Ave::setTamanho_bico(double tamanho_bico){
	this->tamanho_bico = tamanho_bico;
};

double Ave::getTamanho_bico(){
	return this->tamanho_bico;
};

void Ave::setEnvergadura_asas(double envergadura_asas){
	this->envergadura_asas = envergadura_asas;
};

double Ave::getEnvergadura_asas(){
	return this->envergadura_asas = envergadura_asas;
};

Ave::~Ave(){
};
