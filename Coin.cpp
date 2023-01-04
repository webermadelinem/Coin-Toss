//*******************************************************************************************************//
//  Program Name: Coin.cpp, Lab 7
//  Author:  Madeline Weber
//  Description: This is a class file that randomly determines the side of the coin that is facing up and 
//  initilazies the sideUp member accordingly. 
//*******************************************************************************************************//
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Coin{
	private:
		string sideUp;
	public:
		Coin(){ 						// default constructor with srand
			// declare local variables 
			int flip;
			
			// initialize random 
			srand( time(0));
			flip = rand() % 2;
			
			if ( flip == 0 )
				sideUp = "heads";
			else {
				sideUp = "tails";
			}
		}
		void toss(){
			// declare local variables
			int flip;
			flip = rand() % 2;
			
			if ( flip == 0 )
				sideUp = "heads";
			else {
				sideUp = "tails";
			}
		}
		string getSideUp(){
			return sideUp; 					// returns the value of the sideUp variable
		}
};
//****************************************************************************//
//  Function Name: main
//  Parameters: none
//  Returns: 0
//  Description: this is a test program that demonstrates the Coin class. 
//  It creates an instance of the class and siplays the side. Using a loop, 
//  it tosses the coin 20 times, displaying the side that is facing up. 
//  It counts how many times heads or tails is up, and displays it at the end. 
//****************************************************************************//

int main()
{
	// declare local avariabls
	Coin myObject; 
	int headCount, tailCount;
	string whichFace;
	
	// initalize variables
	headCount = 0;
	tailCount = 0;
	
	// display initial value of sideUp
	cout << "The initial value is: " << myObject.getSideUp() << endl;
	
	for ( int i = 0; i <= 20; i++ ) {
		myObject.toss();
		whichFace = myObject.getSideUp();
		
		// compare for the count
		if ( whichFace.compare("heads") == 0 ){
			headCount++;
		}
		else{
			tailCount++; 
		}
		
		cout << "The flip is " << whichFace << endl;	
	}	// end for loop
	
	cout << "The number of times the coin landed on heads was: " << headCount << ".\n";
	cout << "The number of times the coin landed on tails was: " << tailCount << ".\n";
	
	return 0;
}
