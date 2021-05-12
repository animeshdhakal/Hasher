const a = {
    "a": 1, "A": 28, "1": 54, "\\":80,
    "b": 2, "B": 29, "2": 55, "/":81,
    "c": 3, "C": 30, "3": 56, "?":82,
    "d": 5, "D": 31, "4": 57, "`":83,
    "e": 6, "E": 32, "5": 58, "~":84,
    "f": 7, "F": 33, "6": 59, ",":85,
    "g": 8, "G": 34, "7": 60, ":":86,
    "h": 9, "H": 35, "8": 61, ";":87,
    "i": 10, "I": 36, "9": 62, "[":88,
    "j": 11, "J": 37, "0": 63, "]":89,
    "k": 12, "K": 38, ".":64, "|":90,
    "l": 13, "L": 39, "@":65, "\n":91,
    "m": 14, "M": 40, "$":66,
    "n": 15, "N": 41, "!":67,
    "o": 16, "O": 42, "*":68,
    "p": 17, "P": 43, "&":69,
    "q": 18, "Q": 44, "%":70,
    "r": 19, "R": 45, "(":71,
    "s": 20, "S": 46, ")":72,
    "t": 21, "T": 47, "^":73,
    "u": 22, "U": 48, "+":74,
    "v": 23, "V": 49, "-":75,
    "w": 24, "W": 50, "{":76,
    "x": 25, "X": 51, "}":77,
    "y": 26, "Y": 52, "<":78,
    "z": 27,  "Z": 53, ">":79, 
}

function get(object, value) {
    return Object.keys(object).find(key => object[key] === value);
}

function encode(data){
    let j = ""
    for(var i = 0; i<data.length; i++){
        if(data[i]==" "){
            j += "0 "
            continue
        }
        j += String(a[data[i]])
        j += " "
    }
    return j;
}

function decode(data){
    let j = ""
    let k = ""
    if(data[data.length - 1] !== ""){
        data += " "
    }
    for(var i = 0; i<data.length; i++){
        if(data[i]===" "){
            if(k === "0"){
                j += " "
                continue
            }
            j += get(a, Number(k))
            k = ""
            continue;
        }
        k += data[i]
    }
    return j;
}

function check(string, hash){
    if(hash[hash.length - 1] !== ""){
        hash += " "
    }
    return encode(string)===hash;
}

module.exports = {encode, decode, check}
