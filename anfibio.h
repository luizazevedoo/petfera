#ifndef ANFIBIO_H
#define ANFIBIO_H

class Anfibio: protected Animal{
private:
	int total_mudas;
	date ultima_muda;
public:
	Anfibio(Veterinario veterinario, Tratador tratador, int id = 0, string classe = "", string nome_cientifico = "", char sexo = '', double tamanho = 0, string dieta = "", string nome_batismo = "", int total_mudas = 0, date ultima_muda = 0): Animal(veterinario, tratador, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo);
	void setTotal_mudas(int total_mudas);
	int setTotal_mudas();
	void consultar();
	~Anfibio();
};

#endif
