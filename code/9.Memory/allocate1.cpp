class IntegerArray {
public:
 int *data;
 int size;
};

int main() {
 IntegerArray arr;
 arr.size = 2;
 arr.data = new int[arr.size];//This can be moved to a consructor.
 arr.data[0] = 4; arr.data[1] = 5;
 delete[] a.data;//This can be moved to a destructor.
}