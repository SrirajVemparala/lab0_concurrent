mysort: mysort.o quick_sort.o merge_sort.o
	g++ mysort.o quick_sort.o merge_sort.o -o mysort

mysort.o: mysort.cpp
	g++ -g -Wall -Werror -c mysort.cpp

quick_sort.o: quick_sort.cpp
	g++ -g -Wall -Werror -c quick_sort.cpp

merge_sort.o: merge_sort.cpp
	g++ -g -Wall -Werror -c merge_sort.cpp

clean:
	rm -f *.o mysort