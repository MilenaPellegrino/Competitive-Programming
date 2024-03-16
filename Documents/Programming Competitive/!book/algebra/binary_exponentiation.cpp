
ll binpow(ll a, ll b) { // ll m
	// a %=m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a; // res = res * a % m;
        a = a * a; // a = a * a % m;
        b >>= 1;
    }
    return res;
}
