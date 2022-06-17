#! /usr/bin/python
import sys
import random

numbers = open("./numbers.txt").readlines()
number = random.choice(numbers).rstrip()

print("What's my favourite number?")
sys.stdout.flush()
res = None
while not res:
    try:
        res = input("Enter a number = ")
	sys.stdout.flush()
        print("You said: {}".format(res))
    except:
        res = None

if res == number:
    print("You were right!")
    sys.stdout.flush()
    flag = open("./flag.txt").read()
    print(flag)
else:
    print("Wrong, but thanks for your input!")
    sys.stdout.flush()
