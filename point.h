#include <iostream>
#include "windows.h"
using namespace std;

class Time{                                     //Создали класс Time
	public:
		int Minutes;							
		int Seconds;
		int add_second(int Seconds);
		int add_minutes(int Minutes);
		void print(int Minutes, int Seconds);
		
		Time(){
			Minutes = 0;
			Seconds = 0;
		}
		~Time(){};
};

