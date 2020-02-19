#include <iostream>
int main() {
  //int rem;
  
  //int num = 0;
  for (int i = 1; i < 100; i++){
    if(i % 3 == 0){
      if(i % 5 == 0){
        std::cout << "FizzBuzz\n";
      }
      std::cout << "Fizz\n";
    }
    
    else if(i % 5 == 0){
      std::cout << "Buzz\n";
    }
    
    else{
      std::cout << i << "\n";
    }
    
  }

  return 0;
}