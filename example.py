import hasher
#Prints Encoded Data
print(hasher.encode("Hello World!"))
#Prints Decoded Data
print(hasher.decode("35 6 13 13 16 0 50 16 19 13 5 67"))
#Checks the Hash and the data
print(hasher.check("Hello World!", "35 6 13 13 16 0 50 16 19 13 5 67"))
print(hasher.check("Hello World", "35 6 13 13 16 0 50 16 19 13 5 67"))