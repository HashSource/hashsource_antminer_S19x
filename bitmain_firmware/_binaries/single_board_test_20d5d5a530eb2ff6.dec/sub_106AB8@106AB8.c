int __fastcall sub_106AB8(int a1, void *src, size_t n)
{
  size_t v3; // r5
  unsigned __int64 v4; // r2
  __int64 v5; // r6
  int v7; // r9
  unsigned __int64 v8; // r6
  int v9; // r0
  int v10; // r8
  int v11; // r6
  char *v13; // r7
  unsigned int v14; // r6
  size_t v15; // r3
  size_t v16; // r2

  if ( !n )
    return 1;
  v3 = n;
  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(v5) = 8 * v3;
  HIDWORD(v5) = v3 >> 29;
  v7 = (int)src;
  v8 = v5 + v4;
  if ( v8 < v4 )
    ++*(_QWORD *)(a1 + 72);
  v9 = *(_DWORD *)(a1 + 208);
  v10 = a1 + 80;
  *(_QWORD *)(a1 + 64) = v8;
  if ( !v9 )
  {
    if ( v3 <= 0x7F )
    {
LABEL_15:
      memcpy((void *)(a1 + 80), (const void *)v7, v3);
      *(_DWORD *)(a1 + 208) = v3;
      return 1;
    }
LABEL_10:
    if ( (v7 & 7) != 0 )
    {
      v13 = (char *)v7;
      v14 = v3;
      do
      {
        v14 -= 128;
        memcpy((void *)(a1 + 80), v13, 0x80u);
        v13 += 128;
        sub_100A48((__int64 *)a1, a1 + 80, 1);
      }
      while ( v14 > 0x7F );
      v15 = v3 - 128;
      v3 &= 0x7Fu;
      v7 += (v15 & 0xFFFFFF80) + 128;
    }
    else
    {
      sub_100A48((__int64 *)a1, v7, v3 >> 7);
      v16 = v3 - (v3 & 0x7F);
      v3 &= 0x7Fu;
      v7 += v16;
    }
LABEL_7:
    if ( !v3 )
      return 1;
    goto LABEL_15;
  }
  v11 = 128 - v9;
  if ( v3 >= 128 - v9 )
  {
    v3 -= v11;
    memcpy((void *)(v9 + v10), src, 128 - v9);
    *(_DWORD *)(a1 + 208) = 0;
    v7 += v11;
    sub_100A48((__int64 *)a1, a1 + 80, 1);
    if ( v3 <= 0x7F )
      goto LABEL_7;
    goto LABEL_10;
  }
  memcpy((void *)(v9 + v10), src, v3);
  *(_DWORD *)(a1 + 208) += v3;
  return 1;
}
