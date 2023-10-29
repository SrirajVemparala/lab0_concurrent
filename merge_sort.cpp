/**
 * @author: Raghu Sai Phani Sriraj Vemparala
 * @file  : merge_sort.cpp
 * @brief : This file contains the functions required for merge sort operation.
 * Date   : 06 september 2023
*/
#include "merge_sort.hpp"

/**
 * Merges two sorted arrays
 * 
 * @param v1 Vector of integers to be sorted
 * @param low lower index of the vector array
 * @param mid mid index of the vector array
 * @param high higher index of the vector array
 */
void ms::merge(vector<int>&v1, int low, int mid, int high) 
{
    //length of the two sub-arrays
    int l = mid - low +1;
    int h = high - mid;
    //segregating the array into two parts
    vector<int> la;//lower array
    vector<int> ha;//higher array
    int i = 0, j = 0; 
    //pushing the data into the arrays
    for(i = 0; i<l;i++)
    {
        la.push_back(v1[low+i]);
    }
    for(j = 0; j<h;j++)
    {
        ha.push_back(v1[mid+j+1]);
    }
    int k = low;
    i = 0; j =0;
    //Comparing the values and sorting the values
    while (i < l && j < h) 
    {
        if (la[i] <= ha[j]) 
        {
            v1[k] = la[i];
            i++;
        } 
        else 
        {
            v1[k] = ha[j];
            j++;
        }
        k++;
    }
    //Pushing the remaining values into the final array
    while(j<h)
    {
        v1[k] = ha[j];
        k++;
        j++;
    }
    while(i<l)
    {
        v1[k] = la[i];
        k++;
        i++;
    } 
}


/**
 * Implements the merge sort algorithm
 * 
 * @param v1 Vector of integers to be sorted
 * @param low lower index of the vector array
 * @param high higher index of the vector array
 */
void ms::merge_sort(vector<int>&v1, int low, int high)
{
    
    if(low<high)
    {
        int mid = low + (high - low)/2;
        merge_sort(v1,low,mid); // recursive merge sort by passing the low and mid index
        merge_sort(v1, mid+1, high); // recursive merge sort by passing the mid+1 and high index
        merge(v1,low,mid,high); 
    }
}
