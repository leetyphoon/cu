# C Language util

```
gcc -o test test.c cu.c
```
char *fmtstr(const char *format, ...);
```
char *str = fmtstr("Hello %s!! Num: %d", "World", 3);
puts(str);
free(str);
```


