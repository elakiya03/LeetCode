{
    const isAnagram = (s1, s2) => {
        if (s1.length !== s2.length) return false;

        let count = new Array(26).fill(0);

        for (let i = 0; i < s1.length; i++) {
            count[s1[i].charCodeAt(0) - "a".charCodeAt(0)]++;
            count[s2[i].charCodeAt(0) - "a".charCodeAt(0)]--
        }

        for (let i = 0; i < 26; i++) {
            if (count[i] != 0)
                return false
        }
        return true;
    }

    let s1 = "silent"
    let s2 = "listen"
    console.log(isAnagram(s1, s2) ? 'Yes' : 'no')
}
{
    const isAnagram = (s1, s2) => {
        if (s1.length !== s2.length) return false

        s1 = s1.split('').sort().join('');
        s2 = s2.split('').sort().join('');

        return s1 === s2
    }

    let s1 = "virat"
    let s2 = "jimin"
    console.log(isAnagram(s1, s2) ? 'yes' : 'no')

}
{
    
}