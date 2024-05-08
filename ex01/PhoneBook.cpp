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

	do
	{
		std::cout << "Enter first name: ";
		if (!(std::cin >> firstName))
			exit(1);
	} while (!isaString(firstName));
	newContact.setFirstName(firstName);
	do
	{
		std::cout << "Enter last name: ";
		if (!(std::cin >> lastName))
			exit(1);
	} while (!isaString(lastName));
	newContact.setLastName(lastName);
	do
	{
		std::cout << "Enter nickname: ";
		if (!(std::cin >> nickname))
			exit(1);
	} while (!isaNick(nickname));
	newContact.setNickname(nickname);
	do
	{
		std::cout << "Enter phone number: ";
		if (!(std::cin >> phoneNumber))
			exit(1);
	} while (!isaPnumber(phoneNumber));
	newContact.setPhoneNumber(phoneNumber);
	do
	{
		std::cout << "Enter darkest secret: ";
		if (!(std::cin >> darkestSecret))
			exit(1);
	} while (!isaString(darkestSecret));
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
	std::string index;
	std::cout << "Search contact" << std::endl;
	printTable(contacts);
	while (true)
	{
		do 
		{
			std::cout << "Enter index: ";
			if (!(std::cin >> index))
				exit(1);
			
		}
		while (index.atoi() < 0 || index >= getnbrContacts());
		printContact(index);
		break;
	}
	return ;
}

void PhoneBook::printTable(Contact *contact)
{
	(void)contact;
	std::string firstName;
	std::string lastName;
	std::string nickName;

	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	for (int i = 0; i < this->nbrContacts; i++)
	{
		firstName = this->contacts[i].getFirstName();
		lastName = this->contacts[i].getLastName();
		nickName = this->contacts[i].getNickname();
		std::cout << "|         " << i << "|"; 
		printMember(firstName);
		printMember(lastName);
		printMember(nickName);
		std::cout << std::endl;	
	}
	
	return ;
}

void PhoneBook::printMember(std::string member)
{
	int j	= 0;;
	while (member[j])
			j++;
		if (j > 10)
			member = member.substr(0, 9) + ".";
		while(j++ < 10)
			std::cout << " ";
		std::cout << member << "|";
	return ;
}

bool PhoneBook::isaString(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (!std::isalpha(str[i]))
		{
			std::cout << "ONLY CHARACTERS ALLOWED!!" << std::endl;
			return (false);
		}
		i++;
	}
	return (true);
}

bool PhoneBook::isaPnumber(std::string str)
{
	int i = 1;

	if (str[0] != '+' && !std::isdigit(str[0]))
	{
		std::cout << "Invalid input" << std::endl;
		return (false);
	}
	while (str[i])
	{
		if (!std::isdigit(str[i]))
		{
			std::cout << "ONLY DIGITS ALLOWED!!" << std::endl;
			return (false);
		}
		i++;
	}
	return (true);
}

bool PhoneBook::isaNick(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (!std::isalnum(str[i]))
		{
			std::cout << "ONLY DIGITS and CHARACTERS ALLOWED!!" << std::endl;
			return (false);
		}
		i++;
	}
	return (true);
}

int PhoneBook::getnbrContacts(void) const
{
	return (this->nbrContacts);
}

int PhoneBook::gettoReplace(void) const
{
	return (this->toReplace);
}

void PhoneBook::printContact(int index)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	firstName = this->contacts[index].getFirstName();
	lastName = this->contacts[index].getLastName();
	nickname = this->contacts[index].getNickname();
	phoneNumber = this->contacts[index].getPhoneNumber();
	darkestSecret = this->contacts[index].getDarkestSecret();
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
	return ;
}