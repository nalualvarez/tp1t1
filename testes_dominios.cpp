#include "testes_dominios.h"

const static int TUNome::SUCESSO;
const static int TUNome::FALHA;
const static int TUNome::LIMITEVALIDO;
const static int TUNome::LIMITEINVALIDO;
const static int TUSenha::LIMITEVALIDO;
const static int TUSenha::LIMITEINVALIDO;
const static int TUSenha::SUCESSO;
const static int TUSenha::FALHA;
const static int TUEmail::SUCESSO;
const static int TUEmail::FALHA;
const static char TUEmail::arroba;
const static char TUEmail::ponto;
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
	invalido[i]='\0';
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

//definicoes de metodos da classe TUSenha

void TUSenha::setUp(){
	int i;
	
	senha = new Senha();
	for(i=0; i<LIMITEVALIDO; i++){
		valido[i]='p';
	}
	valido[i]='\0';
	for(i=0; i<LIMITEINVALIDO; i++){
		invalido[i]='p';
	}
	invalido[i]='\0';
	estado=SUCESSO;
}

void TUSenha::tearDown{
	delete senha;
}

void TUSenha::testarCenarioSucesso{	
	try{
		senha->setSenha(valido);
		if(senha->getSenha!=valido){
			estado=FALHA;
		}
	catch(invalid_argument excecao){
		estado=FALHA;
	}
}

void TUSenha::testarCenarioFalha{
	try{
		senha->setSenha(invalido);
		estado=FALHA;
	}
	catch(invalid_argument excecao){
		return;
	}
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//definicoes de metodos da classe TUEmail


void TUEmail::setUp(){
	int i;
	
	email = new Email();
	
	for(i=0; i<3; i++){
		valido[i]='p';
	}
	valido[i]=arroba;
	for(i=4;i<6;i++){
		valido[i]='p';
	}
	valido[i]=ponto;
	for(i=7;i<10;i++){
		valido[i]='p';
	}
	valido[i]='\0';
	
	for(i=0;i<10;i++){
		invalido[i]='p';
	}
	invalido[i]='\0';
	
	estado=SUCESSO;
}

void TUEmail::tearDown{
	delete email;
}

void TUEmail::testarCenarioSucesso{	
	try{
		email->setEmail(valido);
		if(email->getEmail!=valido){
			estado=FALHA;
		}
	catch(invalid_argument excecao){
		estado=FALHA;
	}
}

void TUEmail::testarCenarioFalha{
	try{
		email->setEmail(invalido);
		estado=FALHA;
	}
	catch(invalid_argument excecao){
		return;
	}
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}	
		
		
		
		
		
		
	
