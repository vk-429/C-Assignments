#include <iostream>
#include <vector>
#include <list>

// Class for Hash Table
template<typename K, typename V>
class HashTable {
private:
    // Number of buckets
    int buckets;
    // Array of lists to store elements
    std::vector<std::list<std::pair<K, V>>> table;

    // Hash function to determine the bucket index
    int hashFunction(const K& key) {
        return std::hash<K>{}(key) % buckets;
    }

public:
    // Constructor
    HashTable(int size) : buckets(size), table(size) {}

    // Function to insert key-value pair
    void insert(const K& key, const V& value) {
        int index = hashFunction(key);
        for (auto& kv : table[index]) {
            if (kv.first == key) {
                std::cout << "Key already exists. Updating value.\n";
                kv.second = value;
                return;
            }
        }
        table[index].emplace_back(key, value);
    }

    // Function to search for value given key
    V search(const K& key) {
        int index = hashFunction(key);
        for (auto& kv : table[index]) {
            if (kv.first == key) {
                return kv.second;
            }
        }
        throw std::out_of_range("Key not found");
    }

    // Function to remove value given key
    void remove(const K& key) {
        int index = hashFunction(key);
        for (auto it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->first == key) {
                table[index].erase(it);
                return;
            }
        }
        throw std::out_of_range("Key not found");
    }
};

int main() {
    HashTable<std::string, int> hashTable(10);

    // Inserting values
    hashTable.insert("John", 25);
    hashTable.insert("Doe", 30);
    hashTable.insert("Jane", 35);

    // Searching for values
    try {
        std::cout << "John's age is: " << hashTable.search("John") << std::endl;
        std::cout << "Doe's age is: " << hashTable.search("Doe") << std::endl;
        std::cout << "Jane's age is: " << hashTable.search("Jane") << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    // Removing a value
    try {
        hashTable.remove("Doe");
        std::cout << "Removed Doe's record.\n";
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
