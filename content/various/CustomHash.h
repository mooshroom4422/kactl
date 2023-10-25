/**
 * Author: Wiktor Cupiał
 * Date: 2023-10-25
 * License: CC0
 * Source: me
 * Description:
 */
#pragma once

namespace std {
    template<>
    struct hash<tuple<int, int, int>> {
        size_t operator()(const tuple<int, int, int> &t) const {
            return (1LL*get<0>(t)*1696969*1696969) ^ (1LL*get<1>(t)*1696969) ^ get<2>(t);
        }
    };
}
