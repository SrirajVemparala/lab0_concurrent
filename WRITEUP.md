# Description of code organization:

## There are 6 files for the code development. They are:
</br>1. mysort.cpp</br>
</br>2. quick_sort.hpp</br>
</br>3. quick_sort.cpp</br>
</br>4. merge_sort.hpp</br>
</br>5. merge_sort.cpp</br>
</br>6. Makefile</br>

## Contents in each file:

**1. mysort.cpp:** This file has the main function. The following are the fucntionalities.<br>
&nbsp;&nbsp;a. The parsing functionality is implemented.<br>
&nbsp;&nbsp;b. Data is collected from input file and pushed into the array.<br>
&nbsp;&nbsp;c. Output file is created and the final sorted data is pushed into the output file.<br>
&nbsp;&nbsp;d. Quick sort and merge sort class objects are created.<br>
&nbsp;&nbsp;e. Calls are made to the sorting algorithms.<br>

**2. quick_sort.hpp** : This file contains the class declaration and function declarations for the quick_sort file.</br>
&nbsp;The following class and function declarations are present:<br>
&nbsp;&nbsp;a. class name: qs<br>
&nbsp;&nbsp;&nbsp;Private Functions:<br>
&nbsp;&nbsp;b. swap(): Used for swapping two variables<br>
&nbsp;&nbsp;c.find_pivot(): Used to find the pivot index of the vector array<br>
&nbsp;&nbsp;&nbsp;Public Functions:<br>
&nbsp;&nbsp;d.quick_sort(): Used to start the sorting.<br>

**3. quick_sort.cpp :** This file contains the class declaration and function declarations for the quick_sort file.<br>
&nbsp;The following function definitions are present:<br>
&nbsp;&nbsp;a. swap()<br>
&nbsp;&nbsp;b. find_pivot()<br>
&nbsp;&nbsp;c. quick_sort()<br>

### Functionality of Quick sort:<br>
&nbsp;The quick sort algorithm follows the below steps:<br>
&nbsp;&nbsp;a. Initially we call the quick_sort function from the main(). The array is passed to this function along with low index as<br>
&nbsp;&nbsp;zero and highest index which is the number of elements the array minus one.<br>
&nbsp;&nbsp;b. This sorting technique uses pivot index value and divides the array into two parts where the elements to the left of the<br>
&nbsp;&nbsp;pivot value are less than that and the elements present to the right of the pivot are greater than that.<br>
&nbsp;&nbsp;c. By default the highest element index is considered as the pivot.<br>
&nbsp;&nbsp;d. First, We call the function find_pivot() which divides the array as mentioned in step b and returns pivot index.<br>
&nbsp;&nbsp;e. Since we got the pivot index, We will call the quick_sort() function recursively with the indexes as low and pivot-1,<br>
&nbsp;&nbsp;pivot+1 high index.<br>
&nbsp;&nbsp;f. In this way for every recursive function, the array is sorted and divided leading to complete sorting of integers.<br>

**4. merge_Sort.hpp**: This file contains the class declaration and function declarations for the quick_sort file.<br> 
&nbsp;&nbsp;The following class and function declarations are present:<br>
&nbsp;&nbsp;a. class name: ms<br>
&nbsp;&nbsp;&nbsp;Private Functions:<br>
&nbsp;&nbsp;b. merge(): Used for sorting the array and merging the vector array.<br>
&nbsp;&nbsp;&nbsp;Public Functions:<br>
&nbsp;&nbsp;c. merge_sort(): Used for dividing the array into two equal parts.<br>

**5. merge_Sort.cpp:** This file contains the class declaration and function declarations for the quick_sort file.<br>
&nbsp;The following function defintions are present: <br>
&nbsp;&nbsp;a. merge()<br>
&nbsp;&nbsp;b. merge_sort()<br>

### Functionality of Merge sort:<br>
&nbsp;The merge sort algorithm follows the below steps:<br>
&nbsp;&nbsp;a. The merge sort algorithm is called from main() function the parameters passed are the array, lower index and<br>
&nbsp;&nbsp;higher index.<br>
&nbsp;&nbsp;b. Inside the merge_sort() function the mid index of array is calculated and the merge_sort() function is called recursively.<br>
&nbsp;&nbsp;c. The idea here is to break down the array into smaller sub arrays and then compare each elements of the smaller sub arrays.<br>
&nbsp;&nbsp;d. Once it is broken down then the merge() function is called.<br>
&nbsp;&nbsp;e. Inside the merge function, the parameters passed are the original array, low, mid, high indexes.<br>
&nbsp;&nbsp;f. The values from low to mid are placed in a newly created array and the values from mid+1 to high are placed in seperate array.<br>
&nbsp;&nbsp;g. They are places in this way to facilitate comparision. These values are compared and placed in the original array.<br>

**6. Makefile:** The following operations can be performed using the MakeFile.<br>
&nbsp;&nbsp;a. make clean - clean the -o files and bin files.<br>
&nbsp;&nbsp;b. make - Generates a executable with name mysort.<br>

## Extant Bugs:
&nbsp;No bugs were observed during the tests and autograde.sh was successful.<br>

