/**
 * Author: Simon Lindholm
 * Date: 2015-03-19
 * License: CC0
 * Source: me
 * Description:
 */
#pragma once

#define F {...; ++i;}
auto cmp = [&](const pll &l, const pll &r) {
	return lhs > rhs;
};
priority_queue<pll, vt<pll>, decltype(cmp)> q(cmp);
