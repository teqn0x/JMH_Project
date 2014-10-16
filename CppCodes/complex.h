// complex.h
#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class complex {

 public:
  //Constructor, Copy-constructor and destructor:
  complex(double real, double imaginary);
  complex(complex& other); 
  ~complex();

  //Accessor functions:
  double Re();
  double Im();
  
 private:
  double re;
  double im;

};

#endif
