#include "testes_entidades.h"

const int SUCESSO;
const int FALHA;

//definicoes dos metodos da classe TUUser
void TUUser::setUp(){
	user = new User();
	estado=SUCESSO;
}

int TUUser::run(){
	int temp;
	temp=teste_nome.run();
	if (temp==FALHA){
		estado=temp;
	}
	temp=teste_email.run();
	if(temp==FALHA){
		estado=temp;
	}
	temp=teste_senha.run();
	if(temp==FALHA){
		estado=temp;
	}
	return estado;
}
