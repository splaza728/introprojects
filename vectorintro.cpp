#include <iostream>
#include <vector>

int main(){
  std::vector<int> nums = {2, 4, 3, 6, 1, 9};
  int sum =0;
  int product =1;
  for(int i=0; i<nums.size(); i++)
  {
    if(nums[i]%2==0)
      sum = sum + nums[i];
    else if(nums[i]%2!=0)
      product = product*nums[i];

  }
  std::cout<< "Sum of even numbers is " << sum <<"\n" << "Product of odd numbers is " << product << "\n";
}
