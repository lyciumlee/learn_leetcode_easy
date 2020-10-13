#include <vector>


using namespace std;



class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small)
    {
        records = {big, medium, small};
    }
    
    bool addCar(int carType)
    {
        return records[carType - 1]-- > 0;
    }
private:
    vector<int> records;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */