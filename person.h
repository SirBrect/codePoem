#include <fstream>
#include <string>
#include <vector>
using namespace std;



class person
{
public:
	person();
	person(int discriptorNumb, int qualitiesNumb);


	string rememberName();
	vector<string> RemeberDiscriptors();
	vector<string> RememberQualities();
	string remeberGender();



private:
	string name;
	vector<string> discriptor;
	vector<string> qualities;
	int age;
	string gender;

	
};