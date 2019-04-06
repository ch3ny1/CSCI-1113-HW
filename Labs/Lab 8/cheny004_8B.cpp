// Chenyi Wang
// Lab 8 Warm-up 2

a)
	if (n/10 == 0)
		cout << n << endl;
	return;
b)
	cout << n%10;

c)
	reverseNum(n/10);

d)
	if (n/10 == 0){
		cout << n << endl;
		return;
	}
	else{
		cout << n%10;
		reverseNum(n/10);
		return;
	}

e)
	void reverseNum(int n){
		if (n/10 == 0){
			cout << n << endl;
			return;
		}
		else{
			cout << n%10;
			reverseNum(n/10);
			return;
			}
		}
