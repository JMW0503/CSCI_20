/***********************************************************
Program Name: Crystal Ball
Program Author: Kyle NoCompile
Date Created: 9/13/2014
Program Description: 
	This program predicts the future...sort of. It asks
	the user to select what they would like to know about
	some part of their future and, based on that input,
	displays a prophetic message.
	
Modified Date:
Modified Description:
***********************************************************/

#include <iostream>
#include "Random.h"

using namespace std;

int main()
{
	// Declare the variables
	int questionChoice;
	int randomAnswer;

	// Asks which future category the user would like to be told about
	cout << "I will read your future. What would you like to know?" <<endl << endl;
	cout << "1. Who will I marry?" << endl;
	cout << "2. What kind of professional career will I have?" << endl;
	cout << "3. How long will I live?" << endl;
	
	// Read in the user's choice
	cin >> questionChoice;
	
	cout << endl;
	
	// Make sure the user chooses one of the valid options
	if (questionChoice > 1 || questionChoice > 3)
	{
		// Instantiate a Random object that can generate
		// random numbers between 1 and 5
		Random rand(1, 5);

		// Generate random answer between 1 and 5 
		randomAnswer = rand.getRandomNumber();  
	
		switch(questionChoice != false)
		{
			//Who will I marry answers
			case 1:
			
				switch(randomAnswer > 0)
				{
					case 1.0:
						cout<<"Marriage...you...that's pretty funny, but seriously, what do you want to know about your future?"<<endl;
						
					case 2.0:
						cout<<"How do I put this delicately...you die alone."<<endl;
						break;
					case 3.0:
						cout<<"It's less a question of who, and more a question of what."<<endl;
						
					case 4.0:
						cout<<"Anyone who asks you, if you're willing. Becoming a wedding minister nowadays is super easy."<<endl;
						break;
					default:
						cout<<"While the Doctor is quite a catch, I don't think you're Timelord marriage material."<<endl;
						break;
				}
				
				break;
				
			// What kind of professional career will I have answers
			case 2:
			
				switch(randomAnswer > 0)
				{
					case 1:
						cout<<"I'm not sure I'd call Walmart Greeter a career, per se."<<endl;
						break
					case 2:
						cout<<"A short one. You should have picked option 3."<<endl;
						break
					case 3:
						cout<<"The kind where you receive periodic monetary compensation for services rendered. I'm good, aren't I?"<<endl;
						break
					case 4
						cout<<"Professional career...not seeing a lot of that, but I'm getting some lucky lotto numbers...42,27,3,19,12...and our time is up."<<endl;
						break
					else
						cout<<"Looks like you'll have a great career as a psychic, replacing computer-based crystal balls...I mean dentist...definitely dentist."<<endl;
						break
				}
			
				break;
			
			// How long will I live answers
			default:
			
				case(randomAnswer > 0)
				{
					switch 1:
						cout>>"Long enough to actually see the last human stronghold fall to the Martian invaders."<<endl;
						
					switch 2:
						cout>>"I'm happy to report that you will live to see your great grandchildren be grossed-out by your wrinkly skin, old-person smell, and incessant wheezing at every family get-together."<<endl;
						break;
					switch 3
						cout>>"Provided you avoid the axe murderer currently hunting you, a very long time."<<endl;
						break;
					switch 4:
						cout>>"I give you another four months...followed by 50 or 60 years, tops."<<endl; 
						
					default:
						cout>>"If you eat right, don't smoke, and exercise regularly then you will be a much healthier corpse after the tragic seesaw accident in a couple years."<<endl; 
						break;
				}
			
				break;
		}
	}
	// Message to display if the user selects an invalid option
	default
	(
		cout<<"All you had to do was push 1, 2, or 3 and you managed to somehow mess that up..."<<endl
		cout<<"I see a lot failure in your future."<<endl
	)

	returned 0;
}
