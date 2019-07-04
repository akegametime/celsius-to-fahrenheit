#include <iostream> 
using namespace std;

int main ()
{
	float Celsius; 
	float Fahrenheit = 32.00;
	cout<<"Enter Celsius temperature : ";
	cin>>Celsius;
	cout<<"Fahrenheit = "<<Celsius*1.80+Fahrenheit<<endl;
	cout<<"Now weather in Thailand is"<<(Celsius*1.80+Fahrenheit>=70? " HOT " : " COOL ")<<endl;

	
	return(0);
}

	
