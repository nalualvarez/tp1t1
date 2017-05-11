#include "testes_dominios.h"

const int TUNome::SUCESSO;
const int TUNome::FALHA;
const int TUNome::LIMITEVALIDO;
const int TUNome::LIMITEINVALIDO;
const int TUSenha::LIMITEVALIDO;
const int TUSenha::LIMITEINVALIDO;
const int TUSenha::SUCESSO;
const int TUSenha::FALHA;
const int TUEmail::SUCESSO;
const int TUEmail::FALHA;
const char TUEmail::arroba;
const char TUEmail::ponto;
const int TUAvaliacao::SUCESSO;
const int TUAvaliacao::FALHA;
const int TUAvaliacao::VALIDO;
const int TUAvaliacao::INVALIDO;
const int TUTexto::SUCESSO;
const int TUTexto::FALHA;
const int TUTexto::LIMITEVALIDO;
const int TUTexto::LIMITEINVALIDO;

/**definicoes de metodos da classe TUNome*/
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

void TUNome::tearDown(){
	delete nome;
}

void TUNome::testarCenarioSucesso(){	
	int i=0;
	char* temp;
	
	try{
		nome->setNome(valido);
		temp=nome->getNome();
		while(temp[i]!='\0'){
			if(temp[i]!=valido[i]){
				estado=FALHA;
			}
			i++;
		}
	}
	catch(invalid_argument excecao){
		estado=FALHA;
	}
}

void TUNome::testarCenarioFalha(){
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

/**definicoes de metodos da classe TUSenha*/

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

void TUSenha::tearDown(){
	delete senha;
}

void TUSenha::testarCenarioSucesso(){	
	char* temp;
	int i=0;
	
	try{
		senha->setSenha(valido);
		temp=senha->getSenha();
		while(temp[i]!='\0'){
			if(temp[i]!=valido[i]){
				estado=FALHA;
			}
			i++;
		}
	}
	catch(invalid_argument excecao){
		estado=FALHA;
	}
}

void TUSenha::testarCenarioFalha(){
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

/**definicoes de metodos da classe TUEmail*/


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

void TUEmail::tearDown(){
	delete email;
}

void TUEmail::testarCenarioSucesso(){	
	char* temp;
	int i=0;
	
	try{
		email->setEmail(valido);
		temp = email->getEmail();
		while(temp[i]!='\0'){
			if(temp[i]!=valido[i]){
				estado=FALHA;
			}
			i++;
		}
	}
	catch(invalid_argument excecao){
		estado=FALHA;
	}
}

void TUEmail::testarCenarioFalha(){
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

/**definicoes de metodos da classe TUAvaliacao*/

void TUAvaliacao::setUp(){
	avaliacao = new Avaliacao();
	estado=SUCESSO;
}

void TUAvaliacao::tearDown(){
	delete avaliacao;
}

void TUAvaliacao::testarCenarioSucesso(){	
	try{
		avaliacao->setAvaliacao(VALIDO);
		if(avaliacao->getAvaliacao()!=VALIDO){
			estado=FALHA;
		}
	}
	catch(invalid_argument excecao){
		estado=FALHA;
	}
}

void TUAvaliacao::testarCenarioFalha(){
	try{
		avaliacao->setAvaliacao(INVALIDO);
		estado=FALHA;
	}
	catch(invalid_argument excecao){
		return;
	}
}

int TUAvaliacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/**definicoes de metodos da clase TUTexto*/

void TUTexto::setUp(){
	int i;
	
	texto = new Texto();
	for(i=0;i<LIMITEVALIDO;i++){
		valido[i]='p';
		invalido[i]='p';
	}
	valido[i]='\0';
	for(i=50;i<LIMITEINVALIDO;i++){
		invalido[i]='p';
	}
	invalido[i]='\0';
	estado=SUCESSO;
}

void TUTexto::tearDown(){
	delete texto;
}

void TUTexto::testarCenarioSucesso(){	
	char* temp;
	int i=0;
	
	try{
		texto->setTexto(valido);
		temp=texto->getTexto();
		while(temp[i]!='\0'){
			if(temp[i]!=valido[i]){
				estado=FALHA;
			}
			i++;
		}
	}
	catch(invalid_argument excecao){
		estado=FALHA;
	}
}

void TUTexto::testarCenarioFalha(){
	try{
		texto->setTexto(invalido);
		estado=FALHA;
	}
	catch(invalid_argument excecao){
		return;
	}
}

int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

	
