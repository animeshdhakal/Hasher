import hasher
#Prints Encoded Data
print(hasher.encode("Hello World!"))
#Prints Decoded Data
print(hasher.decode("80 8 27 27 48 0 61 48 9 27 20 41"))
#Checks the Hash and the data
print(hasher.check("Hello World!", "80 8 27 27 48 0 61 48 9 27 20 41"))
print(hasher.check("Hello World", "35 6 13 13 16 0 50 16 19 13 5 67"))