#include <iostream>

int main() {
  int num_elem;
  std::cout << "Digite o tamanho do vetor: ";
  std::cin >> num_elem;
  
  int* c = new int[num_elem];
  
  for (int i = 0; i < num_elem; i++) {
    c[i] = 2*i;
  }
  for (int i = 0; i < num_elem; i++) {
    std::cout << "c[" << i << "] = " << c[i] << "\n";
  }
std::cout << "---------" << "\n";
  std::cout << c[0] << "\n";
    std::cout << c[2] 10<< "\n";
      std::cout << c[4] << "\n";
        std::cout << c[8] << "\n";
          std::cout << c[9] << "\n";

  delete [] c;
  
  return 0;
}

