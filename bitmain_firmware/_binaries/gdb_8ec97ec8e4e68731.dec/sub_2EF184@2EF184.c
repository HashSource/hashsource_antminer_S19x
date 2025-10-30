_BYTE *__fastcall sub_2EF184(_BYTE *a1, unsigned int a2, int *a3)
{
  bool v3; // zf
  unsigned int v4; // r3
  char v5; // r1
  char v6; // r12
  _BYTE *v7; // r4
  int v8; // r3
  unsigned int v9; // r3
  _BYTE *v10; // r0
  char v11; // r1
  unsigned int i; // r3
  const char *v13; // r6
  size_t v14; // r5
  void *v15; // r0
  char v17; // r12

  v4 = a2 >> 7;
  v3 = a2 >> 7 == 0;
  v5 = a2 & 0x7F;
  if ( !v3 )
  {
    do
    {
      v6 = v5 | 0x80;
      v5 = v4 & 0x7F;
      v4 >>= 7;
      *a1++ = v6;
    }
    while ( v4 );
  }
  *a1 = v5;
  v7 = a1 + 1;
  v8 = *a3;
  if ( (*a3 & 1) != 0 )
  {
    v9 = a3[1];
    v10 = a1 + 1;
    v11 = v9 & 0x7F;
    for ( i = v9 >> 7; i; ++v10 )
    {
      v17 = v11 | 0x80;
      v11 = i & 0x7F;
      i >>= 7;
      *v10 = v17;
    }
    *v10 = v11;
    v7 = v10 + 1;
    v8 = *a3;
  }
  if ( (v8 & 2) != 0 )
  {
    v13 = (const char *)a3[2];
    v14 = strlen(v13) + 1;
    v15 = v7;
    v7 += v14;
    memcpy(v15, v13, v14);
  }
  return v7;
}
