#include <fstream>
#include <string>
#include <vector>
#include "person.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

vector<string> UniversalNames = {"Bryce","Queena", "Jerry", "Kelly", "Amanda", "Jared", "Amy", "Eugenia", "Zach", "Clifton",
 "Batman", "Sasha", "Chris", "Cathrine", "Marvin", "Brandon", "Molly", "Hanna", "CJ", "Sarah", "Robin", "Jabina", "Sam", "Talia", "Professor Oak",
 "Moana", "Mona", "Max", "Joe", "Gay Joe", "Brianna", "James", "Lucina", "Lucille", "Lucifer", "Lucy", "Loosey Goosey", "Hermoine", "Tony Stark",
"Papa Smurf", "Dick", "Alice", "Mad Hatter", "Patricia", "Justin", "Ash Ketchup", "Mia Khalifa", "Charlie Puth", "Niki", "Wolverine", "God", "Jesus"
"Jose", "Marnie", "Barney", "Jake", "Blue Teletubby", "Old Man Jenkins", "Cookie Monster", "Jennifer", "Daniel", "Clarisse", "Matthew", "Johnnathan",
"Big Dick Nick", "Big Saint Nick", "Pickle Rick", "Santa Claus", "Paul", "Genji", "Hanzo", "Shrek", "Tommy", "Keanu", "Jerry", "Perry Jerry", "PJ",
"Alison", "Roberta", "Ramona", "Bob", "Bobert", "Sandra", "Harry", "Clyde", "Butters", "Mr. Butterly", "McLovin", "Seth Rogen", "Gerard", "Brock"};

vector<string> UniversalQuals= {"Annoying","Arrogant", "Articulate","Athletic","Awkward", "Boastful","Bold", "Bossy", "Brave",
"Bright",
"Busy",
"Calm",
"Careful",
"Careless",
"Caring",
"Cheerful",
"Clever",
"Clumsy",
"Creative",
"Curious",
"Dainty",
"Demanding",
"Dreamer",
"Embarrassed",
"Energetic",
"Fancy",
"Friendly",
"Funny",
"Handsome",                       
"Humble",
"Imaginative",
"Impulsive",
"Kind",
"Knowledgeable",
"Merry",
"Mischievous",
"Obnoxious",
"Outgoing",
"Pretty",
"Quiet",
"Rude",
"Sad",
"Short",
"Shy",
"Silly",
"Tall",
"Ugly",
"Witty"
"Stinky"
"Smelly"
"Fat"
"Obese"
"Ugly"
"Disturbing"};

vector<string> uniGenders = {"male", "female", "cat"};

vector<string> universalDiscritpors = {"wearing a penguin hat", "eating a churro", "calling their ex girlfriend", "in stripper boots", "had chocolate on their face", "looking like a surfer", "having really big eyes",
"carrying a turtle", "eating a popsicle", "brewing a potion", "throwing money", "had a gold tooth", "cooking a pancake", "speaking korean", "taping their friend", "drinking redbull", "sucking a dick", "giving to charity",
"farting a song from the hit musical Hamilton", "littering", "cooking chicken nuggets", "watching Shark Tank", "watching porn", "watching Shark Tank porn", "choking the chicken",
"falling in love with a ghost", "bartering with God", "murdering an elf", "selling their soul to the devil", "swallowing swords", "juggling 2 and a half balls", "eating carrots", "belching the Alphabet",
"applying to colleges", "procrastinating their homework", "wearing the fresh skin of a muppet", "kissing Lady Gaga", "poaching rare animals", "riding a dinosaur", "giving birth", "stealing your man", "playing Tetris",
"making love to your sweet mother", "painting a portrait", "playing Stack Cup"};



//member functions
person::person(){
	name = "NULL";
	age = 0;
	gender = "NULL";

}

person::person(int discriptorNumb, int qualitiesNumb){
	srand (time(NULL));
	name =  UniversalNames[rand() % UniversalNames.size()];
	age =  (rand() % 4) + 18;
	gender =  uniGenders[rand() % uniGenders.size()];

	for (unsigned int i = 0; i < (qualitiesNumb); ++i)
	{
		qualities.push_back(UniversalQuals[rand() % UniversalQuals.size()]);
	}

	for (int i = 0; i < (discriptorNumb); ++i)
	{
		discriptor.push_back(universalDiscritpors[rand() % universalDiscritpors.size()]);
	}


}



string person::rememberName(){
	return name;
}

vector<string> person::RemeberDiscriptors(){
	return discriptor;
}

vector<string> person::RememberQualities(){
	return qualities;
}


string person::remeberGender(){
	return gender;
}
