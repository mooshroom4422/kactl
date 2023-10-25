/**
 * Author: Wiktor Cupiał
 * Date: 2023-10-25
 * License: CC0
 * Source: me
 * Description: 
 * Usage: auto edges = random_tree(n); // n -> number of vertices
 * Time: O(n)
 */
#pragma once

vt<pii> random_tree(int n) {
	vt<pii> edges(n-1);
	vt<int> id(n);
	iota(all(id), 1);
	shuffle(all(id), rng);
	for(int i=0; i<n-1; ++i) 
		edges[i] = {id[i], id[rand(i+1,n-1)]};
	return edges;
}
