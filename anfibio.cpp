#include <anfibio.h>

Anfibio::Anfibio(Veterinario veterinario, Tratador tratador, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, string nome_batismo, int total_mudas, date ultima_muda): Animal(veterinario, tratador, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo){
	this->total_mudas = total_mudas;
	this->ultima_muda = ultima_muda;
};

void Anfibio::setTotal_mudas(int total_mudas){
	this->total_mudas = total_mudas;
};

int Anfibio::getTotal_mudas(){
	return this->total_mudas;
};

void consultar(){
	cout << "Id: " << this->id << endl;
	cout << "Classe: " << this->classe << endl;
	cout << "Nome científico: " <<this->nome_cientifico << endl;
	//precisa terminar de implementar e incluir em todas as outras classes.
}

Anfibio::~Anfibio(){
};
