#include <iostream>
#include <vector>

int main() {
	std::vector <int> arr{2, 4, 7, 10, 8, 1, 5, 3, 6, 9};
	std::cout << "OG: ";
	for (auto a:arr)
		std::cout << a << " ";
	std::cout << std::endl;

	int len_arr = arr.size();

	while (len_arr != 0) {
		for (int i=0; i<len_arr-1; i++) {
			if (arr.at(i) > arr.at(i+1)) {
				int swap = arr.at(i);
				arr.at(i) = arr.at(i+1);
				arr.at(i+1) = swap;	
			}
		}
		len_arr--;
	}

	std::cout << "SR: ";
	for (auto a:arr)
        std::cout << a << " ";
    std::cout << std::endl;


	return 0;
}
