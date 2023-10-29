/**
 * @author: Raghu Sai Phani Sriraj Vemparala
 * @file  : merge_sort.hpp
 * @brief : This file contains the class and function declarations required for merge sort operation.
 * Date   : 06 september 2023
*/
#include <iostream>
#include <vector>
using namespace std;

class ms
{
private:
/**
 * Merges two unsorted arrays
 * 
 * @param v1 Vector of integers to be sorted
 * @param low lower index of the vector array
 * @param mid mid index of the vector array
 * @param high higher index of the vector array
 */
    void merge(vector<int>&, int , int , int );
public:
/**
 * Implements the merge sort algorithm
 * 
 * @param v1 Vector of integers to be sorted
 * @param low lower index of the vector array
 * @param high higher index of the vector array
 */
    void merge_sort(vector<int>&, int , int );
};