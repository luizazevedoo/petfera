##include <veterinario.h>
using namespace std;

Veterinario::Veterinario():Funcionario(){
}

void Veterinario::setM_crmv(string m_crmv){
	this->m_crmv = m_crmv;
}

string Veterinario::getM_crmv(){
	return this->m_crmv;
}

void consultar(){
	cout << "Nome: " << this->nome << endl;
	cout << "id: " << this->id << endl;
	cout << "CPF: " << this->cpf << endl;
	cout << "Idade: " << this->idade << endl;
	cout << "Tipo sanguíneo: " << this->tipo_sanguineo << this->fator_rh << endl;
	cout << "Especeialidade: " << this->especialidade << endl;
	cout << "CRMV: " << this->m_crmv << endl;
}

Veterinario::~Veterinario(){
}
