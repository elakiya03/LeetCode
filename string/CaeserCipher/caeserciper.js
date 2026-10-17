const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const encryption = (text, shift) => {
  let encrypted = [];

  for (let i = 0; i < text.length; i++) {
    let ch = text[i].toLowerCase();
    if (
      ch.charCodeAt(0) >= "a".charCodeAt(0) &&
      ch.charCodeAt(0) <= "z".charCodeAt(0)
    ) {
      ch =
        ((ch.charCodeAt(0) - "a".charCodeAt(0) + shift) % 26) +
        "a".charCodeAt(0);

      encrypted.push(String.fromCharCode(ch));
    }
  }
  return encrypted.join("");
};

rl.question("Enter text: ", (text) => {
  rl.question("Enter shift: ", (shift) => {
    console.log("Encrpytion: ", encryption(text, Number(shift)));
    rl.close();
  });
});
