#include <iostream>
using namespace std;

string getDays(int dayNumber){ // Retrieves the name of the day by number
	switch (dayNumber){
		case 1:
			return "Monday";
		case 2:
			return "Tuesday";
		case 3:
			return "Wednesday";
		case 4:
			return "Thursday";
		case 5:
			return "Friday";
		case 6:
			return "Saturday";
		case 7:
			return "Sunday";
		default:
			cout << "Invalid Day Number!";
			break;
	}
}

void compareTemperature(){
	double curTemp, highTemp;
	string curDay, highDays;
	
	for (int i = 1; i <= 7; i++){ // Reads and compares the highest temperature and loops 7 times (per day)
		curDay = getDays(i);
		
		cout << "Enter temperature for " << curDay << " (Celsius): ";
		cin >> curTemp;
		
		if (curTemp > highTemp){
			highTemp = curTemp;
			highDays = curDay;
		} else if (curTemp == highTemp) {
			highDays = highDays + ", " + curDay;
		}
	}
	
	cout << endl << "The highest temperature is " << highTemp << " on " << highDays << endl;
}

int main(){
	compareTemperature();
	
	return 0;
}
