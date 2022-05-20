// student id : IT21195402
// Name : Gunathilaka D.J.V.
// MLB_01.01_06
// Malabe_weekdays
#pragma once
#include<iostream>
#include"order.h"
class service
{
private:
	int s_id;
	int price;
	char name[20];
	char discription[40];

public:
	service();
	service(int ss_id, int sprice, const char sname[20], const char sdiscription[40]);
	void display();
	~service();

};



