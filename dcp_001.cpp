/*
This problem was recently asked by Google.
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
Bonus: Can you do this in one pass?
*/

#include <iostream>
#include <set>

bool findNumbers(int (&listNumbers)[4], int k){
    //declare set to store complements
    std::set<int> setNumbers;
    for(const auto &num : listNumbers){
        if (setNumbers.count(num)){
            return true;
        }else{
            setNumbers.insert(k-num);
            
        }
    }
    return false;
}

int main()
{
    int listNumbers[4] = {10, 15, 3, 7};
    int k = 17;
    bool result = findNumbers(listNumbers, k);
    if (result) {
        std::cout<<"Numbers found.";
    }else{
        std::cout<<"Numbers not found.";
    }

    return 0;
}
