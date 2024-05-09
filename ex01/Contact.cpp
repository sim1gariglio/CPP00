#include "Contact.hpp"

Contact::Contact(void)
{
	//std::cout << "Contact created" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	//std::cout << "Contact destroyed" << std::endl;
	return ;
}

void Contact::setIndex(int index)
{
	this->_index = index;
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

int Contact::getIndex(void) const
{
	return (this->_index);
}

std::string	Contact::getFirstName(void) const
{
	return (this->firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->lastName);
}

std::string Contact::getNickname(void) const
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->darkestSecret);
}
