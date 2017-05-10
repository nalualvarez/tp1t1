#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <stdexcept>	//Bliblioteca de execcoes
#include "dominios.h"	//Biblioteca de dominios

using namespace std;

class User{			//Classe do usuario
	private:
		Nome nome_user;
		Email email_user;
		Senha senha_user;
		
	public:					//Metodos para acessar os dados da classe do usuario
		Nome getNome() const {
			return nome_user;
		}
		Email getEmail() const {
			return email_user;
		}
		Senha senha_user() const {
			return senha_user;
		}
		void setNome(const Nome&);				
		void setEmail(const Email&);
		void setSenha(const Senha&);
};

inline void User::setNome(const Nome nome&) {			//declaracao inline dos metodos de acesso aos dados da classe do usuario
	this->nome_user = nome;
}

inline void User::setEmail(const Email &email) {
	this->email_user = email;
}

inline void User::setSenha(const Senha &senha) {
	this->senha_user = senha;
}

class Avaliacao{		//Classe da avaliacao
	private:
		int avaliacao;
		
	public:
		Avaliacao(): avaliacao(-1);		//Construtor da classe
		
		int getAvaliacao() const{
			return avaliacao;
		}
		
		void setAvaliacao(int) throw (invalid_argument);
};

inline void Avaliacao::setAvaliacao(int avaliacao) throw (invalid_argument){		//declaracao inline dos metodos que acessam os dados da avaliacao
	int temp;
	
	if ((avaliacao<1)||(avaliacao>5)){
		throw invalid_argument ("Argumento invalido");
	}
	
	if(this->avaliacao==-1){
		temp = avaliacao;
	}
	else{
		temp=((this->avaliacao + avaliacao)/2);
	}
	this->avaliacao = temp;
}
	
		

class Comment{		//Classe do comentario
	private:
		Texto texto_comment;
		Nome nome_comment;
		
	public:
		Texto getTexto() const{				//Metodos que acessam os dados dos comentarios
			return texto_comment;
		}
		Nome getNome() const{
			return nome_comment;
		}
		void setTexto(const Texto&);
		void setNome(const Nome&);
}

inline Comment::setTexto(const Texto &texto){		//declaracao inline dos metodos que acessam os dados dos comentarios
	this->texto_comment = texto;
}

inline Comment::setNome(const Nome &nome){
	this->nome_comment = nome;
}







#endif // ENTIDADES_H_INCLUDED
