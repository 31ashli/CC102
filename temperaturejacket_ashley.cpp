#include <iostream>

using namespace std;

int main()
{
	char answer;
	cout << "Is the temperature is less than 32 degrees? [y/n]: ";
	cin >> answer;
	if (answer == 'y') {
		cout << "Bring a heavy jacket.";
		cin >> answer;
		}
		else if (answer == 'n') {
			cout << "no jacket at all.";
			cin >> answer;
			}
	cout << "Is the temperature is between 32 and 50 degrees? [y/n]: ";
	cin >> answer;
	if (answer == 'y') {
		cout << "Bring a light jacket.";
		cin >> answer;
		}
		else if (answer == 'n') {
			cout << "no jacket at all.";
			cin >> answer;
			}
	cout << "Is the temperature is greater than 50 degrees? [y/n]: ";
	cin >> answer;
	if (answer == 'y') {
		cout << "No need to bring any jacket.";
		cin >> answer;
		}
			
	return 0;
}