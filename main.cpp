/*
---------------------------------------------------
Name: Bianca Murillo
Student ID: 
COP 1334 - Introduction to C++ Programming
Fall 2023 - T 5:30 PM - 8:50 PM
Assignment # 1
Plagiarism Statement
I certify that this assignment is my own work and that I have not
copied in part or whole or otherwise plagiarized the work of other
students, persons, Generative Pre-trained Generators (GPTs) or any other AI
tools. I understand that students involved in academic dishonesty will face
disciplinary sanctions in accordance with the College's Student Rights
and Responsibilities Handbook (https://www.mdc.edu/rightsandresponsibilities)
01234567890123456789012345678901234567890123456789012345678901234567890123456789
----------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // storage
  // cost per Square foot
  float length, width, squareFeet, totalMaterialCost, customerPrice, profit;
  const int installCost = 25;
  const int materialCost = 10;

  // input
  cout << "Welcome to Cruz Solar Solutions, Inc. Cost estimator!"<< endl;
  cout << "Please enter length of available rooftop space"<< endl;
  cin >> length;
  cout << "Please enter width of available rooftop space"<< endl;
  cin >> width;

  // procressing
  cout << "Calculating......."<< endl;
  squareFeet = length * width;
  totalMaterialCost = squareFeet * materialCost;
  customerPrice = squareFeet * installCost;
  profit = customerPrice - totalMaterialCost;

  // output
  cout << "Total Area for Solar Panels: " << squareFeet<<" square feet" << endl;
  cout << showpoint;
  cout << setprecision(2);
  cout << fixed;
  cout << "Material Cost: $" << totalMaterialCost << endl;
  cout << "Customer Price: $" << customerPrice << endl;
  cout << "Profit: $" << profit << endl;
  cout << "Thank You for using Cruz solar Solutions, Inc. Cost Estimator!";
}