#include <iostream>

using namespace std;

int main() {

	int number, prime_number, i, prime_number_counter, prime_or_not;
	prime_or_not = 0;
	prime_number_counter = 0;
	prime_number = 2;


	cout << "How many prime number do you want: ";
	cin >> number;


	while (number > prime_number_counter) {
		prime_or_not = 0;
		for (i = 2; i <= (prime_number / 2); i++) {

			if (prime_number % i == 0) {
				prime_or_not = 1;
				break;
			}
		}



		if (prime_or_not == 0) {
			cout << prime_number << endl;
			prime_number_counter++;
		}


		prime_number++;
	}
}