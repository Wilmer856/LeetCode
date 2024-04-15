// 2665. Counter II
// Write a function createCounter. It should accept an initial integer init. It should return an object with three functions.

// The three functions are:

// increment() increases the current value by 1 and then returns it.
// decrement() reduces the current value by 1 and then returns it.
// reset() sets the current value to init and then returns it.
 

// Example 1:

// Input: init = 5, calls = ["increment","reset","decrement"]
// Output: [6,5,4]
// Explanation:
// const counter = createCounter(5);
// counter.increment(); // 6
// counter.reset(); // 5
// counter.decrement(); // 4
// Example 2:

// Input: init = 0, calls = ["increment","increment","decrement","reset","reset"]
// Output: [1,2,1,0,0]
// Explanation:
// const counter = createCounter(0);
// counter.increment(); // 1
// counter.increment(); // 2
// counter.decrement(); // 1
// counter.reset(); // 0
// counter.reset(); // 0
 

// Constraints:

// -1000 <= init <= 1000
// 0 <= calls.length <= 1000
// calls[i] is one of "increment", "decrement" and "reset"

// ------------------ Using Traditional Functions ------------------ 

var createCounter = function(init) {
    // save the initial value to 'num' to avoid altering the initial value 
    let num = init;
    
    function increment(){
        return ++num;
    }

    function decrement(){
        return --num;
    }

    function reset(){
        return (num = init);
    }

    return {increment, decrement, reset}
};

// ------------------ Using ES6 Arrow Functions ------------------ 

var createCounter = function(init) {
    // save the initial value to 'num' to avoid altering the initial value 
    let num = init; 
    return {
        increment: () => ++num,
        decrement: () => --num,
        reset: () => num = init,
    }
};

// ------------------ Using Classes ------------------ 

class Counter {
    constructor(init){
        this.init = init;
        this.num = init;
    }

    increment() {
        this.num += 1
        return this.num
    }

    decrement() {
        this.num -= 1
        return this.num
    }

    reset() {
        this.num = this.init
        return this.num
    }
    
}

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */

/**
 * cosnt counter = new Counter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); //4
 */