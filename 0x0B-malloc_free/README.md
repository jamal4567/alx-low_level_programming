# 0x0B. C - malloc, free

### Resources

  + [0x0a - malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230712%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230712T003456Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=da7107857226d8e2dab787b5b96e71472cab9d27db29e341805927b18b0037aa)
  + [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64&ab_channel=mycodeschool)

### Tasks

  * File: 0-create_array.c

    - creates an array of chars, and initializes it with a specific char.
       + Prototype: char *create_array(unsigned int size, char c);
       + Returns NULL if size = 0
       + Returns a pointer to the array, or NULL if it fails

  * File: 1-strdup.c

    - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
       + Prototype: char *_strdup(char *str);
       + The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
       + Returns NULL if str = NULL
       + On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

  * File: 2-str_concat.c

    -  function that concatenates two strings.
       + Prototype: char *str_concat(char *s1, char *s2);
       + The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
       + if NULL is passed, treat it as an empty string
       + The function should return NULL on failure

  * File: 3-alloc_grid.c

    -  function that returns a pointer to a 2 dimensional array of integers.
       + Prototype: int **alloc_grid(int width, int height);
       + Each element of the grid should be initialized to 0
       + The function should return NULL on failure
       + If width or height is 0 or negative, return NULL

  * File: 4-free_grid.c

    - function that frees a 2 dimensional grid previously created by your alloc_grid function.
      + Prototype: void free_grid(int **grid, int height);
      + Note that we will compile with your alloc_grid.c file. Make sure it compiles.
     
  * File: 100-argstostr.c

    - function that concatenates all the arguments of your program.
      + Prototype: char *argstostr(int ac, char **av);
      + Returns NULL if ac == 0 or av == NULL
      + Returns a pointer to a new string, or NULL if it fails
      + Each argument should be followed by a \n in the new string

  * File: main.h

    - all my Prototype in this file.
