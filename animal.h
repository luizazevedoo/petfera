/**@file animal.h 
 * @author Acsa Laiane
 * @author Daniele Mendonça
 * @author Gabriel Lucas
 * @author Gabriel Martins
 * @author Maria Luiza */
#ifndef ANIMAL_H
#define ANIMAL_H

/**@breaf Classe abstrata que serve de base para todos os tipos de animais.*/
class Animal{
	protected:
		int id; /***<Id do animal */
		double tamanho;/**<Tamanho do animal*/
		string classe;/**<Classe científica do animal */
		string nome_cientifico;/**<Nome cientídico do animal */
		string nome_batismo;/**<Nome de batismo do animal */
		string dieta;/**<Dieta do animal */
		char sexo;/**<Dieta do animal */
		bool ameacadoExtincao;/**<Animal ameçado de extinção? */
		bool nativo;/**<Animal nativo? se true, nativo, se false exótico*/
		bool domestico;/**<Animal doméstico? se true, doméstico, se false, silvestre */
		Veterinario veterinario;/**<Veterinário associado ao animal */
		Tratador tratador;/**<Tratador associado ao animal*/
	public:
		virtual void consultar() = 0;
		Animal(Veterinario veterinario, Tratador tratador, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, string nome_batismo);
		void setId(int id);
		int getId();
		void setClasse(string classe);
		string getClasse();
		void setNome_cientifico(string nome_cientifico);
		string getNome_cientifico();
		void setSexo(char sexo);
		char getSexo();
		void setTamanho(double tamanho);
		double getTamanho();
		void setDieta(string dieta);
		string getDieta();
		void setVeterinario(Veterinario veterinario);
		Veterinario getVeterinario();
		void setTratador(Tratador tratador);
		Tratador getTratador();
		void setNome_batismo(string nome_batismo);
		~Animal();
		
};

#endif
