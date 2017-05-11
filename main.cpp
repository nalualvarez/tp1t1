#include <iostream>
#include <stdexcept>
#include <string>

#include "dominios.h"
#include "entidades.h"
#include "testes_dominios.h"
#include "testes_entidades.h"

using namespace std;

int main() {
	
	/**chama todos os testes de unidade de todas as classes*/
	TUNome nome;

    int resultado = nome.run();

    cout << "Teste do nome deu = " << resultado << endl;
     
	return 0;
	
	
	TUSenha senha;

    resultado = senha.run();

    cout << "Teste da senha deu = " << resultado << endl;


	TUEmail email;

    resultado = email.run();

    cout << "Teste do email deu = " << resultado << endl;
    
	
	TUAvaliacao avaliacao;

    resultado = avaliacao.run();

    cout << "Teste da avaliaçao deu = " << resultado << endl;
    

	TUTexto texto;

    resultado = texto.run();

    cout << "Teste do texto deu = " << resultado << endl;
    
    
    TUUser user;

    resultado = user.run();

    cout << "Teste do user deu = " << resultado << endl;
    
    
	TUBlog temp;

    resultado = temp.run();

    cout << "Teste do blog deu = " << resultado << endl;


	TUComment comment;

    resultado = comment.run();

    cout << "Teste do comentario deu = " << resultado << endl;
    
    
	TUPost post;

    resultado = post.run();

    cout << "Teste do post deu = " << resultado << endl;

	return 0;
}

