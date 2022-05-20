// student id : IT21195402
// Name : Gunathilaka D.J.V.
// MLB_01.01_06
// Malabe_weekdays
#include "customer.h"
#include<iostream>
#include<cstring>
using namespace std;
customer::customer()
{
	RgId = 0;
	strcpy(telep_no, "");
}
customer::customer(const char uName[], string uDob[], const char uGender[], int id, const char telepNum[]) : user(uName, uDob, uGender)
{
	RgId = id;
	strcpy(telep_no, telepNum);
}
void customer::setWriteReview()
{
}
void customer::setMakePayment()
{
}
int customer::getRegUserId()
{
	return RgId;
}
customer::~customer()
{
};
