/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:32:48 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/08 12:09:31 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook(void);
	~PhoneBook(void);
	void addContact(void);
	void searchContact(void);
	void printTable(Contact *contact);
	void printMember(std::string member);
	bool isaString(std::string str);
	bool isaPnumber(std::string str);
	bool isaNick(std::string str);
	int		getnbrContacts(void) const;
	int		gettoReplace(void) const;
	void 	printContact(int index);

	private:
	Contact contacts[8];
	int nbrContacts;
	int toReplace;
};

#endif

