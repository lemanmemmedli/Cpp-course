
// let product : string = "Shoes"

// const h1 = document.createElement("h1")
// h1.textContent = product
// document.body.appendChild(h1)

const reverseText = (text: string) =>{
    return text.split(' ').reverse().join('')
}

const h1 = document.createElement("h1");
h1.textContent = reverseText("Leman");

document.body.appendChild(h1);


interface Product{
    id:number,
    name:string,
    price:number,
    test:boolean
}

function getProduct (id :number) : Product{
    return{
        id,
        name:'Urun #' + id,
        price:55,
        test:true
    }
}

const product =getProduct(1)

product.name
