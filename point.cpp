#include <iostream>
#include "point.h"
#include "windows.h"
using namespace std;

int Time::add_second(int Seconds){
			Seconds++;
			return Seconds;
		}
		
		
		
int Time::add_minutes(int Minutes){
			Minutes++;
			return Minutes;
		}


void Time::print(int interval_min, int interval_sec){
	int number_min;
	int number_sec;
	for(int j = 1; j <= interval_min; j++){
			if(j == interval_min){
				for(int i = 1; i < interval_sec; i++){
					number_sec++;
				}
			}
		for(int i = 0; i < 60; i++){
			number_sec++;
			if(number_sec == 60){
				number_min++;
				number_sec = 0;
			}
			cout << number_min << ":" << number_sec << endl;
			Sleep(1000);
		}
	}
}

