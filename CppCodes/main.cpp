// main.cpp
#include <iostream>
#include <fstream>
#include "complex.h"


int main(void){
  
  std::string outfilename = "output_main.txt";
  
  std::cout << "Running the test code for complex numbers, saving the results to " << outfilename << std::endl;
  
  std::ofstream outf;
  outf.open(outfilename);
  outf << "Making a complex c1 with re=1, im=2" << std::endl;
  
  complex c1(1.0,2.0);
  outf << "c1.Re() = " << c1.Re() << ", c1.Im() = " << c1.Im() << std::endl;
  
  outf << "c2: copy of c1" << std::endl;
  complex c2(c1);

  outf << "c2.Re() = " << c2.Re() << ", c2.Im() = " << c2.Im() << std::endl;
  outf.close();

  return 0;
}
