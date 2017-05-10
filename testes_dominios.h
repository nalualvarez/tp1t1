#ifndef TESTES_DOMINIOS_H_INCLUDED
#define TESTES_DOMINIOS_H_INCLUDED


#include "dominios.h"

using namespace std;

class TUNome{			//teste da classe do nome
	private:
		
		char valido[20], invalido[25];
		
		Nome *nome;		//referencia ao objeto que sera testado
		
		int estado;
		
		void setUp();					//metodos para executar o teste
    	void tearDown();
    	void testarCenarioSucesso();
    	void testarCenarioFalha();
		
	public:
		
		const static int SUCESSO = 0;		//constantes para executar o teste
		const static int FALHA = -1;
		
		int run();
};

class TUSenha{
	private:
		
		char valido[5], invalido[10];
		
		Senha *senha;
		
		int estado;
		
		void setUp();					//metodos para executar o teste
    	void tearDown();
    	void testarCenarioSucesso();
    	void testarCenarioFalha();
		
	public:
		const static int SUCESSO = 0;
		const static int FALHA = -1;
		
		int run();
};

class TUEmail{		//teste da classe do email
	private:
		
		char valido[20], invalido[20];
		
		Email *email;
		
		int estado;
		
		void setUp();					//metodos para executar o teste
    	void tearDown();
    	void testarCenarioSucesso();
    	void testarCenarioFalha();
    	
    public:
		const static int SUCESSO = 0;
		const static int FALHA = -1;
		
		int run();
};

class TUAvaliacao{
	private:
		
		int valido, invalido;
		
		Avaliacao *avaliacao;
		
		int estado;
		
		void setUp();					//metodos para executar o teste
    	void tearDown();
    	void testarCenarioSucesso();
    	void testarCenarioFalha();
    	
    public:
		const static int SUCESSO = 0;
		const static int FALHA = -1;
		
		int run();
};

class TUTexto{
	private:
		
		char valido[50], invalido[60];
		
		Texto *texto;
		
		int estado;
		
		void setUp();					//metodos para executar o teste
    	void tearDown();
    	void testarCenarioSucesso();
    	void testarCenarioFalha();
    	
    public:
		const static int SUCESSO = 0;
		const static int FALHA = -1;
		
		int run();
};
		
		
		


#endif // TESTES_H_INCLUDED

