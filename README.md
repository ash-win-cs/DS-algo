# DS-Algo

## Topics
- Patterns
- Arrays
	- Sorting
	- Searching
- Pointers
- Strings

## Clean Code Practices

- Use meaningful names
- Write code that expresses your intents
- **Boy scout code** : Leave your code better than you found it
- Single Responsibility principle : Functions keep only 1 purpose 
- Don't Repeat yourself (DRY)
- Keep it simple, stupid
- Beware of optimizations

## Code 

```c++
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
#endif		
```
This code snippet is used to take input from `input.txt` and print the code output to `output.txt`. This will make your life easier, rather than giving manual inputs, you just need to give it in `input.txt` file.<br>
To know more about it checkout the [GFG article](https://www.geeksforgeeks.org/inputoutput-external-file-cc-java-python-competitive-programming/)  on this. 

---

```c++
#ifndef deb
#define deb(x) cout<<#x<<" : "<<x<<endl;
#endif
```
This code snippet is used to debug code faster, rather than typing cout statements always, I just use `deb()`. _Note that do not use this while running your test cases/actual program._