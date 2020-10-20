#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    const double limiteHorasTrabalhadas = 8;
    double salarioHora;  
    std::string nome;
  
  public:
    double pagamentoMes(double horasTrabalhadas) {
      double total = horasTrabalhadas;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > limiteHorasTrabalhadas)
    //Cada hora extra custa 1,5x o salarioHora
      if (horasTrabalhadas > limiteHorasTrabalhadas) {
        double horasExtras = horasTrabalhadas - limiteHorasTrabalhadas;
        total += horasExtras / 2;
      }
	  return (total * salarioHora);
    }
    void setNome(std::string _nome){
      nome = _nome;
    }
    std::string getNome(){
      return nome;
    }
    void setSalarioHora(double _salarioHora){
      salarioHora = _salarioHora;
    }
    double getSalarioHora(){
      return salarioHora;
    }

};

#endif