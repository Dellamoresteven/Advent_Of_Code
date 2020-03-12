#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <string>
#include <openssl/md5.h>

using namespace std;

QByteArray AESWrapper::md5 ( const QByteArray& data) {
    unsigned char * hash;
    hash = MD5((const unsigned char*)data.constData(), data.length(), NULL);
    return QByteArray((const char*)hash, MD5_DIGEST_LENGTH);
}

int main() {
    string code = "ckczppom";
    string newCode = "";
    int numC = 0;
    while(true) {
        newCode = code += to_string(numC);

    }
}
