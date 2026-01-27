const names = ["albin"]

const findName = (array) => {
    for (let i=0; i< array.length; i++) {
      if(array[i] === 'albin') {
        console.log('Found Albin!')
      }
    }
}

findName(names)

// Big O Notattion: O(n) - Linear Time Complexity