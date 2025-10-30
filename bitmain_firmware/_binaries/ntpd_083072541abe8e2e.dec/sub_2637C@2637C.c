unsigned int __fastcall sub_2637C(_DWORD *a1, int *a2, int a3)
{
  unsigned int v4; // r12
  size_t v5; // r3
  unsigned int v6; // lr
  size_t v8; // r8
  unsigned int result; // r0
  unsigned int v10; // r4
  int v11; // r1
  int v12; // r2
  int v13; // r9
  const void *v14; // r1
  const void *v15; // r1
  int v16; // r10
  int v17; // r0
  _DWORD *v18; // r2

  v4 = a2[2];
  v5 = bswap32(v4);
  if ( v5 > 0xFFE7 )
    sub_6ECC0("ntp_crypto.c", 1774, 2, "vallen <= (65535 - (6 * 4))");
  v6 = a2[4];
  v8 = bswap32(v6);
  result = (v8 + 3) & 0xFFFFFFFC;
  v10 = ((v5 + 3) & 0xFFFFFFFC) + 24 + result;
  if ( a3 + v10 > 0x830 )
    return 0;
  v11 = *a2;
  v12 = a2[1];
  a1[4] = v4;
  a1[2] = v11;
  a1[3] = v12;
  if ( v5 )
  {
    v15 = (const void *)a2[3];
    if ( v15 )
    {
      v16 = v5 >> 2;
      v13 = (v5 >> 2) + 1;
      if ( (v5 & 0xFFFFFFFC) < v5 )
      {
        v17 = v16 + 2;
        v18 = &a1[v16 + 4];
        v16 = (v5 >> 2) + 1;
        v13 = v17;
        v18[1] = 0;
      }
      result = (unsigned int)memcpy(a1 + 5, v15, v5);
      v5 = v16;
      v6 = a2[4];
      goto LABEL_5;
    }
    v5 = 0;
  }
  v13 = 1;
LABEL_5:
  a1[v5 + 5] = v6;
  if ( v8 )
  {
    v14 = (const void *)a2[5];
    if ( v14 )
    {
      if ( (v8 & 0xFFFFFFFC) < v8 )
        a1[v13 + 5 + (v8 >> 2)] = 0;
      result = (unsigned int)memcpy(&a1[v13 + 5], v14, v8);
    }
  }
  if ( v10 <= 0xFFE7 )
    result = v10;
  *a1 = bswap32(bswap32(*(unsigned __int16 *)a1) | v10);
  if ( v10 > 0xFFE7 )
    sub_6ECC0("ntp_crypto.c", 1815, 1, "len <= (65535 - (6 * 4))");
  return result;
}
