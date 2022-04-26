const 13_0 = require('twexxor-exponent-converter');
const 13_1 = require('twexxor-numeric-validator');

const twexxorAdditionCalculator = function(_13_2, _13_3) {
	_13_2 = [
		_13_2,
		_13_3
	];
	_13_3 = '';
	let _13_4 = {};
	let _13_5 = [];
	let _13_6 = 0;
	let _13_7 = 0;
	let _13_8 = 0;
	let _13_9 = 0;

	while (_13_6 !== 2) {
		_13_3 = _13_2[_13_6];

		if (_13_1(_13_3) === false) {
			return false;
		}

		_13_3 += '';
		_13_4 = {};
		_13_7 = _13_3.length;
		_13_8 = 0;

		while (_13_8 !== _13_7) {
			_13_4[_13_3[_13_8++]] = 1;
		}

		if (typeof _13_4['e'] === 'number') {
			_13_3 = _13_0(_13_3);
			_13_7 = _13_3.length;
		}

		_13_2[_13_6] = _13_3;
		_13_5[_13_7] = _13_6++;
		_13_9 += _13_3[0].charCodeAt(0) - 45 === 0 - 0;
	}

	_13_3 = _13_2[_13_5[_13_5.length - 1]];
	_13_4 = _13_2[(_13_3 === 0) - 0];
	_13_9 &= 1;
	// todo
	return false;
};

if (typeof module !== 'undefined' && typeof module.exports !== 'undefined') {
	module.exports = twexxorAdditionCalculator;
}
