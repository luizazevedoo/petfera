#ifndef VETERINARIO_H
#define VETERINARIO_H

using namespace std;
class Veterinario: protected Funcionario{
private:
	string m_crmv;
public:
	Veterinario::Veterinario(int id = 0, string nome = "", string cpf = "", short idade = 0, string tipo_sanguineo = "", char fator_rh = '', string especialidadestring = 0, string m_crmv = "") : Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade);
	void setM_crmv(string m_crmv);
	string getM_crmv();
	void consultar();
	~Veterinario();
};

#endif
