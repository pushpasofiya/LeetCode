class MyHashSet {
private:
    vector<vector<int>> buckets;

public:
    MyHashSet() {
        buckets.resize(1000);
    }

    void add(int key) {
        int index = key % 1000;

        auto it = find(buckets[index].begin(),
                       buckets[index].end(),
                       key);

        if (it == buckets[index].end()) {
            buckets[index].push_back(key);
        }
    }

    void remove(int key) {
        int index = key % 1000;

        auto it = find(buckets[index].begin(),
                       buckets[index].end(),
                       key);

        if (it != buckets[index].end()) {
            buckets[index].erase(it);
        }
    }

    bool contains(int key) {
        int index = key % 1000;

        auto it = find(buckets[index].begin(),
                       buckets[index].end(),
                       key);

        return it != buckets[index].end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */