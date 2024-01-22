

#ifndef MODULE_H
#define MODULE_H

#include <vector>

inline int find_max(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -1;
    }
    return *std::max_element(arr.begin(), arr.end());
}

#endif 
