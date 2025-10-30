int __fastcall sub_1390C(const void **a1, void *src, size_t n)
{
  size_t v4; // r3
  int v7; // r0
  char *v8; // r6
  unsigned int v9; // r0
  void *v10; // r8
  char *v11; // r0
  char *v12; // r1
  size_t v14; // r5

  v4 = (size_t)a1[1];
  v7 = (int)a1[2];
  if ( v7 - v4 > n )
  {
    v8 = (char *)*a1;
LABEL_10:
    memcpy(&v8[v4], src, n);
    v12 = (char *)*a1;
    v14 = (size_t)a1[1] + n;
    a1[1] = (const void *)v14;
    v12[v14] = 0;
    return 0;
  }
  if ( v7 >= 0 && n != -1 && v4 <= -2 - n )
  {
    v9 = 2 * v7;
    v10 = (void *)(v4 + 1 + n);
    if ( (unsigned int)v10 < v9 )
      v10 = (void *)v9;
    v11 = (char *)sub_13828(v10);
    v8 = v11;
    if ( v11 )
    {
      memcpy(v11, *a1, (size_t)a1[1]);
      sub_1383C((void *)*a1);
      v4 = (size_t)a1[1];
      *a1 = v8;
      a1[2] = v10;
      goto LABEL_10;
    }
  }
  return -1;
}
