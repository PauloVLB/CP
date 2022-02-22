#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

struct segtree{
    vector<int> seg;
    
    int size;
    int neutro;
    int f(int a,int b){
        return __gcd(a,b);
    }
    segtree(vector<int>&v,int neu=0){
        int n=1;
        while(n<v.size()) n=n<<1;
        seg.assign(2*n,neu);

        size=n;
        neutro=neu;
        build(v,0,0,size);
    }
    void build(vector<int>& v,int x,int lx,int rx){
        //cout<<x<<" "<<lx<<" "<<rx<<endl;
        if (rx-lx==1){
            if (lx<v.size()) seg[x]=v[lx];
            return;
        }
        int mid = lx + (rx-lx)/2;
        build(v,2*x+1,lx,mid);
        build(v,2*x+2,mid,rx);
        seg[x]=f(seg[2*x+1],seg[2*x+2]);
    }
    
    void set(int index,int valor,int x,int lx,int rx){
        if(rx-lx==1){
            seg[x]=valor;
            return;
        }
        int mid=lx+(rx-lx)/2;
        if (index<mid){
            set(index,valor,2*x+1,lx,mid);
        }
        else{
            set(index,valor,2*x+2,mid,rx);
        }
        seg[x]=f(seg[2*x+1],seg[2*x+2]);
    }

    void set(int index,int valor){
        set(index,valor,0,0,size);
    }
    //l=0,r=3,x=0,lx=0,rx=8
    int query(int l,int r,int x,int lx,int rx){
        if (r<=lx || l>=rx) return neutro;
        if (lx>=l && rx<=r) return seg[x];
        int mid = lx+(rx-lx)/2;
        return f(query(l,r,2*x+1,lx,mid),query(l,r,2*x+2,mid,rx));
    }
    
    int query(int l,int r){
        return query(l,r,0,0,size);
    }
};


int main() {_
    int q; cin >> q;
    int g = 0;
    vector<int> v = vector<int> (q, 0);
    segtree seg(v, 0);
    map<int, vector<int>> pos;
    int pont = 0;
    for(int i = 0; i < q; i++) {
        char op;
        int x;
        cin >> op >> x;
        if(op == '+') {
            seg.set(pont, x);
            pos[x].push_back(pont++);
        } else {
            seg.set(pos[x].back(), 0);
            pos[x].pop_back();
        }
        int g = seg.query(0, q+1);
        cout << (g == 0 ? 1 : g) << endl;
    }
}