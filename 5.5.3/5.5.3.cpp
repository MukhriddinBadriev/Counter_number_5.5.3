#include <iostream>

#include <vector>
#include <algorithm>

class get_sum {
public:
    get_sum(std::vector<int> &_v) {
        v = _v;
    }
    void operator()() {
        for (int i = 0; i < v.size(); i++) {
            if (v[i] % 3 == 0) { sum += v[i];}
        }
        std::cout << sum << '\n';
    }
private:
    int sum = 0;
    std::vector<int> v;
};

class get_count {
public:
    get_count(std::vector<int>& _v) {
        v = _v;
    }
    void operator()() {
        for (int i = 0; i < v.size(); i++) {
            if (v[i] % 3 == 0) { ++counter; }
        }
        std::cout << counter << '\n';
    }
private:
    int counter = 0;
    std::vector<int> v;
};

int main()
{
    std::vector<int> v = { 4, 1, 3, 6, 25, 54 };
    std::cout << "[IN]: ";
    for (int j = 0; j < v.size(); j++) {
        std::cout << v[j] << " ";
    }std::cout << "\n";
    
    std::cout << "[OUT]: get_sum() = ";
    (get_sum(v))();
    
    std::cout << "[OUT]: get_count() = ";
    (get_count(v))();
    return 0;
}