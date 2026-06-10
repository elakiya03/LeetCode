const isSubSeq = (str, seq) => {
    let n = str.length;
    let m = seq.length;

    if (m > n) return false;

    let i = 0, j = 0
    while (i < n && j < m) {
        if (seq[j] == str[i]) {
            j++;
        }
        i++;
    }
    return j == m;
}

let str = "elakiya"
let seq = "elk"
console.log(isSubSeq(str, seq) ? 'yes' : 'no')


let str1 = "virat"
let seq1 = "riv"
console.log(isSubSeq(str1, seq1) ? 'yes' : 'no')