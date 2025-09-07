/**
 * Author: Lukas Polacek
 * Date: 2009-09-28
 * License: CC0
 * Source: folklore
 * Description: Operators for modular arithmetic. You need to set {\tt mod} to
 * some number first and then you can use the structure.
 */
#pragma once

#include "euclid.h"

template<ll mod>
struct mint {
	ll x;
	mint() : x(0) {}
	mint(ll x) : x(x) {}

	mint& operator+=(mint const& v) { x += v.x; if(x >= mod) x -= mod; return *this; }
	mint& operator-=(mint const& v) { x -= v.x; if(x < 0) x += mod; return *this; }
	mint& operator*=(mint const& v) { x = (x*v.x)%mod; return *this; }
	mint& operator/=(mint const& v) { return *this *= v.inv(); }
	friend mint operator+(mint const& l, mint const& r) { return mint(l) += r; }
	friend mint operator-(mint const& l, mint const& r) { return mint(l) -= r; }
	friend mint operator*(mint const& l, mint const& r) { return mint(l) *= r; }
	friend mint operator/(mint const& l, mint const& r) { return mint(l) /= r; }
	friend bool operator<(mint const& l, mint const& r) { return l.x < r.x; }
	friend bool operator==(mint const& l, mint const& r) { return l.x == r.x; }
	friend bool operator!=(mint const& l, mint const& r) { return l.x != r.x; }
	mint inv() const { return bpow(x, mod-2); }

	static mint bpow(mint a, ll b) {
		mint res = 1;
		while(b > 0) {
			if(b&1)
				res = res*a;
			a = a*a;
			b >>= 1;
		}
		return res;
	}

	friend ostream& operator<<(ostream& out, const mint& v) {
		return out << "mint{" << v.x << ", " << mod << "}";
	}
};
