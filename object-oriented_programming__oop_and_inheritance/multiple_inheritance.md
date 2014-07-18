## Multiple Inheritance

C++ allows a class to have multiple based classes.
```cpp
class Car : public Vehicle , public InsuredItem {
 ...
 };
```
This specifies that Car should have all the members of both the Vehicle and the InsuredItem
classes.

Multiple inheritance is tricky and potentially dangerous:

- If both Vehicle and InsuredItem define a member x this can cause problems.


- If both Vehicle and InsuredItem inherited from the same base class, you’d end up
with two instances of the base class within each Car.
