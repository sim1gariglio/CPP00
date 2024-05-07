/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:29:03 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/07 17:06:08 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string cmd;
	PhoneBook instance;

	while(1)
	{
		std::cout << "Avaiable commands: ADD | SEARCH | EXIT" << std::endl;
		if(!(std::cin >> cmd))
			exit(1);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
			instance.addContact();
		else if (cmd == "SEARCH")
			instance.searchContact();
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}