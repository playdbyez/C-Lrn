
/*
2.30

const int v2 = 0;
//
Top-level const 



int v1 = v2;
//
Top-level const
 (This isnt a const you dumb ass)


int *p1 = &v1, &r1 = v1;
//
both Low-level const
  (Still not a const object)



const int *p2 = &v2, *const p3 = &i, &r2 = v2;
//
Left most is Top-level while middle is Low-level but right most is Top-level

(very wronggk)
(p2 has low level const, p3 has both, r2 has low level const)






2.31

r1 = v2; Legal
p1 = p2; Legal   (wrong)
p1 = p3; Legal   (wrong)
p2 = p1; Illegal (wrong)
p2 = p3; Illegal (wrong)
