#include <iostream>
#include "point.cpp"
#include "windows.h"
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	Time users_method;
	int interval_min;
	int interval_sec, add_second, add_interval_min, add_interval_sec;
	int n, min;
	do{
		cout << "1.Запустить таймер" << endl;
		cout << "2.Добавить секунды" << endl;
		cout << "3.Сравнить два интервала времени" << endl;
		cout << "4.Выход" << endl;
		cin >> n;
		switch(n){
			case 1: 
				cout << "Введите на сколько минут и секунд запустить таймер: " << endl;	
				cout << "Минуты: "; cin >> interval_min;
				cout << "Секунды: "; cin >> interval_sec;
				users_method.print(interval_min, interval_sec);
					break;
			case 2: "Введите количество секунд которое хотите добавить: "; cin >> add_second;
							min = (add_second + interval_sec)/60;
							if(min < 1){
								/*if(interval_sec + add_second > 60){
									interval_min++;
									interval_sec = interval_sec + add_second - 60;	
								}*/
								interval_sec = add_second + interval_sec;
								cout << interval_min << ":" << interval_sec << endl;
							}
							else{
								interval_min = interval_min + min;
								int sec = min * 60;
								sec = add_second + interval_sec - sec;
								cout << interval_min << ":" << sec << endl;
					}
					break;
			case 3: cout << "Введите новый интервал " << endl;
					cout << "Минуты: "; cin >> add_interval_min;
					cout << "Секунды: "; cin >> add_interval_sec;
					if(interval_min > add_interval_min){
						if(interval_sec > add_interval_sec){
							cout << "Первый интервал больше" << endl;
						}
						else if(interval_sec == add_interval_sec){
							cout << "Интервалы равны" << endl;
						}
						else{
							cout << "Первый инервал меньше" << endl;
						}
					}
					else if(interval_min <= add_interval_min){
						cout << "Первый интервал меньше или равен второму" << endl;
					}
					break;
		}
	}while(n != 4);
	return 0;
}
