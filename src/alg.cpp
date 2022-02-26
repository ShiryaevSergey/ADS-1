// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
for (int i = 2; i < value; i++) {
if (value % i == 0)
return false;
}
return true;
}

uint64_t nPrime(uint64_t n) {
uint64_t a = 0;
uint64_t i = 2;
while (a < n) {
if (checkPrime(i)) {
a++;
}
i++;
}
return i - 1;
}

uint64_t nextPrime(uint64_t value) {
while (true) {
value++;
if (checkPrime(value)) {
break;
}
}
return value;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
for (int i = 2; i < hbound; i++) {
if (checkPrime(i) == 1)
sum += i;
}
return sum;
}
