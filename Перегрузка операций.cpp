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
		cout << "1.��������� ������" << endl;
		cout << "2.�������� �������" << endl;
		cout << "3.�������� ��� ��������� �������" << endl;
		cout << "4.�����" << endl;
		cin >> n;
		switch(n){
			case 1: 
				cout << "������� �� ������� ����� � ������ ��������� ������: " << endl;	
				cout << "������: "; cin >> interval_min;
				cout << "�������: "; cin >> interval_sec;
				users_method.print(interval_min, interval_sec);
					break;
			case 2: "������� ���������� ������ ������� ������ ��������: "; cin >> add_second;
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
			case 3: cout << "������� ����� �������� " << endl;
					cout << "������: "; cin >> add_interval_min;
					cout << "�������: "; cin >> add_interval_sec;
					if(interval_min > add_interval_min){
						if(interval_sec > add_interval_sec){
							cout << "������ �������� ������" << endl;
						}
						else if(interval_sec == add_interval_sec){
							cout << "��������� �����" << endl;
						}
						else{
							cout << "������ ������� ������" << endl;
						}
					}
					else if(interval_min <= add_interval_min){
						cout << "������ �������� ������ ��� ����� �������" << endl;
					}
					break;
		}
	}while(n != 4);
	return 0;
}
