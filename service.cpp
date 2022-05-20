// student id : IT21195402
// Name : Gunathilaka D.J.V.
// MLB_01.01_06
// Malabe_weekdays
#include<string.h>
#include"order.h"
#include "service.h"

service::service()
{
	s_id = 0;
	price = 0;
	strcpy(name, "");
	strcpy(discription, "");
}

service::service(int ss_id, int sprice, const char sname[20], const char sdiscription[40])
{
	s_id = ss_id;
	price = sprice;
	strcpy(name, sname);
	strcpy(discription, sdiscription);
}

void service::display()
{
}

service::~service()
{
}


