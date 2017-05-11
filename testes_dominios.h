#ifndef TESTES_DOMINIOS_H_INCLUDED
#define TESTES_DOMINIOS_H_INCLUDED


#include "dominios.h"

using namespace std;

class TUNome{			/**teste da classe do nome*/
	private:
		
		char valido[20], invalido[25];
		const static int LIMITEVALIDO = 20, LIMITEINVALIDO = 25;
		
		Nome *nome;		/**referencia ao objeto que sera testado*/
		
		int estado;
		
		void setUp();					/**metodos para executar o teste*/
    	void tearDown();
    	void testarCenarioSucesso();
    	void testarCenarioFalha();
		
	public:
		
		const static int SUCESSO = 0;		/**constantes para executar o teste*/
		const static int FALHA = -1;
		
		int run();
};

class TUSenha{  /**teste da classe senha*/
	private:
		
		char valido[6], invalido[10];
		const static int LIMITEVALIDO = 6, LIMITEINVALIDO = 10;
		
		Senha *senha;
		
		int estado;
		
		void setUp();					/**metodos para executar o teste*/
    	void tearDown();
    	void testarCenarioSucesso();
    	void testarCenarioFalha();
		
	public:
		const static int SUCESSO = 0;		/**constantes para executar o teste*/
		const static int FALHA = -1;
		
		int run();
};

class TUEmail{		/**teste da classe do email*/
	private:
		
		char valido[20], invalido[20];
		const static char arroba='@', ponto='.';
		
		Email *email;
		
		int estado;
		
		void setUp();					/**metodos para executar o teste*/
    	void tearDown();
    	void testarCenarioSucesso();
    	void testarCenarioFalha();
    	
    public:
		const static int SUCESSO = 0;		/**constantes para executar o teste*/
		const static int FALHA = -1;
		
		int run();
};

class TUAvaliacao{			/**teste da classe do avaliacao*/
	private:
		
		const static int VALIDO=3, INVALIDO=6;
		
		Avaliacao *avaliacao;
		
		int estado;
		
		void setUp();					//metodos para executar o teste
    	void tearDown();
    	void testarCenarioSucesso();
    	void testarCenarioFalha();
    	
    public:
		const static int SUCESSO = 0;	/**constantes para executar o teste*/
		const static int FALHA = -1;
		
		int run();
};

class TUTexto{
	private:
		
		char valido[50], invalido[60];
		const static int LIMITEVALIDO=50, LIMITEINVALIDO=60;
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
