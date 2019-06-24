#ifndef TRATADOR_H
#define TRATADOR_H

class Tratador: protected Funcionario{
private:
	int m_nivel_de_seguranca;
public:
	Tratador(int id = 0, string nome = "", string cpf = "", short idade = 0, char tipo_sanguineo = '', char fator_rh = '', string especialidade = "", int m_nivel_de_seguranca = 0): Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade);
	void setM_nivel_de_seguranca(int m_nivel_de_seguranca);
	int getM_nivel_de_seguranca();
	void consultar();
	~Tratador();
};

#endif
