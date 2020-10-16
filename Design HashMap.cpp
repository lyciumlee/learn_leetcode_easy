#include <vector>


using namespace std;


class MyHashMap {

public:
    /** Initialize your data structure here. */
    MyHashMap()
    {
        data.resize(1000, vector<int>());
    }
    
    /** value will always be non-negative. */
    void put(int key, int value)
    {
        int hashKey = key % 1000;
        if(data[hashKey].empty())
        {
            data[hashKey].resize(1000, -1);
        }
        data[hashKey][key / 1000] = value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key)
    {
        int hashKey = key % 1000;
        if(!data[hashKey].empty())
        {
            return data[hashKey][key / 1000];
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key)
    {
        int hashKey = key % 1000;
        if(!data[hashKey].empty())
        {
            data[hashKey][key / 1000] = -1;
        }
    }
private:
    vector<vector<int>> data;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */