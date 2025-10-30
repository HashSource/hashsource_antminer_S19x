void *__fastcall sub_3CD34(int *a1, const void *a2, size_t n)
{
  int v4; // r0
  size_t v7; // r3
  char *v8; // r0
  size_t v9; // r7
  void *result; // r0
  unsigned int v11; // r3
  unsigned int v12; // r4
  int v13; // r6
  size_t v14; // r7
  int v15; // r3

  v4 = a1[1];
  v7 = 64 - v4;
  v8 = (char *)a1 + v4 + 8;
  if ( n < v7 )
    v9 = n;
  else
    v9 = v7;
  result = memcpy(v8, a2, v9);
  v11 = n + a1[1];
  if ( v11 > 0x3F )
  {
    v12 = n - v9;
    v13 = (int)a2 + v9;
    v14 = v12 & 0x3F;
    v12 >>= 6;
    sub_3CAE0((int)a1, (int)(a1 + 2), 1);
    sub_3CAE0((int)a1, v13, v12);
    result = memcpy(a1 + 2, (const void *)(v13 + (v12 << 6)), v14);
    v15 = *a1;
    a1[1] = v14;
    *a1 = v15 + ((v12 + 1) << 6);
  }
  else
  {
    a1[1] = v11;
  }
  return result;
}
