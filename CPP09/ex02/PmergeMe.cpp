/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/02 20:03:55 by yizhang       #+#    #+#                 */
/*   Updated: 2024/12/13 00:30:20 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void PmergeMe::processInput(int argc, char** argv) {
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
    // Implement Ford-Johnson merge-insert sort for vector
    if (container.size() <= 1) return;

    std::vector<int> left(container.begin(), container.begin() + container.size() / 2);
    std::vector<int> right(container.begin() + container.size() / 2, container.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}

void PmergeMe::mergeInsertSort(std::deque<int>& container) {
    // Implement Ford-Johnson merge-insert sort for deque
    if (container.size() <= 1) return;

    std::deque<int> left(container.begin(), container.begin() + container.size() / 2);
    std::deque<int> right(container.begin() + container.size() / 2, container.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}

void PmergeMe::sortAndMeasure() {
    auto startVec = std::chrono::high_resolution_clock::now();
    mergeInsertSort(vecContainer);
    auto endVec = std::chrono::high_resolution_clock::now();

    auto startDeque = std::chrono::high_resolution_clock::now();
    mergeInsertSort(dequeContainer);
    auto endDeque = std::chrono::high_resolution_clock::now();

    std::cout << "Time to process with std::vector: "
              << std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec).count()
              << " microseconds" << std::endl;

    std::cout << "Time to process with std::deque: "
              << std::chrono::duration_cast<std::chrono::microseconds>(endDeque - startDeque).count()
              << " microseconds" << std::endl;
}

void PmergeMe::displayResults() const {
    std::cout << "Before: ";
    for (const auto& num : vecContainer) std::cout << num << " ";
    std::cout << std::endl;

    std::cout << "After: ";
    for (const auto& num : vecContainer) std::cout << num << " ";
    std::cout << std::endl;
}
