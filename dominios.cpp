#include "dominios.h"


const int Codigo::LIMITE;

/*A funçao validar verifica se o Nome tem as caracteristicas desejaveis*/
void Nome::validar(char nome) throw (invalid_argument){
	
	int i=0;
	
	/*Testa se os caracteres inseridos sao letras*/
	while (nome[i]=!'\0'){ 
		i++;
		if ((nome[i]=='1')||(nome[i]=='2')||(nome[i]=='3')||(nome[i]=='4')||(nome[i]=='5')||(nome[i]=='6')||(nome[i]=='7')||(nome[i]=='8')||(nome[i]=='9')||(nome[i]=='0')
			||(nome[i]=='!')||(nome[i]=='@')||(nome[i]=='#')||(nome[i]=='$')||(nome[i]=='%')||(nome[i]=='^')||(nome[i]=='&')||(nome[i]=='*')||(nome[i]=='(')||(nome[i]==')')
			||(nome[i]=='~')||(nome[i]=='`')||(nome[i]=='-')||(nome[i]=='_')||(nome[i]=='+')||(nome[i]=='=')||(nome[i]=='[')||(nome[i]==']')||(nome[i]=='{')||(nome[i]=='}')
			||(nome[i]==':')||(nome[i]==';')||(nome[i]=='<')||(nome[i]=='>')||(nome[i]==',')||(nome[i]=='.')||(nome[i]=='?')||(nome[i]=='/')){

			throw invalid_argument("Argumento invalido.");

		}
	
	
		
	}
	
	/*testa a quantidade limite de caracteres*/
	if (i>LIMITE){
		throw invalid_argument("Argumento invalido.");
	}
	
}

/*A funcao setNome cria o objeto nome*/
void Nome::setNome (char nome) throw (invalid_argument){
	
	validar (nome); /*chama a função validar*/
	this-> nome = nome; /*seta o nome*/
	
}

/*A funcao getNome recupera o nome*/
char Nome::getNome() const {
	
	return nome; /*retorna o nome*/
}

/*A funcao validar verifica se a senha escolhida tem as caracteristicas desejaveis*/
void Senha::validar (char senha) throw (invalid_argument){
	int i=0;
	int j;
	
	while (senha[i]=!'\0'){ /*Percorre o vetor para contar os caracteres*/
		i++;
	}
	
	if (i!=LIMITE){ /*testa se a senha tem a quantidade certa de caracteres*/
		throw invalid_argument("Argumento invalido.");
	}
	
	for (i=0;i<LIMITE;i++){ /*testa se os caracteres se repetem na senha*/
		
		for (j=i+1;j<LIMITE;j++){
			if (senha[i]==senha[j]){
				throw invalid_argument ("Argumento invalido.")
			}
		}
	}
}

/*A funcao setSenha cria o objeto senha*/
void Senha::setSenha(char senha) throw (invalid_argument){
	validar(senha); /*chama a funcao de validacao*/
	this-> senha = senha; /*seta a senha*/
}

/*A funcao validar verifica se o email inserido tem as caracteristicas desejaveis */
void Email::validar (char email) throw (invalid_argument){
	int i=0;
	int flag_arroba=0; /*flag para indicar se o arroba foi encontrado no email digitado*/
	int flag_ponto=0; /*flag para indicar se o ponto foi encontrado no email digitado*/
	
	while (email[i]=!'\0'){ /*testa se os caracteres inseridos sao letras*/
		if ((nome[i]=='1')||(nome[i]=='2')||(nome[i]=='3')||(nome[i]=='4')||(nome[i]=='5')||(nome[i]=='6')||(nome[i]=='7')||(nome[i]=='8')||(nome[i]=='9')||(nome[i]=='0')
			||(nome[i]=='!')||(nome[i]=='#')||(nome[i]=='$')||(nome[i]=='%')||(nome[i]=='^')||(nome[i]=='&')||(nome[i]=='*')||(nome[i]=='(')||(nome[i]==')')
			||(nome[i]=='~')||(nome[i]=='`')||(nome[i]=='-')||(nome[i]=='_')||(nome[i]=='+')||(nome[i]=='=')||(nome[i]=='[')||(nome[i]==']')||(nome[i]=='{')||(nome[i]=='}')
			||(nome[i]==':')||(nome[i]==';')||(nome[i]=='<')||(nome[i]=='>')||(nome[i]==',')||(nome[i]=='?')||(nome[i]=='/')){

			throw invalid_argument("Argumento invalido.");

		}
		if (email[i]==arroba){
			if (flag_arroba =='1'){ /*se uma arroba for encontrada e a flag ja estiver marcada, ha dois @ no email*/
				throw invalid_argument ("Argumento_invalido.")
			}
			else{
				flag_arroba = 1; /*se uma arroba for encontrada e a flag for zero, setar a flag com 1*/
			}
		}
		if (email[i]==ponto){
			if (flag_ponto =='1'){  /*se um ponto for encontrado e a flag ja estiver marcada, ha dois pontos no email*/
				throw invalid_argument ("Argumento_invalido.")
			}
			else{
				flag_ponto = 1; /*se um ponto for encontrado e a flag for zero, setar a flag com 1*/
			}
		}
	}
}

/*A funcao setEmail cria objeto email*/
void Email::setEmail(char email) throw (invalid_argument){
	validar (email); /*chama a funcao validar*/
	this-> email = email; /*seta o email*/
}

/*A funcao validar verifica se a avaliacao tem as caracteristicas desejaveis */
void Avaliacao::validar (int avaliacao) throw (invalid_argument){
	if ((avaliacao>5)||(avaliacao<1){ /*verifica se a avaliaçao é diferente de 1, 2, 3, 4 ou 5*/
		throw invalid_argument("Argumento invalido.");
	}
}

/*A funcao setAvaliacao cria objeto avaliacao*/
void Avaliacao::setAvaliacao(int) throw (invalid_argument){
	validar (avaliacao); /*chama a funcao validar*/
	this-> avaliacao = avaliacao; /*seta avaliacao*/
}

/*A funcao validar verifica se o texto inserido tem as caracteristicas desejaveis */
void Texto::validar (char texto) throw (invalid_argument){
	int i=0;
	while (char[i]!='\0'){ /*conta os caracteres do texto*/
		i++;
	}
	if (i>=LIMITE){ /*se os caracteres do texto forem maior que o limite, da erro*/
		throw invalid_argument("Argumento invalido.");
	}
}

/*A funcao setTexto cria objeto texto*/
void Texto::setTexto(char texto) throw (invalid_argument){
	validar (texto); /*chama a funcao validar*/
	this-> texto = texto; /*seta o texto*/
}
