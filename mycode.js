// console.log("hello nuranzhan!");
// console.log("hello dady");
// console.log("hello motherfuckers");
// console.log(2005);
// console.log("2005");
// console.log("nuran balzhan", 2005);
// console.log("nuran" + "balzhan" + "(2005)");
// console.log("nurancho");
// console.error("console.error");
// console.info("console.info");
// console.warn("console.warn");

// // var num;
// // num = 5;

// var num = 5;
// num = 7;
// console.log("variable", num);
// var nurancho = 2005;
// let noyan = 2003;
// console.log("i was born in", nurancho, num, noyan);

// let num1 = 20;
// let num2 = 5;
// let res = num1 - num2;
// console.log("result:", res)

// var num3 = "mama";
// let num4 = "papa";
// console.log("result:", (num3 + num4));

// let num5 = 10;
// num5 ++ ;
// console.log("result:", num5); // 11

// var str1 = "20";
// var str2 = "05";
// console.log(str1 + str2); // 2005

// let height = 180;
// let anotherHeight = height;
// console.log(height); // 180
// console.log(anotherHeight); // 180
// let weight = 70;
// let otherWeight = 70;
// console.log(weight); // 70

// height = 185;
// console.log(height); // 185

// let  steps  =  100;
// console.log(steps);  // 100
// steps  =  120;  // 120
// console.log(steps);
// steps  =  steps  +  200;
// console.log(steps);  // 320

// let steps = 100;
// console.log(steps);
// steps = 120;
// console.log(steps);
// steps += 200;
// console.log(steps);
// steps += 1000;
// console.log(steps); // 1320

// let  greeting  =  "Hello!";
// let  counter  =  100;
// console.log(greeting);  // Hello!
// greeting  =  1;
// console.log(greeting);  // 1
// greeting = greeting + counter;
// console.log(greeting);
// greeting = "hello";
// greeting += counter;
// console.log(greeting); // hello100

// console.log("math: " + Math.PI);

// const greeting = "hello";
// greeting = "how are u?"; //const изменить невозможно

// let counter;
// console.log(counter); //неопределено 
// {
//     counter = 1;
// }
// counter = counter + 1;
// console.log(counter); // 2

// let counter = 1;
// console.log(counter); // 1
// {
//     counter = 2;
//     {
//         console.log(counter); // 2
//     }
// }
// counter += 1;
// console.log(counter); // 3

// let height = 185;
// {
//     weight = 63;
//     console.log(height); // 185
//     console.log(weight); // 80   
    
// }
// console.log(height);
// console.log(weight);

// let height = 185; {
//     let weight = 85;
//     {
//         let info = "high"
//         console.log(height); // 185
//         console.log(weight); // 85
//         console.log(info); // high
//     }
//     console.log(height); // 185
//     console.log(weight); // 85
//     console.log(info); //  информация не определена в глобальном блоке
// }

// var  height  =  180;
// {
//          var  weight  =  70;
//          console.log(height);  //  ->  180
//          console.log(weight);  //  ->  70	
// }
// console.log(height);  //  ->  180
// console.log(weight);  //  ->  70 // var игнорирует обычные программные блоки

// function testFunction(){
//     console.log("hello");
//     console.log("world");
// }
// testFunction();

// var globalGreeting = "good"

// function testFunction(){
//     console.log(globalGreeting);
//     var localGreeting = "morning"
//     console.log(localGreeting);
//     console.log("nuranchoo");
//     console.log("function:");
// }

// testFunction();

// console.log("basic programm");
// console.log(globalGreeting); // good
// console.log(localGreeting); // не указано 

// let counter = 100;
// console.log(counter); // 100
// {
//     let counter = 200;
//     console.log(counter); // 200 будет только в локаольной зоне
// }
// console.log(counter); // 100

// let counter = 100;
// console.log(counter); // 100
// {
//     counter = 200; // теперь и в локальном и в глобальным зоне будет число 200
//     console.log(counter); // 200
// }
// console.log(counter); // 200 

// var counter = 100;

// function testFunction(){
//     var counter = 200;
//     console.log(counter); 
// }
// console.log(counter); // 100
// testFunction(); // 200
// console.log(counter); // 100

