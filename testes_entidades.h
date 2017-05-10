#include "entidades.h"
#include "testes_dominios.h"


class TUUser{			//teste da classe do nome
	private:
		
		TUNome teste_nome;
		TUEmail teste_email;
		TUSenha teste_senha;
		
		int estado;
		
		void setUp();					//metodos para executar o teste
    	void tearDown();
		
	public:
		
		const static int SUCESSO = 0;		//constantes para executar o teste
		const static int FALHA = -1;
		
		int run();
};
