#include <iostream>
#include <vector>
#include <string>

int main(){
  std::string example= "turpentine and turtles";
  std::vector<char>vowel ={'a','e','i','o','u'};
  std::vector<char>result;

for (int i=0; i< example.size(); i++){
  for (int j=0; j<vowel.size(); j++){
      if (example[i]==vowel[j])
        result.push_back(example[i]);
         }
       if (example[i] == 'e'||example[i] == 'u')
          result.push_back(example[i]);
      }
    for(int k=0; k<result.size();k++)
         std::cout<<result[k];
 

}
