/*********************************************************************
 * Date: 5/29/15
 * Description: This function evalutes postfix expressions.
 ********************************************************************/

#include <cctype>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

/*********************************************************************
 * postfixEval
 * This function takes a C-string to represent a postfix expression. 
 * It returns a double to represent the end product of the evaluation.
 ********************************************************************/
double postfixEval(char *str){
  stack<double> dStack;         
  double num1, num2;
  double total = 0;
	
  char *token;
  token = strtok (str, " ");
  	
  while(token != NULL){
  
    // If the token is a digit, push it onto the stack
    if(isdigit(token[0])){
      dStack.push(atof(token));
    }

    // If the token is a symbol, perform arithmetic operation
    else{
      // Pop the top number off the stack
      num2 = dStack.top();
      dStack.pop();

      // Pop the second number off the stack
      num1 = dStack.top();
      dStack.pop();

      // Select the appropriate arithmetic operation
      switch(token[0]){	
        case '+': total = num1 + num2; break;
        case '-': total = num1 - num2; break;
        case '*': total = num1 * num2; break;
        case '/': total = num1 / num2; break;
      }

      // Push the result back to the top of the stack
      dStack.push(total);
    }	
    token = strtok (NULL, " ");
  }
  return total;
}

