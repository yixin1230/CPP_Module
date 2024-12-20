/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/28 23:59:12 by yizhang       #+#    #+#                 */
/*   Updated: 2024/12/13 05:36:29 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// 1.Pairing Elements
// 2.Sorting the Pairs
// 3.Merging the Pairs
// 4.Sorting the Remaining Elements
int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Error: No input provided" << std::endl;
        return 1;
    }

    try {
        PmergeMe sorter;
        sorter.processInput(argc, argv);
        sorter.displayResults();
        sorter.sortAndMeasure();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
