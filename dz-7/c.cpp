#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>

int main() {
    std::unordered_set<int> st;

    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    int num;
    while (iss >> num) {
        if (st.contains(num)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
            st.insert(num);
        }
    }

    return 0;
}
