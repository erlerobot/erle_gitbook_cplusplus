class IntegerArray {
public:
 int *data;
 int size;
 IntegerArray(int size) {
 data = new int[size];
 this->size = size;
 }
 ~IntegerArray () {
 delete[] data;
 }
};

};

int main() {
IntegerArray arr(2);
 arr.data[0] = 4; arr.data[1] = 5;

}