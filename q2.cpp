#include<iostream>
#include<string>
using namespace std;

string getDay(int dayNumber){
	if(dayNumber == 1)
	return"Monday";
	
	else if (dayNumber == 2)
	return "Tuesday";
	
	else if (dayNumber == 3)
	return "Wednesday";
	
	else if (dayNumber == 4)
	return "Thursday";
	
	else if (dayNumber == 5)
	return "Friday";
	
	else if (dayNumber == 6)
	return "Saturday";
	
	else 
	return "Sunday";
	
}

void Temperature(){
	int temp, highest=0;
	string day,  highestDay = " ";
	
	for(int i=1; i<=7; i++){
		
		day=getDay(i);
		
		cout << "Enter temperature for " << day << "(Celsius): ";
		cin >> temp;
		
		if(temp>highest){
			
			highest = temp;
			highestDay = day;
		}
		
		else if (temp == highest){
			highestDay = highestDay + ","+day;
		}
	}
	
	cout << "The highest temperature is "<< highest << " on " << highestDay;
}

int main()
{
		
	Temperature();
		
	return 0;
}
