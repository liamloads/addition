``` console
npm install twexxor-addition-calculator
```
``` javascript
const twexxorAdditionCalculator = require('twexxor-addition-calculator');
twexxorAdditionCalculator('1', 10); // '11'
twexxorAdditionCalculator('3', '4'); // '7'
twexxorAdditionCalculator(Infinity, '0'); // Infinity
twexxorAdditionCalculator(Infinity, '1'); // false
twexxorAdditionCalculator('0.000000000000000000000000000000000000000000000000100', '0.000000000000000000000000000000000000000000000000100'); // '0.000000000000000000000000000000000000000000000000200'
twexxorAdditionCalculator('123456789123456789123456789123456789123456789123456789', '1'); // '123456789123456789123456789123456789123456789123456790'
twexxorAdditionCalculator(1, -2); // '-1'
```
