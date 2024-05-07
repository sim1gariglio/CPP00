# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : nbrContacts(0), toReplace(0)
{
	std::cout << "PhoneBook created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}

void	PhoneBook::addContact(void)
{
	Contact newContact;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Enter first name: ";
	if (!(std::cin >> firstName))
		exit(1);
	newContact.setFirstName(firstName);
	std::cout << "Enter last name: ";
	if (!(std::cin >> lastName))
		exit(1);
	newContact.setLastName(lastName);
	std::cout << "Enter nickname: ";
	if (!(std::cin >> nickname))
		exit(1);
	newContact.setNickname(nickname);
	std::cout << "Enter phone number: ";
	if (!(std::cin >> phoneNumber))
		exit(1);
	newContact.setPhoneNumber(phoneNumber);
	std::cout << "Enter darkest secret: ";
	if (!(std::cin >> darkestSecret))
		exit(1);
	newContact.setDarkestSecret(darkestSecret);
	if (this->nbrContacts < 8)
	{
		this->contacts[this->nbrContacts] = newContact;
		this->nbrContacts++;
		newContact.setIndex(this->nbrContacts);
	}
	else
	{
		this->contacts[this->toReplace] = newContact;
		this->toReplace = (this->toReplace + 1) % 8;	
	}
	return ;
}
void PhoneBook::searchContact(void)
{
	std::cout << "Search contact" << std::endl;
	printContact(contacts[0]);
	return ;
}

void PhoneBook::printContact(Contact contact)
{
	std::cout << "     Index | First name | Last name  | Nickname " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	for (int i = 0; i < this->nbrContacts; i++)
	{
		std::cout << this->contacts[i].getIndex() << " | ";
		std::cout << this->contacts[i].getFirstName() << " | ";
		std::cout << this->contacts[i].getLastName() << " | ";
		std::cout << this->contacts[i].getNickname() << std::endl;
		// std::cout << this->contacts[i].getPhoneNumber() << std::endl;
		// std::cout << this->contacts[i].getDarkestSecret() << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
	}
	
	return ;
}