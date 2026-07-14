// let product : string = "Shoes"
// const h1 = document.createElement("h1")
// h1.textContent = product
// document.body.appendChild(h1)
const reverseText = (text) => {
    return text.split(' ').reverse().join('');
};
const h1 = document.createElement("h1");
h1.textContent = reverseText("Leman");
document.body.appendChild(h1);
function getProduct(id) {
    return {
        id,
        name: 'Urun #' + id,
        price: 55,
        test: true
    };
}
const product = getProduct(1);
product.name;
export {};
//# sourceMappingURL=test.js.map