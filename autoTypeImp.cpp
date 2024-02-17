/*
//Programmer: Aliya Feggins
//course CSC1720 Section 2
//Date: march 3, 2023
//Path: /home/students/afeggins/csc1720/labs/lab64/autoTypeImp.cpp
//description: USing class and derived classes to call and update a dash for a hybrid car. 
// help recieved: professor dalton and professor titus
// compile g++ autoMain.cpp autoTypeImp.cpp hybridTypeImp.cpp
//execute: ./a.out

*/


#include "auto.h"


autoType::autoType()

{
miles= 0;
fuel=0;
mph=20;
maximum=0;
}

autoType::autoType( double m, double f, double mp,double max)
{
miles=m;
fuel=f;
mph=mp;
maximum=max;
}
void autoType:: setValues(double m, double f, double mp, double max)
{
miles=m;
fuel=f;
mph=mp;
maximum=max;

}

void autoType:: setCapacity(double max)
{
maximum=max;
}

double autoType:: getCapacity()
{

return maximum;
}	


double autoType::getOdometer()
{return miles;
}
void autoType::setOdometer(double m)
{miles=m;}

double autoType:: getFuelLevel()
{return fuel;}
void autoType:: setFuelLevel(double f)
{fuel = f;}

double autoType::getFuelEfficiancy()
{return mph;}
void autoType::setFuelEfficiancyLevel(double mp)
{mph=mp;}

string  autoType::createDash()
{
string odemeter= std:: to_string(miles);
string level=std:: to_string(fuel);
string efficient=std:: to_string(mph);
string max=std::to_string(maximum);
string dash;
dash =  "odometer = " + odemeter + " miles , fuel level = " + level + " gallons , efficiancy = " + efficient + " mpg" + " maximum full " + max;


return dash; 
}

void  autoType::drive( double m)
{


string update;
int g =(m/mph);

if(fuel>=g)
{
 fuel= fuel -g;
miles=miles+m;


}
else if(fuel<g)
{


int x;

x=(fuel*mph);

fuel=fuel-(x/mph);

miles= miles+x;







}
//return ;

}

