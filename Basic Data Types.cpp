#include<iostream>
int main()
{
  // explains the program to user
  std::cout<<"Welcome! enter two numbers"
  // Declares Input variables
  int x,y;
  //Declares Output variables
  float result;
  
  //Prompts user for inputs//
  std::cout<<"Type a Number: ";
  std::cin >> x;
  std::cout << x <<"\n";
  std::cout << "Type a Second Number";
  std::cin>> y;
  std::cout << y <<"\n";
  //operates on the variables
  result=x/y;
  
  //prints the result
  std::cout<<"Results is: "<<result;
  return 0;
}