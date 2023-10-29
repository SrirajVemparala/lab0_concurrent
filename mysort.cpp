/**
 * @author: Raghu Sai Phani Sriraj Vemparala
 * @file  : mysort.cpp
 * @brief : This file contains the main function and parsing of parameters is performed.
 * @References: https://stackoverflow.com/questions/8793020/using-getopt-long-c-how-do-i-code-up-a-long-short-option-to-both-require-a
 *              https://linux.die.net/man/3/getopt_long
 *              https://www.geeksforgeeks.org/merge-sort/
 *              https://www.geeksforgeeks.org/quick-sort/
 *              
 * Date   : 06 september 2023
*/
#include <iostream>
#include <vector>
#include <getopt.h>
#include <fstream>
#include <string>
#include "merge_sort.hpp"
#include "quick_sort.hpp"
using namespace std;

int main(int argc,char* argv[]) 
{
    std::vector<int> v1;
    int c = 0, option_index =0;
    string value, my_name, input_file, output_file, algorithm;
    //structure for options to be parsed and validate
    static struct option long_options[] = {
            {"name",    no_argument, 0,  'n' },
            {"inputfile",  required_argument,       0,  'i' },
            {"outputfile",  required_argument, 0,  'o' },
            {"alg", required_argument,       0,  'a' },
            {0,         0,                 0,  0 }
            };
    while (1) 
    {
        //passing arguments for further operation
        c = getopt_long(argc, argv, "ni:o:a:", long_options, &option_index);
        if (c == -1)
            break;
        //Switch case is used to store the arguments
       switch (c) 
       {
            case 'n':
                cout << "Raghu Sai Phani Sriraj Vemparala" << endl;
                return 0;
                break;
            case 'i':
                input_file = std::string(optarg);
                break;
            case 'o':
                output_file  = std::string(optarg);
                break;
            case 'a':
                algorithm = std::string(optarg);
                break;
            default: 
                cout << "Invalid_argument" <<endl;
                break;
       }
    }
    //open an input file
    ifstream inputfile(input_file);
    if(inputfile.is_open())
    {
        //Obtain the data from the input file and store it in the array
        while(getline(inputfile,value))
        {
            int new_val = stoi(value);
            v1.push_back(new_val);
        }
    }
    else
    {
        cout << "Failed to open input file" <<endl;
        return -1;
    }
    inputfile.close();
    //open output file or create a file
    ofstream outputfile(output_file);
    if(outputfile.is_open())
    {
        //check for the algorithm
        if(algorithm == "merge")
        {
            ms sort;
            sort.merge_sort(v1,0,v1.size()-1);
        }
        else if(algorithm=="quick")
        {
            qs sort;
            sort.quick_sort(v1,0,v1.size()-1);
        }
        else
        {
            cout << "Invalid_Algorithm" <<endl;
            return 0;
        }
        //push the data to the output file
        for(int i : v1)
        {
            outputfile << i << endl;
        }
    }
    else
    {
        cout << "Failed to open output file" << endl;
        return -1;
    }
    //close the output file
    outputfile.close();
    return 0;   
}