//graph is rotated sideways bc im lazy, just turn screen
#include <iostream>
#include <string>

std::string chartRow(int num){
  std::string row {""};

  for(int i = 0; i < num; i++){
    row.append(" ");
  }

  row.append("0");
  return row;
}


int main() {
  int value {0};
  int randNum {0};
  int terminator {0};
  int iterator;

  std::cout << "enter number of iterations" << std::endl;
  std::cin >> iterator;
  
  while(terminator < iterator){
    randNum = 1+(rand() % 3);
    
    if(randNum == 1){
      if(value > 0){
        value--;
      }
    }
    if(randNum == 3){
      value++;
    }
    
    std::cout << chartRow(value) << std::endl;
    terminator++;
  }
  
}
