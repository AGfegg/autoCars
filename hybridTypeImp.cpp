/*
//Programmer: Aliya Feggins
//course CSC1720 Section 2
//Date: march 3, 2023
//Path: /home/students/afeggins/csc1720/labs/lab64/hybridTypeImp.cpp
//description: USing class and derived classes to call and update a dash for a hybrid car. 
// help recieved: professor dalton and professor titus
// compile g++ autoMain.cpp autoTypeImp.cpp hybridTypeImp.cpp
//execute: ./a.out

*/


#include <iostream>
#include "hybrid.h"
#include "auto.h"
using namespace std;

//class hybridType : public autoType;

hybridType::hybridType()
 {  

 }

hybridType::hybridType(double m, double f, double mp, double max, double percent, double mpc)
 {
   charge= 0;
   mileCharge= 30;
 } 

void hybridType:: setChargeLevel(double percent)
 {
   charge= percent;
 }

double hybridType::getChargeLevel()
 {
   return charge;
 }


void hybridType::setChargeEfficiancy(double mpc)
 {
   mileCharge=mpc;
 }

double hybridType::getChargeEfficiancy()
 {
   return mileCharge;
 }


string  hybridType::hybridDash()
 {
   string gasDash= autoType::createDash();
   string efficientHybrid= std:: to_string(mileCharge);
   string battery=std:: to_string(charge);
   string dashHybrid;

   dashHybrid = gasDash + " Battery level = " + battery + " % , charge efficiency = " + efficientHybrid ;

   return dashHybrid;
 }

double  hybridType:: hybridDrive(double d/*, double percent, double mcp*/)

 {
  

   string updateDash;
   
   int miles = autoType::getOdometer();
   int maximum = autoType::getCapacity();
   int fuel = autoType::getFuelLevel();
   int mpg =  autoType::getFuelEfficiancy();

   int g=(d/mpg);
   int p =( d/mileCharge);

   if (d <0)
      { cout<<" "<<endl;
         cout<<d<<" miles, no distance travled, dash remains the same"<<endl;
      cout<<" "<<endl;
	}

else
{

if(charge<20)
electric=false;
if(electric==true)
{
    if (charge>=p)
      {
	//only electricity
	miles= miles+d;	
	autoType::setOdometer(miles);
	
	charge= charge -p; 
	
	updateDash=hybridDash();
	cout<<updateDash<<endl;
      }


   else if (charge<p )
      {
	//using gas and electricity
	int x=charge*mileCharge;

                int y=d-x;
                charge=charge-(x/mileCharge);

                g=(y/mpg);
	   if (fuel>g)
	    {
	       //use both;
 	      fuel=fuel-g;	
		miles=miles+d;		
	       autoType::setOdometer(miles);
	       autoType::setFuelLevel(fuel);
		int up=d/20;
                if (up>1)
                {
                  charge = charge+ (up*1);
                }

	       updateDash=hybridDash();
	       cout<<updateDash<<endl;

	    }
	else if (fuel<g)
	
	{
	  int gasOut=(fuel*mpg);
	  fuel=fuel-(gasOut/mpg);
	//autoType::drive(y);
	miles=miles+gasOut;
	setOdometer(miles);
	setFuelLevel(fuel);
	y=y-gasOut;

int up=d/20;
                if (up>1)
                {
                  charge = charge+ (up*1);
                }

updateDash=hybridDash();
cout<<updateDash<<endl;
cout<<"miles left to rive: "<<y<<endl;	
       }	
}
}
else if(electric==false)
{

autoType::drive(d);

		int up=d/20;
		if (up>1)
		{
		  charge = charge+ (up*1);
		}
            
   //use till run out
	   updateDash=hybridDash();
	cout<<updateDash<<endl;
if(charge>20)
{
electric=true;
}

}}      
return 0;
}
