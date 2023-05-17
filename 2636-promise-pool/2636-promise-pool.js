var promisePool = async function(functions, n) {
    const initial = functions.slice(0,n);
    const remaining = functions.slice(n);
    const grabRemaining = () => remaining.length && remaining.shift()().then(grabRemaining);
    return Promise.all(initial.map((fn) => fn().then(grabRemaining)));
};