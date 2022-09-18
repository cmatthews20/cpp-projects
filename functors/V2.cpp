#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>


class read
{
public:

    void operator()(std::vector<double>& nums) {
        // read user input
        std::string userInput;
        std::cin >> userInput;
        std::stringstream ss(userInput);
        int i;
        while (ss >> i)
        {
            nums.push_back(i);

            if (ss.peek() == ',')
                ss.ignore();
        }
    }
};


double compare(double a, double b) {
    return (a > b);
}

class sort
{
public:

    void operator()(std::vector<double>& nums) {

        std::sort(nums.begin(), nums.end(), compare);
    }
};



class output
{
public:

    void operator()(std::vector<double>& nums) {
        for(double num : nums){
            std::cout << num << std::endl;
        }
    }

};





template<typename T>
void do_something(T process, std::vector<double>& x)
{
    process(x);
}


int main() {
    std::vector<double> numbers;

    output o;
    sort s;
    read r;

    do_something(r, numbers);
    do_something(o, numbers);
    do_something(s, numbers);
    do_something(o, numbers);




    return 0;
}
