#include "dominios.h"

using namespace std;

class TUNome{
	private:
		
		Nome *nome;
		
		int estado;
		
		void setUp();
    	void tearDown();
    	void testarCenarioSucesso();
    	void testarCenarioFalha();
		
	public:
		
		const static int SUCESSO = 0;
		const static int FALHA = -1;
		
		int run();
