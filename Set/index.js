class Set {

    // getting objects or
    constructor(object) {
        // pointing the object ref to empty array
        this.object = [];
        // inserting the unique object to the empty array
        for (let index = 0; index < object.length; index++) {
            const element = object[index];
            // inserting the element only if it not already presnt in the existing array
            if (!this.object.includes(element)) {
                //pushing the element at the end of the object
                this.object.push(element)
            }
        }
        //returning the object
          return this.object

    }
}

let x = new Set([1, 3, 3, 4, 5])
console.log(x)