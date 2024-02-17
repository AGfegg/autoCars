/*
//Programmer: Aliya Feggins
//course CSC1720 Section 2
//Date: march 3, 2023
//Path: /home/students/afeggins/csc1720/labs/lab64/auto.h
//description: USing class and derived classes to call and update a dash for a hybrid car. 
// help recieved: professor dalton and professor titus
// compile g++ auto.h
//execute: ./a.out

*/


#ifndef autotype_H
#define autotype_H

#include <iostream>

using namespace std;

class autoType
{
   private:
	double miles;
	double fuel;
	double mph;
	double maximum;	
   public:
	autoType();
	autoType(double m, double f, double mp, double max);

	double getValues();
	void setValues( double m, double f, double mp, double max);

	string createDash();
void drive(double m);

	double getCapacity();	
	void setCapacity(double max);

        double getOdometer();
	void setOdometer(double m);

	double getFuelLevel();
	void setFuelLevel(double f);

	double getFuelEfficiancy();
	void setFuelEfficiancyLevel(double mp);

	
};
#endif
