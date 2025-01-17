#include "includes/Smalltalk_American.h"
#include "includes/Smalltalk.h"
#include "includes/constants.h"

Smalltalk_American::Smalltalk_American(int iPerson) : Smalltalk(AMERICAN, iPerson)
{
	this->iPerson = iPerson;

	populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson) : Smalltalk(myNationality, iPerson)
{
	this->iPerson = iPerson;

	populatePhrases();
}

Smalltalk_American::~Smalltalk_American()
{

}

void Smalltalk_American::populatePhrases()
{
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}
