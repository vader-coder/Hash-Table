hashTable::hashTable() {

}
hashTable::~hashTable() {
    delete[] table;
}

template <T> T hashTable::get(int key) {
    int index = hash(key);
    vector<Node<T>> chain = table[index];//what is the default?
    for (int i=0; i<chain.size(); i++) {
        Node<T>* currrent = chain[i];
        if (current->key == key) {
            return current->value;
        }
    }
    throw new_error("item not found");
}

//what if it doesn't exist?
template <T> void insert(int key, T element) {
    int index = hash(key);
    vector<Node<T>> chain = table[index];//what is the default?
    for (int i=0; i<chain.size(); i++) {
        Node<T>* currrent = chain[i];
        if (current->key == key) {
            return current->value;
        }
    }
}
