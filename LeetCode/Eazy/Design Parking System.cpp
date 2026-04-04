//https://leetcode.com/problems/design-parking-system/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <unordered_map>
using namespace std;


class ParkingSystem {
public:
    unordered_map<int, int> cars;
    ParkingSystem(int big, int medium, int small) {
        cars[1] = big;
        cars[2] = medium;
        cars[3] = small;
    }
    
    bool addCar(int carType) {
        if (cars[carType]==0)
            return false;
        else{
            cars[carType]--;
            return true;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */