int __fastcall sub_6D610(const void **a1, void *src, size_t n)
{
  unsigned int v4; // r3
  size_t v7; // r0
  char *v8; // r8
  unsigned int v9; // r3
  unsigned int v10; // r0
  void *v11; // r6
  char *v12; // r0
  char *v13; // r2
  size_t v15; // r5

  v4 = (unsigned int)a1[2];
  v7 = (size_t)a1[1];
  if ( v4 - v7 > n )
  {
    v8 = (char *)*a1;
LABEL_10:
    memcpy(&v8[v7], src, n);
    v13 = (char *)*a1;
    v15 = (size_t)a1[1] + n;
    a1[1] = (const void *)v15;
    v13[v15] = 0;
    return 0;
  }
  if ( !((n == -1) | (v4 >> 31)) && -2 - n >= v7 )
  {
    v9 = 2 * v4;
    v10 = n + 1 + v7;
    v11 = (void *)(v10 < v9 ? v9 : v10);
    v12 = (char *)sub_6D500(v11);
    v8 = v12;
    if ( v12 )
    {
      memcpy(v12, *a1, (size_t)a1[1]);
      sub_6D518((void *)*a1);
      v7 = (size_t)a1[1];
      *a1 = v8;
      a1[2] = v11;
      goto LABEL_10;
    }
  }
  return -1;
}
