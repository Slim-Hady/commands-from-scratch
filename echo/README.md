# What is echo 

echo is command that display what you write in Terminal it have some feature like 
you can write echo {some argument} 
and argument will appear with one space between even if there are a huge space between two argument 
if you write 
echo "some words" 
words will appear exactly like you write 
there are too 
echo -n "words" 
normal echo always print new line but when you write -n will not print new line 

# how code work 

write 
``` 
./myecho {here put argument or ""}
``` 

if you want to make sure that it work like normal echo you can write normal echo like

echo "hello world" | md5sum 

result will be special characters 

md5sum encrypt the output to special characters 

then write 
./myecho "hello world" | md5sum 

compare two result together and try more cases to ensure it work like normal echo 
