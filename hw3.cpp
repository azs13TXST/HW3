/*
PSEUDOCODE:
ReverseArray function
  Initializes int "n"
  For loop to cycle through teh array
    Sets temp to the current position
    Switches the first and last positions
    Moves through the array and continues switching

HasBalancedParentheses function
  Iniializes the int "count"
  For loop to cycle through the string
    Checks if the string starts unbalanced
    Changes the value of count depending on
      Which parentheses is present
    Returns true only if count = 0

InXish function
  Returns false if the array is empty
  Searches for the given word in the string
  Returns the InXish function if the substrates match

InDogish function
  Returns the InXish function with dog as the input
*/

#include <iostream>
#include <string>
#include "hw3.h"

using namespace std;

void ReverseArray(int arr[], int length)  {
  int n = length - 1;
  //Reverses the array order
  for (int x = 0; x < (n); x++)  {
    int temp = arr[x];
    arr[x] = arr[n];
    arr[n] = temp;
    n = n-1;
  }
}

bool HasBalancedParentheses(string input)  {
  
  int count = 0;
  //Loop to keep tabs on each parentheses
  for (int y = 0; y < input.length(); y++)  {
    if (input[0] == ')')
      return false;
    
    if (input[y] == '(') 
      count++;
    
    if (input[y] == ')') 
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

bool InXish(string input, string x)  {
  if(input == "")
    return false;
  
  if (x.length() == 0)
    return true;
  
  if (input.length() == 0)
    return false;
  
  if (input.at(0) == x.at(0))
    return InXish(input.substr(1), x.substr(1));

  return InXish(input.substr(1), x.substr(0));
}

bool InDogish(string input)  {
  return InXish(input, "dog");
}