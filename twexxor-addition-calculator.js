const _13_0 = [
	function(_13_0, _13_1) {
		return _13_0 + _13_1;
	},
	function(_13_0, _13_1) {
		return _13_0 - _13_1;
	}
];
const _13_1 = require('twexxor-exponent-converter');
const _13_2 = require('twexxor-numeric-validator');
const _13_3 = require('twexxor-string-repeater');

const twexxorAdditionCalculator = function(_13_4, _13_5) {
	_13_4 = [
		_13_4,
		_13_5
	];
	_13_5 = '';
	let _13_6 = {};
	let _13_7 = [];
	let _13_8 = [];
	let _13_9 = [];
	let _13_10 = 0;
	let _13_11 = 0;
	let _13_12 = 0;
	let _13_13 = 0;

	while (_13_10 !== 2) {
		_13_5 = _13_4[_13_10];

		if (_13_2(_13_5) === false) {
			return false;
		}

		_13_5 += '';
		_13_6 = {};
		_13_11 = _13_5.length;
		_13_12 = 0;

		while (_13_12 !== _13_11) {
			_13_6[_13_5[_13_12++]] = _13_12;
		}

		if (typeof _13_6['e'] === 'number') {
			_13_5 = _13_1(_13_5);
			_13_11 = _13_5.length;
			_13_12 = 0;

			while (_13_12 !== _13_11) {
				_13_6[_13_5[_13_12++]] = _13_12;
			}
		}

		if (typeof _13_6['.'] === 'undefined') {
			_13_5 += '.0';
			_13_6['.'] = _13_11;
		}

		_13_4[_13_10] = _13_5;
		_13_9[_13_11] = _13_10;
		_13_11 -= _13_6['.'];
		_13_7[_13_10] = _13_11;
		_13_8[_13_11] = _13_10++;
		_13_13 += _13_5[0].charCodeAt(0) - 45 === 0 - 0;
	}

	if (_13_7[0] !== _13_7[1]) {
		_13_5 = _13_8[_13_8.length - 1];
		_13_6 = (_13_5 === 0) - 0;
		_13_4[_13_6] += _13_3('0', _13_7[_13_5] - _13_7[_13_6]);
	}

	_13_5 = {'NaN': 1};
	_13_6 = '';
	_13_10 = [[0], [0]];
	_13_11 = [{}, {}];
	_13_12 = 0;
	let _13_14 = 0;
	let _13_15 = 0;
	let _13_16 = 0;

	while (_13_12 !== 2) {
		_13_14 = _13_4[_13_12].length;
		_13_15 = 0;
		_13_16 = 0;

		while (_13_15 !== _13_14) {
			if (typeof _13_5[_13_4[_13_12][_13_15++] - 0] === 'number') {
				_13_11[_13_12][_13_4[_13_12][_13_15 - 1]] = _13_15 - 1;
				continue;
			}

			_13_10[_13_12][_13_16++] = _13_4[_13_12][_13_15 - 1] - 0;
		}

		_13_12++;
	}

	_13_4 = _13_9.length;
	_13_5 = _13_9[_13_4 - 1];
	_13_6 = _13_10[_13_5];
	_13_7 = _13_6.length - 1;
	_13_8 = _13_10[(_13_5 === 0) - 0];
	_13_9 = _13_8.length - 1;
	_13_4 = '';
	_13_10 = '';
	_13_12 = 0;
	_13_13 &= 1;

	while (_13_9 !== 0) {
		_13_4 = _13_6[_13_7] - 0 + (_13_8[_13_9--] - 0);
		_13_4 += '';
		_13_10 = '';
		_13_12 = _13_7--;

		while (typeof _13_4[1] === 'string') {
			_13_10 = _13_4[1];
			_13_6[_13_12--] = _13_10 - 0;
			_13_10 = _13_7;

			if (typeof _13_6[_13_12] === 'undefined') {
				_13_6[_13_12] = 0;
			}

			_13_4 = _13_0[_13_13](_13_4[0], _13_6[_13_12]);
			_13_6[_13_12] = _13_4 - 0;
			// todo
		}
	}

	// todo
	return false;
};

if (typeof module !== 'undefined' && typeof module.exports !== 'undefined') {
	module.exports = twexxorAdditionCalculator;
}
