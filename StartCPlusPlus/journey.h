#include <string>

using namespace std;

class Journey {
private:
	int duration; // s
	int speed; // m/s 
public:
	Journey();
	Journey(int duration, int speed);
	~Journey();
	void setDuration(int duration);
	void setSpeed(int speed);
	int getDuration() const;
	int getSpeed() const;
	int getDistance() const;
	string getInfo() const;
};
