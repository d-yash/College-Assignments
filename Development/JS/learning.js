// let str = "yash"
// str = str + 42
// console.log(str)

const PromptSync = require("prompt-sync");

// const a = {
//     yash : 24,
//     tosha : 30
// }

// a["aman"] = 44
// console.log(a["aman"])

// const prompt=require("prompt-sync")({sigint:true});
// let age = prompt("Enter the age : ");
// if(age > 10 && age < 20)
//     console.log("Perfect age");
// else 
//     console.log("naah");

// let num = parseInt(prompt("Enter the number : "));

// switch (num) {
//     case 1:
//         console.log("One");
//         break;
//     case 2:
//         console.log("Two");
//         break;
//     default:
//         console.log("Please provide the number ...")
//         break;
// }

// if(num % 2 == 0 || num % 3 == 0)
//     console.log("yess")
// else 
//     console.log("naah")


// console.log(num>18 ? "Yes, you can drive" : "No, you can't drive");

// let ans = demoFunc()

// function demoFunc(){
//     console.log("hello")
//     return 41;
// }

// console.log(ans)

// const anotherWay = ()=>{
//     console.log("Okay this is good")
//     let a = 1
//     let b = 2
//     return a+b
// }

// var keyvalue = anotherWay()
// console.log(keyvalue)

// const studentObj = {
//     yash : 99, 
//     manan : 15,
//     vivek : 85 
// }
// for(let i=0; i<3; i++){
//     console.log(studentObj[i] )
// }
// for(let i in studentObj){
//     console.log("Marks of " + i + " : " + studentObj[i])
// }


// const prompt = require("prompt-sync")({sigint:true})
// let i = 1
// let sum = 0
// while(i <= 5){
//     num = parseInt(prompt("Enter the value : "))
//     sum += num
//     i++
// }
// console.log(sum/5)

// let a = [1,4,6,7,1,2,-7,56,12]
// a.sort((a, b) => a-b)
// console.log(a)
// console.log(a.reverse())

// let a = [1,4,6,7,8]

// for(let i=0; i<a.length; i++){
//     //classical
//     console.log(a[i])
// }

// a.forEach((i) => {
//     //for each
//     console.log(i)
// })

// let name = "yash"
// let arr = Array.from(name)
// console.log(arr)

// // for(let i of a){
// //     //for of
// //     console.log(i)
// // }

// for(let i in a){
//     //for in
//     console.log(a[i])
// }

// const prompt = require("prompt-sync")({sigint:true})

// let arr = []
// let temp = 1;
// while(temp != 0){
//     temp = parseInt(prompt("Enter the number : "))
//     arr.push(temp)
// }

// console.log(arr)

// let arr = [1,4,5,6,8,10,20,5,25,30,100,500]

// let divisibleBy10 = arr.filter((value) =>{
//     return (value%10 == 0)
// })

// console.log(divisibleBy10)

const arr = [1, 2, 3, 4, 5]
// let ans = arr.map((value) => {
//     return value*value
// })

// console.log(ans)

let fact = arr.reduce((subAns, value) =>{
    return subAns*value
})

console.log(fact)