int __fastcall sub_160330(int *a1, int *a2, size_t a3)
{
  int v4; // r0
  int *v5; // r7
  size_t v6; // r4
  size_t v7; // r6
  int v8; // r0
  unsigned int v9; // r6
  size_t v10; // r4

  v4 = *a1;
  v5 = a2;
  v6 = a3;
  if ( v4 )
  {
    v7 = 8 - v4;
    v8 = (int)a1 + v4;
    if ( a3 < v7 )
    {
      memcpy((void *)(v8 + 4), a2, a3);
      *a1 += v6;
      return 1;
    }
    memcpy((void *)(v8 + 4), a2, v7);
    *a1 = 0;
    v6 -= v7;
    v5 = (int *)((char *)v5 + v7);
    sub_160220(a1, a1 + 1, 8u);
  }
  v9 = v6 & 0xFFFFFFF8;
  if ( (v6 & 0xFFFFFFF8) != 0 )
    sub_160220(a1, v5, v6 & 0xFFFFFFF8);
  v10 = v6 - v9;
  if ( v10 )
  {
    memcpy(a1 + 1, (char *)v5 + v9, v10);
    *a1 = v10;
  }
  return 1;
}
