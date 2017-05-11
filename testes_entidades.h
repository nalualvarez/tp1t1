#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED


#include "entidades.h"
#include "dominios.h"
#include "testes_dominios.h"

using namespace std;


class TUUser{			/**teste da classe do usuario*/
	private:
		
		TUNome teste_nome;
		TUEmail teste_email;
		TUSenha teste_senha;
		
		int estado;
		
		void setUp();					/**metodos para executar o teste*/
    	void tearDown();
		
	public:
		
		const static int SUCESSO = 0;		/**constantes para executar o teste*/
		const static int FALHA = -1;
		
		int run();
};

class TUBlog{			/**teste da classe do blog*/
	private:
		
		TUNome teste_nome;
	
		
		int estado;
		
		void setUp();					/**metodos para executar o teste*/
    	void tearDown();
		
	public:
		
		const static int SUCESSO = 0;		/**constantes para executar o teste*/
		const static int FALHA = -1;
		
		int run();
};

class TUPost{			/**teste da classe postagem*/
	private:
		
		TUNome teste_nome;
		TUTexto teste_texto;
				
		int estado;
		
		void setUp();					/**metodos para executar o teste*/
    	void tearDown();
		
	public:
		
		const static int SUCESSO = 0;		/**constantes para executar o teste*/
		const static int FALHA = -1;
		
		int run();
};		
		
class TUComment{			/**teste da classe comentario*/
	private:
		
		TUNome teste_nome;
		TUTexto teste_texto;
		TUEmail teste_email;
		TUSenha teste_senha;
				
		int estado;
		
		void setUp();					/**metodos para executar o teste*/
    	void tearDown();
		
	public:
		
		const static int SUCESSO = 0;		/**constantes para executar o teste*/
		const static int FALHA = -1;
		
		int run();
};		
			


#endif /** TESTES_H_INCLUDED*/








