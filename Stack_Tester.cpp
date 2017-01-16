#include <iostream>
using namespace std;

#include "Stack.h"
/**
 * Title: Lab 2 Submission : Stacks
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/15/2017
 *
 * Driver file for a stacks program that sorts a
 * group of numbers in ascending order using two
 * stacks. Assumed, the numbers are initially
 * given in one of the stacks.
 *
 * @author Mariya Eggensperger
*/
void sort_stack_ascending(Stack & s1, Stack & s2);

int main()
{
   Stack s1, s2;

   // Test insertion of 1, 5, 3, -3, 4, 8, 10, -5
   s1.push(1);
   s1.push(5);
   s1.push(3);
   s1.push(-3);
   s1.push(4);
   s1.push(8);
   s1.push(10);
   s1.push(-5);

   cout << "Unsorted: ";
   s1.display(cout);

   // Call on the sorting function
   sort_stack_ascending(s1,s2); // Sort both stacks accordingly

   cout << "Sorted: ";
   s2.display(cout);

}
void sort_stack_ascending(Stack &s1, Stack &s2) {
   // While the stack 1 is not empty
   while(!s1.empty())
   {
      int temp_item = s1.top(); // Create a temporary top value
      s1.pop(); // Remove the top item
      // While stack 2 is not empty and the temp
      // item is less than the top item
      while(!s2.empty() && temp_item < s2.top())
      {
         s1.push(s2.top()); // Add the lower stack 1 item to the top of stack 2
         s2.pop(); // Remove value from stack 2
      }
      s2.push(temp_item); // Add the swapped value to stack 2
   }

}
