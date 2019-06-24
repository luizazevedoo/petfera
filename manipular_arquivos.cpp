#include"manipular_arquivos.h"

//Criar arquivo caso não exista
void CriarArquivoInex (string nome){
	ofstream arqDados;
	arqDados.open(nome, ios::binary);

};
//ler de um arquivo existente
void LerEcrArquivoEx(string nome){
	fstream arqDados(nome, ios::in | ios::app | ios::binary);
};
//--salvar em um map 

//verificando a existencia de um arquivo
void VerificarArquivo(string nome){
	ifstream arqDados(string);
	if(arqDados.bad()) {
		CriarArquivoInex(nome);
	}
	else{
		LerEscrArquivoEx(nome);	
	}
};

//--imprimir de um map
