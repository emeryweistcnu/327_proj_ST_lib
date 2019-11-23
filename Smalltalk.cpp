#include "includes/Smalltalk.h"
#include "includes/constants.h"

Smalltalk::Smalltalk(std::string myNationality, int iPerson)
{
	this->iPerson = iPerson;
	current_phrase = 0;
}

Smalltalk::~Smalltalk()
{

}

std::string Smalltalk::saySomething()
{
	std::string phrase = "nationality " + std::to_string(iPerson) + ":" + mySmallTalk.at(current_phrase % mySmallTalk.size());
	current_phrase++;
	return phrase;
}

std::string Smalltalk::getTime()
{
	if (pWatch.get() == 0) return I_DO_NOT_HAVE_A_WATCH;
	return pWatch.get()->getTime();
}

std::unique_ptr<Watch> Smalltalk::takeWatch()
{
	if (pWatch.get() != 0) return std::move(pWatch);
	std::unique_ptr<Watch> nullWatch;
	return nullWatch;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch)
{
	if (this->pWatch.get() != 0) return false;

	this->pWatch = std::move(pWatch);
	return true;
}
