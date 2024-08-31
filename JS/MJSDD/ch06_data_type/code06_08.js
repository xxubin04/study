// 심벌 값 생성
var key = Symbol('key');
console.log(typeof key);  // symbol

// 객체 생성
var obj = {};

// 유일무이한 값인 시벌을 프로퍼티 키로 사용함
obj[key] = 'value';
console.log(obj[key]);  // value