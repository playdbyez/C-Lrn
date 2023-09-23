//Exercise 3.12: 

/*
Q:
Which, if any, of the following vector definitions are in error? For
those that are legal, explain what the definition does. For those that are not legal,
explain why they are illegal.
(a) vector<vector<int>> ivec;
(b) vector<string> svec = ivec;
(c) vector<string> svec(10, "null");


A:
a. legal, ivec is initially empty
b. error, mismatching type conversion from int to string failed
c. legal, svec has 10 elements of value "null" ?



//Exercise 3.13: 

Q:
How many elements are there in each of the following vectors? What
are the values of the elements?
(
vector<int> v1;
(a) vector<int> v1;
(b) vector<int> v2(10);
(c) vector<int> v3(10, 42);
(d) vector<int> v4{10};
(e) vector<int> v5{10, 42};
(f) vector<string> v6{10};
(g) vector<string> v7{10, "hi"};


A:
a. initially empty
b. 10 elements of value 0
c. 10 elements of value 42
d. 1 element of value 10
e. 2 elements of value 10 and  42
f. 10 element of value empty
g. 10 elements of value hi

*/
