# Learning C 💻

## About  
This repository is part of my journey to learn the C programming language.
It includes simple exercises and compiled binaries to practice and test my skills.

## Structure 📂  
- **`basics/`**: Simple programs to practice the fundamentals (loops, conditions, etc.).
- **`intermediate/`**: Programs with more advanced concepts (pointers, structures, file handling, etc.).

## Resources 🌐  
Here are some useful links and references I use while learning C: 
- [ZesteDeSavoir (FR)](https://zestedesavoir.com/tutoriels/755/le-langage-c-1/)

## Cheat-Sheet

### Files

- Open a file :
```c
// Definition : FILE *fopen(char *chemin, char *mode);
// ⚠️  Always check if fp is not NULL !
// ⚠️  Always close a open file when you finish !

FILE *fp = fopen("file.txt", "r");
// r = (read), r+ = (read & write), w = (write and create if not exists), w+ = (read and write, create if not exists), a = (add), a+ = (read and add at the end of the file)

if (fp == NULL)
    {
        fputs("Error while opening file !\n", stderr);
        return EXIT_FAILURE;
    }
```

- Close a file : 
```c
// Definition : int fclose(FILE *flux);

if (fclose(fp) == EOF)
    {
        printf("Error while closing file !\n");
        return EXIT_FAILURE;        
    }
```

- Write a char : 
```c
// Definition : int fputc(int ch, FILE *flux);

if (fputc('C', fp) == EOF)
    {
        fputs("Error\n", stderr); // Use stderr for errors !
        return EXIT_FAILURE;
    }
```

- Write a string :
```c
// Definition : int fputs(char *ligne, FILE *flux);
// Always check your return code !

if (fputs("Bonjour\n", fp) == EOF)
    {
        fputs("Error\n", stderr); // Use stderr for errors !
        return EXIT_FAILURE;
    }

// Also 
// Definition : int fprintf(FILE *flux, char *format, ...);
// Return number of char written or negative value when failed.

int age = 25;
fprintf(fp, "Hi, i'm %d years old.\n", age);
```

- Read a char : 
```c
// Definition : int fgetc(FILE *flux);
// Return EOF if end of file or error

int ch = fgetc(fp);

if (ch != EOF)
     printf("%c\n", ch);
```

- Read a string : 
```c
// Definition : char *fgets(char *tampon, int taille, FILE *flux);
// Return NULL if error else string with \0 include !

char buf[255]; // A line is 254 char (\n include) MAX

if (fgets(buf, sizeof buf, fp) != NULL)
        printf("%s\n", buf);
```
