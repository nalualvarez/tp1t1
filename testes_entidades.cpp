#include "testes_entidades.h"
#include "testes_dominios.h"

const int TUUser::SUCESSO;
const int TUUser::FALHA;
const int TUBlog::SUCESSO;
const int TUBlog::FALHA;
const int TUPost::SUCESSO;
const int TUPost::FALHA;
const int TUComment::SUCESSO;
const int TUComment::FALHA;

/**definicoes dos metodos da classe TUUser*/
void TUUser::setUp(){
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

/**definicoes dos metodos da classe TUBlog*/
void TUBlog::setUp(){
	estado=SUCESSO;
}

int TUBlog::run(){
	int temp;
	temp=teste_nome.run();
	if (temp==FALHA){
		estado=temp;
	}

	return estado;
}

/**definicoes dos metodos da classe TUPostagem*/
void TUPost::setUp(){
	estado=SUCESSO;
}

int TUPost::run(){
	int temp;
	temp=teste_nome.run();
	if (temp==FALHA){
		estado=temp;
	}
		temp=teste_texto.run();
	if(temp==FALHA){
		estado=temp;
	}
	
	return estado;
}

/**definicoes dos metodos da classe TUComentario*/
void TUComment::setUp(){
	estado=SUCESSO;
}

int TUComment::run(){
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
		temp=teste_texto.run();
	if(temp==FALHA){
		estado=temp;
	}
	return estado;
}
