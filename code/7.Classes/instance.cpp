#include <iostream>
using namespace std;

class MITStudent {
 public:
  char *name;
  int studentID;
};

int main() {
   MITStudent student1;
   MITStudent student2;
    student1.name = "Geza";
    student1.studentID = 123456789;
    student2.name = "Jesse";
    student2.studentID = 987654321;

 cout << "student1 name is" << student1.name << endl;
 cout << "student1 id is" << student1.studentID << endl;
 cout << "student2 name is" << student2.name << endl;
 cout << "student2 id is" << student2.studentID << endl;


return 0;
}