#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
	return ;
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
	return ;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
	return ;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
	return ;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
	return ;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
	return ;
}
