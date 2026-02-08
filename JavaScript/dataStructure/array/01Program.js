const str = ['a', 'b', 'c', 'd'];

console.log(str);

//Push
str.push('e'); //O(1) - Add an element to the end of the array
console.log(str);

str.pop(); //O(1) - Remove the last element from the array
console.log(str);

str.unshift('x'); //O(n) - Add an element to the beginning of the array
console.log(str);

str.shift(); //O(n) - Remove the first element from the array
console.log(str);

str.splice(1, 0, 'y'); //O(n) - Add an element at a specific index
console.log(str);

str.splice(1, 1); //O(n) - Remove an element at a specific index
console.log(str);