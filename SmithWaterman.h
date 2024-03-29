#ifndef SMITHWATERMAN_H
#define SMITHWATERMAN_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// modify statistics here to change the way to specify similar sequence
//=====================================================================//
/**/                     const int s_same   = 8;                       //
/**/                     const int s_diff   = -5;                      //
/**/                     const int gap_open = -7;                      //
/**/                     const int gap_ext  = -3;                      //
//=====================================================================//


class node
{
    private:
        int data;
        int E;
        int F;
        vector<node*> parent;
        bool same;
        int row;
        int col;
    public:
        node();
        node(bool s, int r, int c);
        ~node(){};
        int get_data(){return data;}
        int get_row(){return row;}
        int get_col(){return col;}
        int get_E(){return E;}
        int get_F(){return F;}
        bool get_same();
        void write_data(node*& left, node*& up, node*& left_up);
        int how_many_parent();
        node* get_parent(int index);
};

void search(node*& root, node*& now, vector<int>& path, vector<char>& A, vector<char>& B, int& count);
void path_print(node*& root, vector<int>& path, vector<char>& A, vector<char>& B, int& count);

#endif