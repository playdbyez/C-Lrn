//Acessing Arrays

int ia[] = {0,1,2,3,4,5,6,7,8,9};

int i = 42; 
auto ia2(ia); 			// ia2 is an int* that points to the first element in ia
auto ia2(&ia[0]); 		// ia2 is an int* that points to the first element in ia

ia[4] = i; 			// assigns the value of i to an element in ia

int *p = ia; 			// p points to &ia[0]
++p;				// p points to &ia[1]
int *ip2 = p + 4; 		// ip2 points to ia[4]
int last = *(ia + 4); 		// last points to ia[4]

int *p = &ia[2]; 		// p points to the element indexed by 2
int j = p[1];			//p[1] is equivalent to *(p + 1),p[1] is the same as ia[3]
int k = p[-2];			//p[-2] is the same element as ia[0]




int *e = &ia[10]; 		// pointer just past the last element in arr

int *beg = begin(ia);	 	// pointer to the first element in ia
int *last = end(ia); 		// pointer one past the last element in ia




Page 119
