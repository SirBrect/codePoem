#include <fstream>
#include <vector>
#include <string>
#include "person.h"
#include <stdlib.h>     /* srand, rand */
#include<tuple> // for tuple 
#include <list> 
#include <iterator> 
#include <iostream>
#include <time.h>       /* time */
#include <cstring>
using namespace std;

//to run, up arrow on keyboard in terminal and enter
//for a reply, enter a one word respones


void party(string bestFriend,list<tuple<char*,person>>& myMemory){
	srand (time(NULL));
	int bestFriendPopularity = (rand() % 7 +1);
	std::cout  << bestFriendPopularity << std::endl;
	string response;
	for (int introduce = 0;  introduce < bestFriendPopularity; ++introduce)
	{
		person coolperson(rand() % 3+1,rand() % 3+1);
		std::cout << bestFriend << ": hey! meet " << coolperson.rememberName() << std::endl;
		char* name = new char[coolperson.rememberName().size()+1];
		strcpy(name, coolperson.rememberName().c_str()); 
		delete [] name; //deletes
		std::cout << *name << std::endl;
		std::cout << "my response: ";
		std::cin >> response;
		std::cout << response << std::endl;
		std::cout << "\n" << "you notice that they are";
		for (int i = 0; i < coolperson.RememberQualities().size(); ++i)
		{
			std::cout << ", " <<  coolperson.RememberQualities()[i];
		}
		std::cout << "." << std::endl;
		std::cout << "they seem to also be";
		for (int i = 0; i < coolperson.RemeberDiscriptors().size(); ++i)
		{
			std::cout << " " <<  coolperson.RemeberDiscriptors()[i];
			if (i < coolperson.RemeberDiscriptors().size() - 1)
			{
				std::cout << " while";
			}
		}
		std::cout << ". \n" << std::endl;

		std::cout << bestFriend << ": *to the next person we go* \n \n" << std::endl;
		tuple <char*,person> newFriend = make_tuple(name,coolperson);
		myMemory.push_back(newFriend); 
	}
	std:cout << "*later on in the night* \n \n \n \n \n " << std::endl;
	for (list<tuple<char*,person>>::iterator it=myMemory.begin(); it != myMemory.end(); ++it){
		std::cout << "oh hey!" << std::endl;
		std::cout << "*it's: " << *get<0>(*it) << "*" << std::endl;
		std::cout << "*fuck what's their name.....*" << std::endl;
		std::cout << "*they were"; 
		for (int i = 0; i < get<1>(*it).RememberQualities().size(); ++i)
		{
			std::cout << ", " << get<1>(*it).RememberQualities()[i];
		}
		std::cout << "*\n";
		std::cout << "* and they were";
		for (int i = 0; i < get<1>(*it).RemeberDiscriptors().size(); ++i)
		{
			std::cout << ", " << get<1>(*it).RemeberDiscriptors()[i];
		}
		std::cout << "*\n";
		std::cout << "their name was.....:" << std::endl;
		std::cin >> response;
		if (response == get<1>(*it).rememberName())
		{
			std::cout << "*you made a new friend!* \n \n" << std::endl;
		}
		else{
			std::cout << "*runs awayyyyy* \n \n \n" << std::endl;
		}

	}
  
}

int main(int argc, char const *argv[])
{

	list<tuple<char*,person>> myMemory;
	string bestFriend = "shawn";
	bool uber = true;
	if (uber)
	{
		party(bestFriend,myMemory);
	}
	return 0;
}
