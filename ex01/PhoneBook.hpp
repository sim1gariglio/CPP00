/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:32:48 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/09 12:45:21 by sgarigli         ###   ########.fr       */
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
	void 	addContact(void);
	void 	searchContact(void);
	void 	printContact(int index);
	void 	printTable(Contact *contact);
	void 	printMember(std::string member);
	int		getnbrContacts(void) const;
	bool 	isaString(std::string str);
	bool 	isaPnumber(std::string str);
	bool 	isaNick(std::string str);
	bool 	isaSentence(std::string str);

	private:
	Contact _contacts[8];
	int _nbrContacts;
};

#endif

