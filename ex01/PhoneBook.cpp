# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}

bool PhoneBook::addContact(void)
{
	Contact newContact;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Enter first name: ";
	std::cin >> firstName;
	newContact.setFirstName(firstName);
	std::cout << "Enter last name: ";
	std::cin >> lastName;
	newContact.setLastName(lastName);
	std::cout << "Enter nickname: ";
	std::cin >> nickname;
	newContact.setNickname(nickname);
	std::cout << "Enter phone number: ";
	std::cin >> phoneNumber;
	newContact.setPhoneNumber(phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::cin >> darkestSecret;
	newContact.setDarkestSecret(darkestSecret);
	return (true);
}
void PhoneBook::searchContact(void)
{
	std::cout << "Search contact" << std::endl;
	return ;
}

void PhoneBook::printContact(void)
{
	std::cout << "Print contact" << std::endl;
	return ;
}