// student id : IT21195402
// Name : Gunathilaka D.J.V.
// MLB_01.01_06
// Malabe_weekdays
#include "user.h"
class customer : public user
{
	private:

		int RgId;
		char telep_no[20];

	public:

		customer(){};
		customer(const char uName[], string uDob[], const char uGender[],int id, const char telepNum[]) : user(uName, uDob, uGender){};
		void setWriteReview(){};
		void setMakePayment(){};
		int getRegUserId(){};
		~customer(){};

};

