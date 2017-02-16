#ifndef FRIEND_CLASS
#define FRIEND_CLASS

#include <string>
using namespace std;

class Friend {
	private:
		string name;
		int yearsOld;


	public:
		Friend();
		Friend(string name);

		string getName();
		int getYearsOld();

		void setName(string name);
		void setYearsOld(int yearsOld);

		string toString();
};

#endif
