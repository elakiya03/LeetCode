{
    let s = "elaks stop"
    let rev = s.split("").reverse().join("")
    console.log(rev)
}
{
    const reverseStr = (s) => {
        let res = []
        for (let i = s.length - 1; i >= 0; i--) {
            res.push(s[i])
        }
        return res.join('')
    }
    let s = "aval varuvala"
    console.log(reverseStr(s))
}