/**
 * Author: Simon Lindholm
 * Date: 2015-03-19
 * License: CC0
 * Source: me
 * Description:
 */
#pragma once

auto cmp = [&](const pll &l, const pll &r) {
	return l > r;
};
priority_queue<pll, vt<pll>, decltype(cmp)> q(cmp);
