// Author: Stephen Aranda
// Date: 8/11/2022
// File Name: stadium-seating.cpp
// Description: A simple program that displays the sales
// earned from different classes of seats at a softball game

#include<iostream>
#include<iomanip>

// This is the prototype for the title function--this will print title app on-screen
void title();

/*
  This is the prototype for the Class A ask text.
  This will print the text asking the user to enter the number of
  tickets sold for Class A seating.
*/ 
void askForClassATicketSales();

/*
  This is the prototype for the Class B ask text.
  This will print the text asking the user to enter the number of
  tickets sold for Class B seating
*/

void askForClassBTicketSales();

/*
  This is the prototype for the Class C ask text.
  This will print the text asking the user to enter the number of 
  tickets sold for Class C seating
*/

void askForClassCTicketSales();


/*
   This is the prototype that will calculate the amount of
   income generated from the ticket sales of
   Class A, Class B, and Class C seating
*/
float calculateIncome(float classASales, float classBSales, float classCSales);

/*
   This is the prototype for the input prompt for Class A seating

*/

float getClassATicketSales();

/*
   This is the prototype for the input prompt for Class B seating
*/

float getClassBTicketSales();

/*
   This is the prototype for the input prompt for Class C seating
*/

float getClassCTicketSales();

/*
   This is the prototype that will print income
   generated from Class A, B, and C ticket sales
*/

void printIncomeFromSales(float income);


// Entry point for the application
int main(){

}


// Definition for askForClassATicketSales function
void askForClassATicketSales(){
   std::cout << "Please enter the number of tickets sold for Class A seats: ";
}
