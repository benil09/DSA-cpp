

// 👉 Write a small snippet that shows the difference between copying: a primitive type and a refrence type

// Primitive type
let a=10;
b=a;
b=5;
console.log(b)

// refrence type
const obj={
    name:"nilkamal",
    roll:1,
}

const obj2=obj;
console.log(obj2);
obj2.name="Mannu";
console.log(obj);
console.log(obj2);


let n = 5;

if(n%2 === 0 && n>10){
    console.log("Valid")
}else{
    console.log("Invalid");
}

let day=5

switch(day){
    case 1:
        console.log("Monday");
        break;
    case 2:
        console.log("Tuesday");
        break;
    case 3:
        console.log("Wednesday");
        break;
    case 4:
        console.log("Thursday");
        break;
    case 5:
        console.log("Friday");
        break;
    case 6:
        console.log("Saturday");
        break;
    case 7:
        console.log("Sunday");
        break;
}


