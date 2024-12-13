/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/02 20:02:58 by yizhang       #+#    #+#                 */
/*   Updated: 2024/12/13 01:29:59 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <stdexcept>
#include <chrono>

class PmergeMe {
public:
    PmergeMe(); // Constructor
    ~PmergeMe(); // Destructor

	PmergeMe(const PmergeMe &src);
	PmergeMe &operator=(const PmergeMe &src);
    void processInput(int argc, char** argv);
    void sortAndMeasure();
    void displayResults() const;

private:
    std::vector<int> vecContainer;
    std::deque<int> dequeContainer;

    void mergeInsertSort(std::vector<int>& container);
    void mergeInsertSort(std::deque<int>& container);
};

#endif
