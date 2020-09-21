/****
* PSEUDOCODE:
*
*/

#include <iostream>
#include <string>
#include "hw3.h"

using namespace std;

void ReverseArray(int arr[], int length)  {
  
  for (int x = 0; x < (length/2); x++)  {
    int n = length - 1;
    int temp = arr[x];
    arr[x] = arr[n];
    arr[n] = temp;
    n = n-1;
  }
}

bool HasBalancedParentheses(string input)  {
  
  int count = 0;
  for (int y = 0; y < input.length[]; y++)  {
    if (input[0] == ')')
      return false;
    if (input[i] == '(') 
      count++;
    if (input[i] == ')') 
      count--;
    if (count < 0) {
      return false;
    }
  }
    if (count == 0)  {
      return true;
    }
    return false;
  }
}

bool InXish(string input, string x)  {
  if(input == "") {
    return false;
  }
  if (x.length() == 0)
    return true;
  if (input.length() == 0)
    return false;
  if (input.at(0) == x.at(0))
    return InXish(input.substr(1), x.substr(1));
  return InXish(input.substr(1), x.substr(0));
    }
  /*if(input == x)  {
        return true;
  }
  std::cout << word << std::endl;

  if(word[0] == x) {
     ///COMPLETE THIS TO HELP WITH RECURSION SETUP 
    
  } 
    else {
  return InXish(word.substr(1,word.length()), x);
    }*/
}

bool InDogish(string input)  {
  return InXish(input, "dog");
  
  /*if(word == "") {
    return false;
  }
    std::cout << word << std::endl;
  if(word[0] == letter) {
     ///COMPLETE THIS TO HELP WITH RECURSION SETUP 
 
    } 
  else {
  return InDogish(word.substr(1,word.length()), letter);
  }*/
}

/*bool DogishHelper( std::string word, char letter){
 if(word == "") {
 return false;
    }
    std::cout << word << std::endl;
  if(word[0] == letter) {
     ///COMPLETE THIS TO HELP WITH RECURSION SETUP 
 
  } else {
 return DogishHelper(word.substr(1,word.length()), letter);
    }
}*/