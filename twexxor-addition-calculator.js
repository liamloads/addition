const _13_0 = {'NaN': 1};
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

	while (_13_10 !== 2) {
		_13_5 = _13_4[_13_10];

		if (_13_2(_13_5) === false) {
			return false;
		}

		_13_5 += '';
		_13_11 = (_13_5[0] === '-') - 0;

		if (_13_5[_13_11] === '0' && typeof _13_0[_13_5[_13_11 + 1] - 0] === 'undefined') {
			_13_4[_13_10] = '';

			if (_13_11 === 1) {
				_13_4[_13_10] = '-';
			}

			while (_13_5[_13_11] === '0') {
				_13_11++;
			}

			_13_12 = _13_5.length;

			while (_13_11 !== _13_12) {
				_13_4[_13_10] += _13_5[_13_11++];
			}
		}

		if (_13_4[_13_10++] === '-0') {
			_13_4[_13_10 - 1] = '0';
		}
	}

	_13_5 = '';
	_13_10 = 0;
	_13_11 = 0;
	_13_12 = 0;
	let _13_13 = 0;

	while (_13_10 !== 2) {
		_13_5 = _13_4[_13_10];
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
			_13_6['.'] = _13_11++;
		}

		_13_4[_13_10] = _13_5;
		_13_9[_13_11] = _13_10;
		_13_11 -= _13_6['.'];
		_13_7[_13_10] = _13_11;
		_13_8[_13_11] = _13_10++;
		_13_13 += (_13_5[0] === '-') - 0;
	}

	_13_5 = _13_8.length - 1;
	_13_6 = _13_8[_13_5];

	if (_13_7[0] !== _13_7[1]) {
		_13_6 = _13_8[_13_5];
		_13_8 = (_13_6 === 0) - 0;
		_13_4[_13_8] += _13_3('0', _13_7[_13_6] - _13_7[_13_8]);
		_13_5 = _13_9.length;
		_13_5--;
		_13_6 = _13_4[_13_8].length;
		_13_8 = (_13_9[_13_5] === 0) - 0;
		_13_7[_13_8] = _13_7[_13_9[_13_5]];
		_13_9[_13_6] = _13_8;
		_13_6 = 0;
	}

	if (_13_13 === 1) {
		_13_5 = {};
		_13_8 = 0;
		_13_10 = 0;
		_13_11 = 0;
		_13_12 = 0;
		_13_13 = 21;

		while (_13_8 !== 2) {
			_13_10 = _13_4[_13_8].length - ((_13_4[_13_8][0] === '-') - 0);
			_13_5[_13_10] = _13_8++;
			_13_12 = _13_11 - _13_10;
			_13_12 += '';

			if (_13_12[0] === '-') {
				_13_11 = _13_10;
			}
		}

		if (_13_5.length === 1) {
			// todo
		}
	}

	_13_5 = _13_7[_13_6];
	_13_6 = [[0], [0]];
	_13_8 = [{}, {}];
	_13_10 = 0;
	_13_11 = 0;
	_13_12 = 0;
	let _13_14 = 0;

	while (_13_10 !== 2) {
		_13_11 = _13_4[_13_10].length;
		_13_12 = 0;
		_13_14 = 1;

		while (_13_12 !== _13_11) {
			if (typeof _13_0[_13_4[_13_10][_13_12++] - 0] === 'number') {
				_13_8[_13_10][_13_4[_13_10][_13_12 - 1]] = _13_12 - 1;
				continue;
			}

			_13_6[_13_10][_13_14++] = _13_4[_13_10][_13_12 - 1] - 0;
		}

		_13_10++;
	}

	_13_4 = 1 + (typeof _13_8[1]['-'] === 'number') - 0;
	_13_10 = _13_9.length;
	_13_11 = _13_9[_13_10 - 1];
	_13_9 = _13_6[_13_11];
	_13_12 = _13_9.length - 1;
	_13_14 = _13_6[(_13_11 === 0) - 0];
	let _13_15 = '';
	let _13_17 = _13_14.length - 1;
	let _13_18 = 0;
	let _13_19 = [
		function() {
			while (_13_17 !== -1) {
				_13_15 = _13_9[_13_12] - 0 + (_13_14[_13_17--] - 0);
				_13_9[_13_12] = _13_15;
				_13_15 += '';
				_13_18 = _13_12--;

				while (typeof _13_15[1] === 'string') {
					_13_9[_13_18--] = _13_15[1] - 0;
					_13_15 = (_13_15[0] - 0) + _13_9[_13_18];
					_13_9[_13_18] = _13_15 - 0;
				}
			}

			return _13_9;
		},
		function() {
			while (_13_17 !== -1) {
				_13_15 = _13_9[_13_12] - _13_14[_13_17];
				_13_9[_13_12] = _13_15;
				_13_15 += '';
				_13_18 = _13_12--;

				if (_13_15[0] === '-') {
					_13_9[_13_18] = ('1' + (_13_14[_13_17] + _13_9[_13_18--])) - _13_14[_13_17];
					_13_15 = _13_9[_13_18] - 1;
					_13_9[_13_18--] = _13_15;
					_13_15 += '';

					while (_13_15[0] === '-') {
						_13_15 = _13_9[_13_18] - 1;
						_13_9[_13_18] = _13_15;
						_13_9[_13_18-- + 1] = 9;
						_13_15 += '';
					}
				}

				_13_17--;
			}

			return _13_9;
		}
	];
	_13_9 = _13_19[_13_13 & 1]();
	_13_4 = _13_9.length;
	_13_5 = _13_4 - _13_5;
	_13_6 = 0;
	_13_7 = 0;

	while (_13_6 === 0) {
		_13_6 = ((_13_9[_13_7] !== 0) || (_13_7++ === _13_5)) - 0;
	}

	_13_6 = _13_5 - _13_7;
	_13_6 += '';

	if (_13_6[0] === '-') {
		_13_5 = _13_7;
	}

	_13_6 = '';

	while (_13_7 !== _13_5) {
		_13_6 += _13_9[_13_7++];
	}

	_13_4--;
	_13_7 = 0;

	while (_13_7 === 0) {
		_13_7 = ((_13_9[_13_4] !== 0) || (_13_4-- === _13_5)) - 0;
	}

	if (_13_4++ === -1) {
		return '0';
	}

	if (_13_4 !== _13_5) {
		_13_6 += '.';

		while (_13_5 !== _13_4) {
			_13_6 += _13_9[_13_5++];
		}
	}

	_13_13 += '';

	if (_13_13[0] === '2') {
		_13_6 = '-' + _13_6;
	}

	return _13_6;
};

if (typeof module !== 'undefined' && typeof module.exports !== 'undefined') {
	module.exports = twexxorAdditionCalculator;
}
