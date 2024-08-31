var x = '1';

console.log(+x);  // 1
console.log(x);   // "1"

x = true;
console.log(+x);  // 1
console.log(x);   // true

x = false;
console.log(+x);  // 0
console.log(x);   // false

x = 'Hello';
console.log(+x);  // NaN
console.log(x);   // "Hello"