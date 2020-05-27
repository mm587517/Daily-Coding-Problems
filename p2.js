// This problem was asked by Uber.
// Given an array of integers, return a new array such that each element at index i of the new array is
// the product of all the numbers in the original array except the one at i.
// For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24].
//  If our input was [3, 2, 1], the expected output would be [2, 3, 6].
// Follow-up: what if you can't use division?

//with division
const arr = [1, 2, 3, 4, 5];

const mult = arr.reduce((total = 1, curr) => (total *= curr));
const ans = arr.map((curr) => mult / curr);

console.log(`Using Division: [ ${ans} ]`);

//No division

//we can create 2 separate arrays:
// leftToRight- which will hold the products of the previous ith elements
// and
// rightToLeft- which will hold the products for the next ith elements
//if we wish to find  the overall product divided by the ith element we just need to multiply leftToRight[i-1]*rightToLeft[i+1]

const leftToRight = [];
let total = 1;

for (let i = 0; i < arr.length; i++) {
  total *= arr[i];
  leftToRight.push(total);
}

const rightToLeft = [];
total = 1;

for (let i = arr.length - 1; i >= 0; i--) {
  total *= arr[i];
  rightToLeft[i] = total;
}

const ans2 = [];
let prod;

for (let i = 0; i < arr.length; i++) {
  prod = 1;
  if (i === 0) {
    prod = rightToLeft[i + 1];
  } else if (i === arr.length - 1) {
    prod = leftToRight[i - 1];
  } else {
    prod = leftToRight[i - 1] * rightToLeft[i + 1];
  }

  ans2.push(prod);
}

console.log(`No division: [ ${ans2} ]`);
