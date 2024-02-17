/*
//Programmer: Aliya Feggins
//course CSC1720 Section 2
//Date: march 3, 2023
//Path: /home/students/afeggins/csc1720/labs/lab64/autoMain.cpp
//description: USing class and derived classes to call and update a dash for a hybrid car. 
// help recieved: professor dalton and professor titus
// compile g++ autoMain.cpp autoTypeImp.cpp hybridTypeImp.cpp
//execute: ./a.out

*/

#include "auto.h"
#include "hybrid.h"

int main ()
{

//all electric car
hybridType car1;
cout<<"Test foro car one all electric"<<endl;

car1.setValues(1000, 5.0, 30, 12);
car1.setChargeLevel(50);
car1.setChargeEfficiancy(10);

double hybridDash=car1.hybridDrive(100);
cout<<" "<<endl;
cout<<"test for car 1 negative miles"<<endl;
hybridDash=car1.hybridDrive(-10);
cout<<" "<<endl;
//car in electric to gas
hybridType car2;
car2.setValues(1000, 5.0, 30, 12);
car2.setChargeLevel(50);
car2.setChargeEfficiancy(10);
cout<<"test for car 2 electric and gas arrive"<<endl;
hybridDash=car2.hybridDrive(600);
cout<<" "<<endl;
cout<<"test for car 2 run out of gas and charge"<<endl;
hybridDash=car2.hybridDrive(400);
cout<<" "<<endl;
//no battery
hybridType car3;
car3.setValues(1000, 5.0, 30, 12);
car3.setChargeLevel(10);
car3.setChargeEfficiancy(10);
cout<<"test for car 3 gas only"<<endl;
hybridDash=car3.hybridDrive(100);




return 0;
}
