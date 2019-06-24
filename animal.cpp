#include "animal.h"
#include "veterinario.h"
#include "tratador.h"
#include <iostream>
#include <string>

using namespace std;

Animal::Animal(){
};

void Animal::setId(int id){
	this->id = id;
};

int Animal::getId(){
	return this->id;
};

void Animal::setClasse(string classe){
	this->classe = classe;
};

string Animal::getClasse(){
	return this->classe;
};

void Animal::setNome_cientifico(string nome_cientifico){
	this->nome_cientifico = nome_cientifico;
};

string Animal::getNome_cientifico(){
	return this->nome_cientifico;
};

void Animal::setSexo(char sexo){
	this->sexo = sexo;
};

char Animal::getSexo(){
	return this->sexo;
};

void Animal::setTamanho(double tamanho){
	this->tamanho = tamanho;
};

double Animal::getTamanho(){
	return this->tamanho;
};

void Animal::setDieta(string dieta){
	this->dieta = dieta;
};

string Animal::getDieta(){
	return this->dieta;
};

void Animal::setVeterinario(Veterinario veterinario){
	this->veterinario = veterinario;
};

Veterinario Animal::getVeterinario(){
	return this->veterinario;
};

void Animal::setTratador(Tratador tratador){
	this->tratador = tratador;
};

Tratador Animal::getTratador(){
	return this->tratador;
};

void Animal::setNome_batismo(string nome_batismo){
	this->nome_batismo = nome_batismo;
};

Animal::~Animal(){
};
