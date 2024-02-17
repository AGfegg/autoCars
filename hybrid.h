/*
//Programmer: Aliya Feggins
//course CSC1720 Section 2
//Date: march 3, 2023
//Path: /home/students/afeggins/csc1720/labs/lab64/hybrid.h
//description: USing class and derived classes to call and update a dash for a hybrid car. 
// help recieved: professor dalton and professor titus
// compile g++ hybrid.h
//execute: ./a.out

*/


#ifndef hybridType_H
#define hybridType_H

#include "auto.h"

class hybridType: public autoType

{
   private:
	double charge;
	double mileCharge;
	bool electric=true;
public
   :
	hybridType();
	hybridType(double m, double f, double mp, double max, double percent, double mpc);
   
	 void setChargeLevel(double percent);
	 double getChargeLevel();

	void setChargeEfficiancy(double mpc);
	double getChargeEfficiancy();
	string hybridDash();
	double hybridDrive(double d);




};
#endif 
