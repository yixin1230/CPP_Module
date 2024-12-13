/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/02 20:03:55 by yizhang       #+#    #+#                 */
/*   Updated: 2024/12/13 01:27:49 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    (void)src;
}


PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    (void)src;
    return (*this);
}
void PmergeMe::processInput(int argc, char** argv) {
	std::cout << "Before: ";
    for (int i = 1; i < argc; ++i) {
        try {
            int num = std::stoi(argv[i]);
            if (num < 0) throw std::invalid_argument("Negative number");
            vecContainer.push_back(num);
            dequeContainer.push_back(num);
        } catch (...) {
            throw std::invalid_argument("Invalid input: " + std::string(argv[i]));
        }
    }
}

void PmergeMe::mergeInsertSort(std::vector<int>& container) {
    if (container.size() <= 1) return;

    std::vector<int> left(container.begin(), container.begin() + container.size() / 2);
    std::vector<int> right(container.begin() + container.size() / 2, container.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}

void PmergeMe::mergeInsertSort(std::deque<int>& container) {
    if (container.size() <= 1) return;

    std::deque<int> left(container.begin(), container.begin() + container.size() / 2);
    std::deque<int> right(container.begin() + container.size() / 2, container.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}

void PmergeMe::sortAndMeasure() {
    // Sort and time std::vector
    auto startVec = std::chrono::high_resolution_clock::now();
    mergeInsertSort(vecContainer);
    auto endVec = std::chrono::high_resolution_clock::now();
    auto durationVec = std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec).count();


    // Sort and time std::deque
    auto startDeque = std::chrono::high_resolution_clock::now();
    mergeInsertSort(dequeContainer);
    auto endDeque = std::chrono::high_resolution_clock::now();
    auto durationDeque = std::chrono::duration_cast<std::chrono::microseconds>(endDeque - startDeque).count();

	std::cout << "After: ";
    displayResults();

    // Display timing results
    std::cout << "Time to process a range of " << vecContainer.size() 
              << " elements with std::vector: " << durationVec << " us" << std::endl;

    std::cout << "Time to process a range of " << dequeContainer.size() 
              << " elements with std::deque: " << durationDeque << " us" << std::endl;
}

void PmergeMe::displayResults() const {
	int i = 0;
    for (const auto& num : vecContainer) 
	{
		if (i > 3 && vecContainer.size() > 10)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << num << " ";
		i++;
	}
    std::cout << std::endl;
}
