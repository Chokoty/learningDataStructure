#include <iostream>

using namespace std;
int main() {
  //1. Variables
  // string characterName = "John";
  // int characterAge = 35;

  // cout << "There once was a man named " << characterName <<"\n";
  // cout << "He was "<< characterAge << " years old "  <<"\n";
  // characterName = "Tom";
  

  //2. Data type
  // char grade = 'A';
  // string phrase = "GreenApple";
  // int age = 50;
  // double gpa = 2.3;
  // // //double > float
  // bool isMale = true;

  // // cout << sentence,number, constant, anything not only variables <<'\n'; 

  //3. Working with string
  string phrase = "Green apple";
  cout << "Green apple\n"; //new line 비슷함, endl
  cout << "hello" << endl;
  cout << phrase;
  cout << '\n';
  //function .length()
  cout << phrase.length();
  cout << phrase[0]; // 'G'
  phrase[0] = 'B';
  cout << phrase << '\n';//Breen~
  
  //function .find( , ) =>find starts index position
  cout << phrase.find("apple", 0) << '\n'; //start looking

  //function .substr( , )
  cout << phrase.substr();

  return 0;
}
