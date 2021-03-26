using namespace std;

template <class T> Node {
    public:
        int key;
        T value;
        Node(int key, T value) {
            this->key = key;
            this->value = value;
        }
}

template <class T> class hashTable {
    private:
        int capacity;//elements in private array
        int size;//size of array.
        vector<Node<T>>* table;//table representing array
        int hash(int key);
        void resize();
        hashTable();
        ~hashTable();

    public:
        T get(int key);
        void remove(int key);
        void insert(int key, T element);

}