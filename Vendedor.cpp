#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    double quotaMensalVendas;
  public:
	double quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}
	void setQuotaMensalVendas(double _quotaMensalVendas){
		quotaMensalVendas = _quotaMensalVendas;
	}
	double getQuotaMensalVendas(){
		return quotaMensalVendas;
	}
};

