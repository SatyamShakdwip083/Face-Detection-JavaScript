int n = 11, res = 0;
for (int i = 0; i < 3; i++) {
   res = res + ((n << i) ^ (n >> 1));
   n = n ^ i;
}
print(res);
