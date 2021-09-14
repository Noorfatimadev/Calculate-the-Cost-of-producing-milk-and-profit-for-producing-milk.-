#include<iostream>
using namespace std;
int main ()
{


double milk_produced, cartons, totalcost, totalprofit;
 

cout << "Enter the total number of milk produced in the morning: ";
cin >> milk_produced;

cartons = milk_produced / 3.78;
cout << "The total number of liters = " <<milk_produced << endl;

totalcost = milk_produced * 0.038;
cout<< "Total cost = $"<< totalcost << endl;

totalprofit = (cartons) * 0.27;
 cout<<"Total profit = $" << totalprofit;



return 0;
}
