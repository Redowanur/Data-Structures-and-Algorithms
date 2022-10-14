//                          ;
//                          ED.
//                      ,;  E#Wi                                      L.
//   j.               f#i   E###G.                                    EW:        ,ft
//   EW,            .E#t    E#fD#W;                ;               .. E##;       t#E
//   E##j          i#W,     E#t t##L     .       .DL              ;W, E###t      t#E
//   E###D.       L#D.      E#t  .E#K,   f.     :K#L     LWL     j##, E#fE#f     t#E
//   E#jG#W;    :K#Wfffi;   E#t    j##f  EW:   ;W##L   .E#f     G###, E#t D#G    t#E
//   E#t t##f   i##WLLLLLt  E#t    :E#K: E#t  t#KE#L  ,W#;    :E####, E#t  f#E.  t#E
//   E#t  :K#E:  .E#L       E#t   t##L   E#t f#D.L#L t#K:    ;W#DG##, E#t   t#K: t#E
//   E#KDDDD###i   f#E:     E#t .D#W;    E#jG#f  L#LL#G     j###DW##, E#t    ;#W,t#E
//   E#f,t#Wi,,,    ,WW;    E#tiW#G.     E###;   L###j     G##i,,G##, E#t     :K#D#E
//   E#t  ;#W:       .D#;   E#K##i       E#K:    L#W;    :K#K:   L##, E#t      .E##E
//   DWi   ,KK:        tt   E##D.        EG      LE.    ;##D.    L##, ..         G#E
//                          E#t          ;       ;'     ,,,      .,,              fE
//                          L:                                                     ,

#include <bits/stdc++.h>
using namespace std;

int c = 0;

void DFS(int u, vector <bool>& vis, map <int, vector<int>> adj){
    vis[u] = true;
    cout << u << ' ';

    for(auto v: adj[u]){
        if(!vis[v]) DFS(v, vis, adj);
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int nodes, edges, src;
        map <int, vector<int>> adj;
        vector <bool> vis(100000, false);
        cin >> nodes >> edges >> src;

        while(edges--){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        cout << "Case " << ++c << ": ";
        DFS(src, vis, adj);
        cout << endl;
    }
    return 0;
}