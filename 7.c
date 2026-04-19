/*
Structure:

Each member has its own separate memory location
Total size = sum of sizes of all members
All members can store values at the same time
Used when all data members are needed

Union:
All members share the same memory location
Total size = size of the largest member
Only one member can store a value at a time
Used when only one data member is needed at a time

*/

struct student {
    int id;
    float marks;
};

union data {
    int id;
    float marks;
};
