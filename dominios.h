/*
	\author Ana Luisa Alvarez e Pedro Lucas Andrade
	\version 1.0
	\date 2017
	
*/

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept> //Biblioteca

using namespace std;

/*A classe Nome representa o nome do usuário*/
class Nome{

private:
	char[21] nome;
	const static int LIMITE = 20; /*Limite de 20 caracteres por nome*/
	
	void validar(char) throw (invalid_argument); 

public:
	void setNome (char) throw (invalid_argument);
	char getNome () const;

}; 

/*A classe Senha representa a senha do usuário*/
class Senha{

private:
	char [6] senha;
	const static int LIMITE = 5; /*a senha deve ter 5 caracteres*/
	
	void validar(char)	throw (invalid_argument);

public:
	void setSenha (char) throw (invalid_argument);

};

/*A classe Email representa o email do usuário*/
class Email{

private:
	char[50]email;
	
	void validar(char) throw (invalid_argument);
	const static char arroba = '@';
	const static char ponto = '.';

public:
	void setEmail (char) throw (invalid_argument);
	
};

/*A classe Avaliacao representa uma avaliacao sobre um texto*/
class Avaliacao{

private:
	int avaliacao;
	
	void validar (int) throw (invalid_argument);

public:
	void setAvaliacao (int) thow (invalid_argument);
};

class Texto{

private:
	char[50] texto;
	const static int LIMITE = 50; /*o texto deve ter ate 50 caracteres*/
public:
	void setTexto (char) throw (invalid_argument);
};

#endif 

