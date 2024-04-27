#include "my_foundation/my_algorithm.h" # Not working

//#include "my_algorithm.h" // Working
#include <vector>
#include <string>

int main() {
    my_algorithm();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    my_algorithm_print_vector(vec);
}
