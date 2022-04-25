const 13_0 = require('twexxor-exponent-converter');
const 13_1 = require('twexxor-numeric-validator');

const twexxorAdditionCalculator = function(_13_2, _13_3) {
	_13_2 = [
		_13_2,
		_13_3
	];
	_13_3 = {};
	let _13_4 = 0;
	let _13_5 = 0;
	let _13_6 = 0;

	while (_13_4 !== 2) {
		if (_13_1(_13_2[_13_4]) === false) {
			return false;
		}

		_13_2 += '';
		_13_3 = {};
		_13_5 = _13_2[_13_4].length;

		while (_13_6 !== _13_5) {
			_13_3[_13_2[_13_4]] = 1;
		}

		// todo
	}

	// todo
	return false;
};

if (typeof module !== 'undefined' && typeof module.exports !== 'undefined') {
	module.exports = twexxorAdditionCalculator;
}
