// #include <iostream>

// using namespace std;
// int main() {
//   //1. Variables
//   // string characterName = "John";
//   // int characterAge = 35;

//   // cout << "There once was a man named " << characterName <<"\n";
//   // cout << "He was "<< characterAge << " years old "  <<"\n";
//   // characterName = "Tom";
  

//   //2. Data type
//   // char grade = 'A';
//   // string phrase = "GreenApple";
//   // int age = 50;
//   // double gpa = 2.3;
//   // // //double > float
//   // bool isMale = true;

//   // // cout << sentence,number, constant, anything not only variables <<'\n'; 

//   //3. Working with string
//   // string phrase = "Green apple";
//   // cout << "Green apple\n"; //new line 비슷함, endl
//   // cout << "hello" << endl;
//   // cout << phrase;
//   // cout << '\n';
//   // //function .length()
//   // cout << phrase.length();
//   // cout << phrase[0]; // 'G'
//   // phrase[0] = 'B';
//   // cout << phrase << '\n';//Breen~
  
//   // //function .find(const string to find ,const start point ) =>find starts index position
//   // cout << phrase.find("apple", 0) << '\n'; //start looking

//   // //function .substr(const starting idx , const length  ) =>grab string from 
//   // cout << phrase.substr(6,3) << '\n';
//   // string phraseSub;
//   // phraseSub = phrase.substr(6,3); //we can store this to another string
//   //  cout << phraseSub << '\n';
  
//   //4. Working with Numbers
//   // Whole Number -- Decimal Number( float, double)
//   // cout << -40.09823; // 1) -, .xx 다 출력됨 2)연산도 가능 3)나머지 mod %
//   // cout << 10 % 3;
//   int wnum = 5;
//   double dnum = 5.5;

//   // cout << 5.65 + 7; // 실수와 연산이 될경우 실수로 결과가 나온다 예시로 실수가 들어있는 나누기하면 실수가 됨
//   cout << 10 / 3;
//   cout << 10 / 3.0; 

  
//   return 0;
// }
/*===========================(1 ~ 4)====================================*/

//다른 파일에서 코드를 가져온다. 
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(){
//   // //basic math function
//   // cout << pow(3,5); //function from 'cmath'
//   // cout << sqrt(36);
//   // cout << round(4.3); // 4, round(4.7) = 5 반올림
//   // cout << ceil(4.1); //올림
//   // cout << floor(4.7);//내림
//   // cout << fmax(3,10); //큰수 반환, fmin 작은수 반환


//   return 0;
// }

//6. Getting User Input
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(){
//   // // int age; 
//   // double age; //4.5 가능
//   // cout << "Enter your age: ";
//   // cin >> age;

//   // cout << "You are " << age << " years old\n";
//   string name;
//   cout << "Enter your name: ";
//   getline(cin, name); //getting entire line of user enter

//   cout << "Hello " << name;
// //요약! 1개를 입력 받을때는(문자 하나, 숫자) cin으로! 여러개를 한번에 받을때는(문장 같이) getline으로!!! getline(cin, stored variable)

//   return 0;
// }

//7. Building a Calculator
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(){
//   double num1, num2; //같은 타입이면 ,로 이어도 됨.
//   cout << "Enter first number: ";
//   cin >> num1;
 
//   cout << "Enter second number: ";
//   cin >> num2;

//   cout << num1 + num2;

//   return 0;
// }


#include <iostream>
#include <cmath>

using namespace std;

int main(){
  //8. Building a Mad Libs
  string color, pluralNoun, celebrity;
  
  cout << "enter a color: ";
  getline(cin, color);
  cout << "enter a pluralNoun: ";
  getline(cin, pluralNoun);
  cout << "enter a celebrity: ";
  getline(cin, celebrity);


  cout << "Roses are "<< color << endl;
  cout << pluralNoun <<" are blue" << endl;
  cout << "I love " << celebrity  << endl;

  
  return 0;
}
