#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
	srand(static_cast<unsigned int>(time(0)));
	// target rng
	int searchGridLowNumber = 1;
	int searchGridHighNumber = 64;
	int actualTargetLocation = rand() % 64 + 1;


	//number rng
	//int secretNumber = rand() % 64 + 1;
	//random number 1-100
	int tries = 0;
	int attemptLocateTarget = 0;
	cout << "\tWelcome to Guess My Number\n\n";

	do {
		//This is where the ai attempts to make a target guess
		cout << "\nThe real target location is at " << actualTargetLocation << endl;
		cout << "\nThe AI guesses the target is at location ";
		attemptLocateTarget = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		++tries;
		if (attemptLocateTarget > actualTargetLocation) {
			cout << "Too High!\n\n";
			searchGridHighNumber = attemptLocateTarget - 1;
		}
		else if (attemptLocateTarget < actualTargetLocation)
		{
			cout << "Too Low!\n\n";
			searchGridLowNumber = attemptLocateTarget + 1;
		}
		else {
			cout << "\nThat's It! The AI Got it in " << tries << " guesses!\n";
		}
	}
		while (attemptLocateTarget != actualTargetLocation);
		return 0;
		}
	
