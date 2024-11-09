/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:27:43 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/08 22:34:19 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

static int	getCopyVal(int value)
{
	int	result;

	result = value;
	return (result);
}

int Account::getNbAccounts(void)
{
	return (getCopyVal(_nbAccounts));
}

int Account::getTotalAmount(void)
{
	return (getCopyVal(_totalAmount));
}

int Account::getNbDeposits(void)
{
	return (getCopyVal(_totalNbDeposits));
}

int Account::getNbWithdrawals(void)
{
	return (getCopyVal(_totalNbWithdrawals));
}

void Account::displayAccountsInfos(void)
{
}

void Account::makeDeposit(int deposit)
{
}

bool Account::makeWithdrawal(int withdrawal)
{
	return (false);
}

int Account::checkAmount(void) const
{
	return (getCopyVal(this->_amount));
}

void Account::displayStatus(void) const
{
}
