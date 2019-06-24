#ifndef AVE_H
#define AVE_H

class Ave: protected Animal{
private:
	double tamanho_bico;
	double envergadura_asas;
public:
	Ave(Veterinario veterinario, Tratador tratador, int id = 0, string classe = "", string nome_cientifico = "", char sexo = '', double tamanho = 0, string dieta = "", string nome_batismo = "", double tamanho_bico = 0, double envergadura_asas = 0) : Animal(veterinario, tratador, id, classe, nome_cientifico, sexo, tamanho, dieta, nome_batismo);
	~Ave();
	void setTamanho_bico(double tamanho_bico);
	double getTamanho_bico();
	void setEnvergadura_asas(double envergadura_asas);
	double getEnvergadura_asas();
};

#endif
