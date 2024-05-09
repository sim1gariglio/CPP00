# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : nbrContacts(0)
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
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	do
	{
		std::cout << "Enter first name: ";
		if(!getline(std::cin, firstName))
			std::exit(1);
	} while (!isaString(firstName));
	newContact.setFirstName(firstName);
	do
	{
		std::cout << "Enter last name: ";
		if(!getline(std::cin, lastName))
			std::exit(1);
	} while (!isaString(lastName));
	newContact.setLastName(lastName);
	do
	{
		std::cout << "Enter nickname: ";
		if(!getline(std::cin, nickName))
			std::exit(1);
	} while (!isaNick(nickName));
	newContact.setNickname(nickName);
	do
	{
		std::cout << "Enter phone number: ";
		if(!getline(std::cin, phoneNumber))
			std::exit(1);
	} while (!isaPnumber(phoneNumber));
	newContact.setPhoneNumber(phoneNumber);
	do
	{
		std::cout << "Enter darkest secret: ";
		if(!getline(std::cin, darkestSecret))
			std::exit(1);
	} while (!isaSentence(darkestSecret));
	newContact.setDarkestSecret(darkestSecret);
	if (this->nbrContacts < 8)
	{
		this->contacts[this->nbrContacts] = newContact;
		this->nbrContacts++;
		newContact.setIndex(this->nbrContacts);
	}
	else
	{
		for(int i = 0; i < 7; i++)
			this->contacts[i] = this->contacts[(i + 1)]; 
		this->contacts[7] = newContact;	
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
		std::cout << "Enter index: ";
		if(!getline(std::cin, index))
			std::exit(1);
		if (index[0] < '0' || index[0] >= getnbrContacts() + '0' || index[1] != '\0')
			std::cout << "Invalid index" << std::endl;
		else
		{
			printContact(index[0] - '0');
			break;
		}
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

int PhoneBook::getnbrContacts(void) const
{
	return (this->nbrContacts);
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
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Contact info" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	return ;
}

bool PhoneBook::isaString(std::string str)
{
	int i = 0;

	if(str.empty())
	{
		std::cout << "STRING CANNOT BE EMPTY!!" << std::endl;
		return (false);
	}
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

	if(str.empty())
	{
		std::cout << "STRING CANNOT BE EMPTY!!" << std::endl;
		return (false);
	}
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

	if(str.empty())
	{
		std::cout << "STRING CANNOT BE EMPTY!!" << std::endl;
		return (false);
	}
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

bool PhoneBook::isaSentence(std::string str)
{
	int i = 0;

	if(str.empty())
	{
		std::cout << "STRING CANNOT BE EMPTY!!" << std::endl;
		return (false);
	}
	while (str[i])
	{
		if (!std::isprint(str[i]))
		{
			std::cout << "ONLY PRINTABLE CHARACTERS ALLOWED!!" << std::endl;
			return (false);
		}
		i++;
	}
	return (true);
}