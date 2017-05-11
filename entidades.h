#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <stdexcept>	/**Bliblioteca de execcoes*/
#include "dominios.h"

using namespace std;

class User{			/**Classe do usuario*/
	private:
		Nome nome_user;
		Email email_user;
		Senha senha_user;
		
	public:					/**Metodos para acessar os dados da classe do usuario*/
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

inline void User::setNome(const Nome &nome) {			/**declaracao inline dos metodos de acesso aos dados da classe do usuario*/
	this->nome_user = nome;
}

inline void User::setEmail(const Email &email) {
	this->email_user = email;
}

inline void User::setSenha(const Senha &senha) {
	this->senha_user = senha;
}

	
		

class Comment{		/**Classe do comentario*/
	private:
		Texto texto_comment;
		Nome nome_comment;
		
	public:
		Texto getTexto() const{				/**Metodos que acessam os dados dos comentarios*/
			return texto_comment;
		}
		Nome getNome() const{
			return nome_comment;
		}
		void setTexto(const Texto&);
		void setNome(const Nome&);
};

inline void Comment::setTexto(const Texto &texto){		/**declaracao inline dos metodos que acessam os dados dos comentarios*/
	this->texto_comment = texto;
}

inline void Comment::setNome(const Nome &nome){
	this->nome_comment = nome;
}

class Post{		/**Classe das postagens*/
	private:
		Texto texto_post;
		Avaliacao avaliacao_post;
	
	public:
		Texto getTexto() const{		/**declaracao e definicao dos metodos que acessam os dados das postagens*/
			return texto_post;
		}
		Avaliacao getAvaliacao() const{
			return avaliacao_post;
		}
		void setAvaliacao(const Avaliacao&);
		void setTexto(const Texto&);
};

inline void Post::setAvaliacao(const Avaliacao &avaliacao){			/**definicao inline dos metodos que acessam dados das postagens*/
	this->avaliacao_post = avaliacao;
}

inline void Post::setTexto(const Texto &texto){
	this->texto_post = texto;
}

class Blog{				/**Classe das blogs*/
	private:
		Nome nome_blog, nome_autor;
	
	public:
		Nome getNomeBlog() const{		/**declaracao e definicao dos metodos que acessam os dados das blogs*/
			return nome_blog;
		}
		Nome getNomeAutor() const{
			return nome_autor;
		}
		void setNomeBlog(const Nome&);
		void setNomeAutor(const Nome&);
};

inline void Blog::setNomeBlog(const Nome &nome){			/**definicao inline dos metodos que acessam dados das blogs*/
	this->nome_blog = nome;
}
inline void Blog::setNomeAutor(const Nome &nome){
	this->nome_autor = nome;
}
		
		 
#endif /**ENTIDADES_H_INCLUDED*/
