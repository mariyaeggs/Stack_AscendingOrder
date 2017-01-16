#include <iostream>
using namespace std;

#include "Stack.h"
/**
 * Title: Program 2 Submission : Stacks Ascending Order
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/15/2017
 *
 * Driver file for a stacks program that sorts a
 * group of numbers in ascending order using two
 * stacks. Assumed, the numbers are initially
 * given in one of the stacks. Ascending order:
 * top of the stack has the highest value.
 *
 * @author Mariya Eggensperger
*/
void sort_stack_ascending(Stack & s1, Stack & s2);

int main()
{
   Stack s1, s2;

   cout << endl;

//   cout << "----------------------- Test: 1, 5, 3, -3, 4, 8, 10, -5 -----------------------";
//
//    //Test insertion of 1, 5, 3, -3, 4, 8, 10, -5
//   s1.push(1);
//   s1.push(5);
//   s1.push(3);
//   s1.push(-3);
//   s1.push(4);
//   s1.push(8);
//   s1.push(10);
//   s1.push(-5);
////

//   cout << "----------------------- Test: 1, 5 -4, 6, 2 -----------------------";
//   // Test insertion of 1, 5 -4, 6, 2
//   s1.push(1);
//   s1.push(5);
//   s1.push(-4);
//   s1.push(6);
//   s1.push(2);

   cout << "----------------------- Test: -1, -4 -4, 6, 6, 9 -----------------------";
   // Test insertion of -1, -4 -4, 6, 6, 9
   s1.push(-1);
   s1.push(-4);
   s1.push(-4);
   s1.push(6);
   s1.push(6);
   s1.push(9);

   cout << "\n\nUnsorted: ";
   s1.display(cout);

   // Call on the sorting function
   sort_stack_ascending(s1,s2); // Sort both stacks accordingly

   cout << "\n\nSorted: ";
   s2.display(cout);
   cout << endl;

}
void sort_stack_ascending(Stack &s1, Stack &s2) {
   // While stack 1 is not empty
   while(!s1.empty())
   {
      int temp_item = s1.top(); // Create a temporary integer to store the stack 1 top value
      s1.pop(); // Remove the top item from stack 1
      // While stack 2 is not empty and the temporary integer
      // item is less than the top item in stack two
      while(!s2.empty() && temp_item < s2.top())
      {
         s1.push(s2.top()); // Add the higher stack one item to the top of stack two
         s2.pop(); // And remove the value from stack two
      }
      s2.push(temp_item); // Add the swapped value to stack 2
   }

}
