#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class LRUCache{
    private:
    int cap;
    //Doubly linked list storing pairs of {key, value}
    list<pair<int, int>> cacheList;
    // Hash map pointing from key to the list node iterator
    unordered_map<int, list<pair<int,int>>::iterator> cacheMap;
    // Function to shift an existing node to the front
    void makeMostRecent(int key){
        // Cut the node from its current spot and push it to the front
        cacheList.splice(cacheList.begin(), cacheList, cacheMap[key]);
    }

    public:
    LRUCache(int capacity){
        cap = capacity;
    }
    int get(int key){
        // If key doesnt exist, return -1
        if(cacheMap.find(key) == cacheMap.end()){
            return -1;
        }
        makeMostRecent(key);
        return cacheMap[key]->second;
    }
    void put(int key, int value){
        //Case 1: key already exists, update value and refresh priority
        if(cacheMap.find(key) != cacheMap.end()){
            cacheMap[key]->second = value;
            makeMostRecent(key);
            return;
        }
        //Case 2: cache is full, evict the least recently used
        if(cacheList.size() == cap){
            int lrukey = cacheList.back().first;
            cacheMap.erase(lrukey);
            cacheList.pop_back();
        }
        //Case 3: insert new key-value pair at the front
        cacheList.push_front({key, value});
        cacheMap[key] = cacheList.begin();
    }
};
int main(){
    LRUCache* cache = new LRUCache(2); // cache capacity 2

    cache->put(1, 10);
    cache->put(2, 20);

    cout << "Get key 1: " << cache->get(1) << "\n";
    cache->put(3, 30);
    cout << "Get key 2: " << cache->get(2) << "\n"; // Evicted, so returns -1
    return 0;
}