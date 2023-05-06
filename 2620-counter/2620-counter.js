/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let currentcount=n-1;
    return function() {
        currentcount+=1;
        return currentcount;
    };
};

