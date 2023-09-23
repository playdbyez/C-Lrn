/*
//The following program is illegal, as it goes through compile-time without any issues, it will however result in a segmentation fault at runtime.

vector<int> ivec;
ivec[0] = 42;


//Since vector 'ivec' has already been initialized it would be more accurate to insert an element with an assignment opperator and curly braces instead, like so:


vector<int> ivec;
ivec = {42};


