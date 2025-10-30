_DWORD *__fastcall sub_A8668(int *a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int v6; // r1
  int v7; // r2

  v4 = (_DWORD *)CRYPTO_malloc(16, "ssl/pqueue.c", 20);
  v5 = v4;
  if ( v4 )
  {
    v6 = *a1;
    v7 = a1[1];
    v4[2] = a2;
    *v4 = v6;
    v4[1] = v7;
    v4[3] = 0;
  }
  else
  {
    sub_D0048(20, 624, 65, "ssl/pqueue.c", 23);
  }
  return v5;
}
