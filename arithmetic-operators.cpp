#include <iostream>

int main(){
  // Arithmetic Operators = return the result of airthmetic specified by the operator ( +, -, *, /, %, ++, --)
  
  std::cout << "Arithmetic Operators" << std::endl;

  /*   students = students + 1; */
  // students += 1; // same as students = students + 1;
  // students++; // same as students = students + 1;

  /* students = students - 1; */
  // students -= 1; // same as students = students - 1;
  // students--; // same as students = students - 1;
  
  
  // students = students * 2;
  // students *= 2; // same as students = students * 2;
  
  // students = students / 2;
  // students /= 2; // same as students = students / 2;


  // students = students % 2;
  // students %= 2; // same as students = students % 2;

  int students = 14;
  std::cout << "Students: " << students << std::endl;

  students = students + 1;
  std::cout << "Students: " << students << std::endl;



  return 0;
}