// var  height  =  180;
// console.log(height);    //  ->  180
// console.log(weight);    //  ->  undefined
// var  weight  =  70;
// console.log(weight);    //  ->  70


// let year = 2005;
// console.log(typeof year); // number
// console.log(typeof 2005); // number

// let name = "nuran";
// console.log(typeof name); // string
// console.log(typeof "nuran"); // string

// let typeOfYear = typeof year;
// console.log(typeOfYear); // number
// console.log(typeof typeOfYear); // string
// console.log(typeof false);

// let isDataValid = true;
// let isStringTooLong = false;
// let isGameOver = false;
// continueLoop = true;
// let name = "nuran"
// let year = 2005;

// console.log(false); // false
// console.log(typeof false); // boolean
// console.log(isDataValid); // true
// console.log(typeof name);
// console.log(typeof year);

// const year = 2005;
// let number = 5;
// let delayInSeconds = 0.00016;
// let area = (16 * 3.14);
// let halfArea = area / 2;

// console.log(year); // 2005
// console.log(typeof year); // number
// console.log(number);
// console.log(typeof area); // number
// console.log(area);
// console.log(halfArea);

// let a = 10;
// let b = 0x10;
// let c = 0o10;
// let d = 0b10;

// console.log(a); // 10
// console.log(b); // 16
// console.log(c); // 8
// console.log(d); // 2

// let x = 9e3;
// let y = 123e-5;
// console.log(x); // 9000
// console.log(y); // 0.00123

// let a = 1 / 0;
// let b = -Infinity


// console.log(a);
// console.log(b);
// console.log(typeof a); // number
// console.log(typeof b); // number

// let s = "It's definitely not a number";
// let n = s * 10;
// console.log(n); // NaN
// console.log(typeof n); // number

// let big2 = 1n;
// console.log(typeof big2); // bigint
// console.log(big2);
// let big3 = 10n + 55; // ошибка.  вы не можете добавить BigInt и Number друг к другу 

// console.log('hello "noyan" bratan');

// let test = 100 - 10;
// console.log(test); // 90

// let path = "noyan" - "nuran"; // в string моджно только +
// console.log(path); // NaN   для string мы не можем использовать - * /

// let country = "kazakhstan";
// let city = "shymkent";

// let sentence = `${city} is in the ${country}`;
// console.log(sentence);  

// let city = "rzeszow"
// let country = "poland"

// let sentence = `${city} is the stinkiest city in ${country}`;
// console.log(sentence);

// console.time();
// console.timeEnd();

// let word = "nurancho";
// let character = word.charAt(1);
// console.log(character); // u

// let word = "hala madrid"
// let character = word.slice(5, 11);
// console.log(character); // madrid

// let str = "java script language"
// console.log(str.length); // 20
// console.log('test'.length); // 4
// console.log(str.charAt(0)); // j
// console.log('abc'.charAt(1)); // b
// console.log(str.slice(0, 4)); // java
// console.log('test'.slice(1, 3)); // es
// console.log(str.split(' ')); // ['java', 'script', 'language']
// console.log('192.168.01.02'.split('.')); // ['192', '168', '1', '1']
// console.log('nurancho'.slice(2, 5)); // ran

// let declaredVar;
// console.log(typeof declaredVar); // undefined

// declaredVar = 5;
// console.log(typeof declaredVar); // number

// let word = "nuran";
// console.log(typeof word); // string

// someResource = null;
// console.log(someResource); // null
// console.log(typeof someResource); // object

// const str = String();
// const num = Number();
// const bool = Boolean();

// console.log(str); // 
// console.log(num); // 0
// console.log(bool); // false

// let str = "text";
// let strStr = String(str);
// console.log(`${typeof str} : ${str}`);
// console.log(`${typeof strStr} : ${strStr}`);

// let num = 10;
// let str = String(num);
// console.log(`${typeof num} : ${num}`); // number
// console.log(`${typeof str} : ${str}`); // string

// let un = undefined;
// let str = String(un);
// console.log(`${typeof un} : ${un}`); // undefined : undefined
// console.log(`${typeof str} : ${str}`); // string : undefined

// console.log(Number(42)); // 42
// console.log(Number(true)); // 1
// console.log(Number(false)); // 0
// console.log(Number(undefined)); // NaN
// console.log(Number(null)); // 0

