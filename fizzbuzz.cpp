//outputs numbers 1 to 100.
//if the number is a multiple of 3, print Fizz
//if the number is a multiple of 5, print Buzz
//if the number is a multiple of 3 and 5, print FizzBuzz


#include <iostream>

int main(){
  for( int i =1; i<101; i++){
    if(i%3==0&&i%5!=0)
      std::cout<<"Fizz!\n";
    else if(i%3!=0&&i%5==0)
      std::cout<<"Buzz!\n";
    else if(i%3==0&&i%5==0)
      std::cout<<"FizzBuzz!\n";
    else
      std::cout<<i<<"\n";
  }
  return 0;
}
