# Cat command

The cat command, short for "concatenate," is a fundamental command-line utility in Unix-like operating systems like Linux. Its primary purpose is to display the content of files and to combine (concatenate) multiple files into a single output.
Here are the main uses of the cat command: Displaying File Content.

# How it work

First, you need to compile the C file.

```

gcc mycat.c -o mycat

```

This will create an executable file named `mycat`.

After that, you can run it. You can try to read `file1.txt` (which is already here) or make your own file.

To make your own file:

```

touch file.txt

```

To write on the file:

```

echo "hello world" >> file.txt

```

Or you can use a text editor:

```

nano file.txt

```
(Write anything and save the file).

To run the program on your file:

```

./mycat file.txt

```

This will show what you wrote in the file.

If you have two files, like `file1.txt` and `file2.txt`, you can run:

```

./mycat file1.txt file2.txt

```

This will print the content of `file1.txt` first, then the content of `file2.txt`.

If you try to write:

```

./mycat non_existent_file.txt

```

And `non_existent_file.txt` doesn't exist, it will print an error:

```
mycat: non_existent_file.txt: No such file or directory⏎                                                                  
```
