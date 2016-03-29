subsets
=======

C implementation of an algorithm for generating k-subsets of an n-set in lexicographic order (with respect to indexes). There is also TeX source of an unfinished note describing the algorithm. 

### Usage Example
Compile with `gcc subs.c -o subs`.

Calling `./subs 5 3` generates all `3`-subsets of `{1,2,3,4,5}` in lexicographic order:

```
blazs@blazs-laptop:~/Documents$ ./subs 5 3
1 2 3 
1 2 4 
1 2 5 
1 3 4 
1 3 5 
1 4 5 
2 3 4 
2 3 5 
2 4 5 
3 4 5 
```
