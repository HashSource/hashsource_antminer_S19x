int __fastcall sub_26740(_DWORD *a1, int *a2, int a3)
{
  size_t v3; // r9
  unsigned int v6; // r1
  size_t v7; // r3
  unsigned int v8; // r12
  size_t v9; // r8
  unsigned int v10; // r4
  int result; // r0
  int v12; // r2
  const void *v13; // r1
  size_t v14; // r2
  unsigned int v15; // r3
  const void *v16; // r1
  size_t v17; // r3
  _DWORD *v18; // r0
  void *v19; // r0

  v6 = a2[2];
  v7 = bswap32(v6);
  if ( v7 > 0xFFE7 )
    sub_6FC54("ntp_crypto.c", 1774, 2, "vallen <= (65535 - (6 * 4))");
  v8 = a2[4];
  v9 = bswap32(v8);
  v10 = 4 * (((v7 + 3) >> 2) + 2 + ((v9 + 3) >> 2)) + 16;
  if ( v10 + a3 > 0x830 )
    return 0;
  result = *a2;
  v12 = a2[1];
  if ( !v7 )
    v3 = 0;
  a1[4] = v6;
  a1[2] = result;
  if ( !v7 )
    result = 1;
  a1[3] = v12;
  if ( v7 )
  {
    v13 = (const void *)a2[3];
    if ( v13 )
    {
      v3 = v7 >> 2;
      if ( v7 > 4 * (v7 >> 2) )
      {
        v14 = v3 + 4;
        ++v3;
        a1[v14 + 1] = 0;
      }
      memcpy(a1 + 5, v13, v7);
      v8 = a2[4];
      result = v3 + 1;
    }
    else
    {
      v3 = 0;
      result = 1;
    }
  }
  a1[v3 + 5] = v8;
  if ( v9 )
  {
    v16 = (const void *)a2[5];
    if ( v16 )
    {
      v17 = v9 >> 2;
      if ( v9 > 4 * (v9 >> 2) )
        v17 += result;
      v18 = &a1[result];
      if ( v9 > 4 * (v9 >> 2) )
      {
        v17 += 4;
        v12 = 0;
      }
      v19 = v18 + 5;
      if ( v9 > 4 * (v9 >> 2) )
        a1[v17 + 1] = v12;
      result = (int)memcpy(v19, v16, v9);
    }
  }
  v15 = bswap32(*(unsigned __int16 *)a1) | v10;
  if ( v10 <= 0xFFE7 )
    result = v10;
  *a1 = bswap32(v15);
  if ( v10 > 0xFFE7 )
    sub_6FC54("ntp_crypto.c", 1815, 1, "len <= (65535 - (6 * 4))");
  return result;
}
