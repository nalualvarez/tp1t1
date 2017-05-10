#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <stdexcept>	//Bliblioteca de execcoes

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
		Senha getSenha() const {
			return senha_user;
		}
		void setNome(const Nome&);				
		void setEmail(const Email&);
		void setSenha(const Senha&);
};

inline void User::setNome(const Nome &nome) {			//declaracao inline dos metodos de acesso aos dados da classe do usuario
	this->nome_user = nome;
}

inline void User::setEmail(const Email &email) {
	this->email_user = email;
}

inline void User::setSenha(const Senha &senha) {
	this->senha_user = senha;
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
};

inline void Comment::setTexto(const Texto &texto){		//declaracao inline dos metodos que acessam os dados dos comentarios
	this->texto_comment = texto;
}

inline void Comment::setNome(const Nome &nome){
	this->nome_comment = nome;
}

class Post{
	private:
		Texto texto_post;
		Avaliacao avaliacao_post;
	
	public:
		Texto getTexto() const{
			return texto_post;
		}
		Avaliacao getAvaliacao() const{
			return avaliacao_post;
		}
		void setAvaliacao(const Avaliacao&);
		void setTexto(const Texto&);
};

inline void Post::setAvaliacao(const Avaliacao &avaliacao){
	this->avaliacao_post = avaliacao;
}

inline void Post::setTexto(const Texto &texto){
	this->texto_post = texto;
}

class Blog{
};
		






#endif // ENTIDADES_H_INCLUDED
