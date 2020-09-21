#include <iostream>
#include "hw3.h"

using namespace std;
int main() {
  //Test ReverseArray();

    std::cout << DogishHelper("gadgdks",'d') << std::endl;
  int arr[] = { 1, 2, 3, 4, 5 };
	ReverseArray(arr);
  int n = sizeof(arr)/sizeof(arr[0]);

	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

//Test HasBalancedParentheses();
 std::string statement1 = "((())())";
 if(HasBalancedParentheses(statement1)){
   	std::cout << "Is it Ballanced: " << std::endl;
 }

// Test InDogish();
 std::string mydogs = "dpoags";
 if (InDogish(mydogs))  {
   	std::cout << "Part of Dogish? " << std::endl;
 }

 // Test bool InXish(sting mytext, sting myword);

}


