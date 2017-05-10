#include "testes_dominios.h"

const static int TUNome::SUCESSO;
const static int TUNome::FALHA;
const static int TUNome::LIMITEVALIDO;
const static int TUNome::LIMITEINVALIDO;
const static int TUSenha::SUCESSO;
const static int TUSenha::FALHA;
const static int TUEmail::SUCESSO;
const static int TUEmail::FALHA;
const static int TUAvaliacao::SUCESSO;
const static int TUAvaliacao::FALHA;
const static int TUTexto::SUCESSO;
const static int TUTexto::FALHA;

//definicoes de metodos da classe TUNome
void TUNome::setUp(){
	int i;
	
	nome = new Nome();
	for(i=0; i<LIMITEVALIDO; i++){
		valido[i]='p';
	}
	valido[i]='\0';
	for(i=0; i<LIMITEINVALIDO; i++){
		invalido[i]='p';
	}
	estado=SUCESSO;
}

void TUNome::tearDown{
	delete nome;
}

void TUNome::testarCenarioSucesso{	
	try{
		nome->setNome(valido);
		if(nome->getNome!=valido){
			estado=FALHA;
		}
	catch(invalid_argument excecao){
		estado=FALHA;
	}
}

void TUNome::testarCenarioFalha{
	try{
		nome->setNome(invalido);
		estado=FALHA;
	}
	catch(invalid_argument excecao){
		return;
	}
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//definicoes demetodos da classe TUSenha


		
		
		
		
		
		
		
	
