// complex.cpp
#include "complex.h"

complex::complex(double real, double imaginary) : re(real), im(imaginary) {
}

complex::complex(complex& other){
  re = other.Re();
  im = other.Im();
}

complex::~complex(){
}

double complex::Re(){
  return re;
}

double complex::Im(){
  return im;
}
