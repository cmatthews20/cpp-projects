#include <iostream>
#include <vector>

struct read
{
    std::vector<double> operator()(std::vector<double> nums) {


    }
};


class sort
{
public:

    std::vector<double> operator()(std::vector<double> nums) {
        int largest = nums[0];
        for(double num : nums){
            if(num > largest){
                largest = num;
            }

        }
    }
};

class output_stack
{
public:
    std::vector<double> operator()(std::vector<double> nums) {

    }

};

class output
{
public:
    std::vector<double> operator()(std::vector<double> nums) {
        for(double num : nums){
            std::cout << num << std::endl;
        }
    }
};

template<typename T>
std::vector<double> do_some_process(T process, std::vector<double> x)
{
    return process(x);
}


int main() {
    std::vector<double> nums;

    nums.push_back(1);
    nums.push_back(2);

    output o;

    do_some_process(o, nums);




    return 0;
}
