const hasher = require('./hasher')
//Prints Encoded Data
console.log(hasher.encode("Hello World!"))
//Prints Decoded Data
console.log(hasher.decode("35 6 13 13 16 0 50 16 19 13 5 67"))
//Checks the Hash and the data
console.log(hasher.check("Hello World!", "35 6 13 13 16 0 50 16 19 13 5 67"))
console.log(hasher.check("Hello World", "35 6 13 13 16 0 50 16 19 13 5 67"))
