#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
	  int projetos;
	public:
    void setProjetos(int _projetos){
      projetos = _projetos;
    }
    int getProjetos(){
      return projetos;
    }
};