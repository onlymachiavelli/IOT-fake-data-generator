#include <bits/stdc++.h>

#include "firebase/app.h"
#include "firebase/auth.h"

using namespace std;    



int main () {

    firebase::App* app = firebase::App::Create(firebase::AppOptions());

    cout  << "Text" << endl;
    return 0 ; 

}