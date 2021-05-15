a = {"a":92, "A":38, "1":35, "\\":59, "b":71, "B":32, "2":76, "/":56, "c":47, "C":68, "3":2, "?":36, "d":20, "D":3, "4":28, "`":33, "e":8, "E":16, "5":96, "~":62, "f":23, "F":26, "6":18, ",":86, "g":49, "G":66, "7":89, ":":70, "h":14, "H":80, "8":64, ";":83, "i":60, "I":84, "9":30, "[":95, "j":77, "J":43, "0":40, "]":17, "k":15, "K":7, ".":88, "|":63, "l":27, "L":53, "@":91, "\n":78, "m":50, "M":73, "$":21, "n":57, "N":85, "!":41, "o":48, "O":74, "*":6, "p":51, "P":99, "&":93, "q":79, "Q":98, "%":25, "r":9, "R":29, "(":55, "s":54, "S":39, ")":4, "t":81, "T":19, "^":31, "u":45, "U":12, "+":22, "v":42, "V":13, "-":82, "w":52, "W":61, "{":87, "x":11, "X":69, "}":1, "y":44, "Y":37, "<":97, "z":34, "Z":58, ">":65 }


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
