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
float calculateIncome(int &classASales,int  &classBSales, int &classCSales);

/*
   This is the prototype for the input prompt for Class A seating

*/

// prototype for input of class seating ticket sales
int getClassTicketSales();



/*
   This is the prototype that will print income
   generated from Class A, B, and C ticket sales
*/

void printIncomeFromSales(float &income);


// Entry point for the application
int main(){
   int   classAIncome {0},
         classBIncome {0},
         classCIncome {0};
   float totalIncome  {0};

   title();

   askForClassATicketSales();
   classAIncome = { getClassTicketSales() };

   askForClassBTicketSales();
   classBIncome = {getClassTicketSales()};

   askForClassCTicketSales();
   classCIncome = {getClassTicketSales()};

   totalIncome = {calculateIncome(classAIncome,classBIncome,classCIncome)};

   printIncomeFromSales(totalIncome);

   return 0;


}

// print title of app
void title(){
   std::cout << "*********************Welcome to the Stadium Seating app************************\n";
}


// Definition for askForClassATicketSales function
void askForClassATicketSales(){
   std::cout << "Please enter the number of tickets sold for Class A seats: ";
}

// print asking text for class b ticket sales
void askForClassBTicketSales(){
   std::cout << "Please enter the number of tickets sold for Class B seats: ";
}

// print asking text for class c ticket sales
void askForClassCTicketSales(){
   std::cout << "Please enter the number of tickets sold for Class C seats: ";
}

// prompt for the class a ticket sales
int getClassTicketSales(){
   int tickets {0};
   std::cin >> tickets;
   std::cout << std::endl;
   return tickets;
}




// Calculates the income generated from Class A,B,and C 
float calculateIncome(int &classASales,int &classBSales, int &classCSales){
   // Prices for each class of seats
   const float priceForA = 15.00f;
   const float priceForB = 12.00f;
   const float priceForC = 10.00f;

   // Generated income from class a,b, and c sales
   const float income = (priceForA * classASales) + 
                        (priceForB * classBSales) + 
                        (priceForC * classCSales);

   return income;
}

// Print the generated income for Class A, Class B, Class C seating sales
void printIncomeFromSales(float &income){
   std::cout << "Generated income from Class A,B, and C seating sales: " 
             << std::setprecision(2)
             << std::fixed
             << income
             << std::endl;
}
