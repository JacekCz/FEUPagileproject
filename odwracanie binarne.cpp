language: cpp
compiler:
  - gcc
  - clang
before_script:
  - ./configure --enable-version=18,19
script: rake
branches:
  only:
    - master
notifications:
  recipients:
    - evan+notify@phx.io
    - bford@engineyard.com
    - d.bussink@gmail.com
  email:
    on_success: change
    on_failure: always
rvm:
  - 1.8.7
  - 1.9.3

#include <iostream>

int main(){
int x=2;
int y=5;
int z;
z=x+y;
}