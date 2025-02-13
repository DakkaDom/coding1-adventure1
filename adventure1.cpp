// Dominic Borboa, HW Week 3, Coding 1
// 02/06/2025

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	//welcome the player
	cout << "Hello player! Ready for adventure?\n";
	string input;
	cin >> input;

	if (input == "yes") {
		cout << "In front of you is a Goblin Warrior! What do you do?\n";
		string input;
		cin >> input;
		if (input == "attack")
			cout << "You deal " << (rand() % 4) << " damage!\n";
		if (input == "block")
			cout << "You ready yourself to block the Goblin Warrior's attack!\n";
		cout << "The Goblin Warrior strikes but you managed to block them in time!\n";
		if (input == "wait")
			cout << "You watch the Goblin Warrior carefully.\n";
		cout << "The Goblin Warrior attacks! You take " << (rand() % 4) << " damage!\n";
	}
	//set up the game
	int Health = 10;
	int attack = (rand() % 4);
	int block = (rand() % 4);
	int turns = 0;
	//seed the random number generator
	//start the loop
	//add 1 to turns
	while (Health > 0) {
		turns += 1;
	}
	
	//start the encounter
	//randomly generate numbers for attack(range = 0 - 4) and block(range = 0 - 4)
	//if block is greater or equal to attack, successful block
	//otherwise, subtract attack value from health.
	//ask the player if they would like to keep adventuring. if they don't, break out of the loop.
	//keep looping while health is greater than zero and fewer than 4 turns have happened

	//if health is greater than 0, congratulate player
	//otherwise, tell the player they're dead.
}
	