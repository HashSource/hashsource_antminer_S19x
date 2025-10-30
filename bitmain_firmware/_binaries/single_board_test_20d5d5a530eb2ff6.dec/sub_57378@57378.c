int __fastcall sub_57378(int a1, unsigned __int8 *a2, size_t a3)
{
  int result; // r0
  int v7; // r3
  int v8; // r2
  int v9; // r3
  unsigned int v10; // r8
  int v11; // r6
  int v12; // r9
  int v13; // r3
  size_t v14; // r6
  unsigned int v15; // r7
  unsigned int v16; // r11
  int v17; // r1
  unsigned __int64 v18; // r0

  if ( a3 <= 6 )
    return -12;
  memset((void *)(a1 + 16), 0, 0x20u);
  v7 = *a2 + (a2[1] << 8) + (a2[2] << 16) + (a2[3] << 24);
  if ( (v7 & 0xFFFFFFF0) == 0x184D2A50 )
  {
    v8 = 1;
    *(_DWORD *)(a1 + 28) = 1;
    if ( a2 == (unsigned __int8 *)(a1 + 208) )
    {
      v9 = 13;
      v8 = 8;
    }
    else
    {
      v9 = 12;
    }
    if ( a2 == (unsigned __int8 *)(a1 + 208) )
    {
      *(_DWORD *)(a1 + 76) = a3;
      result = a3;
      *(_DWORD *)(a1 + 80) = v8;
    }
    else
    {
      result = 4;
    }
    *(_DWORD *)(a1 + 52) = v9;
  }
  else
  {
    if ( v7 != 407708164 )
      return -13;
    *(_DWORD *)(a1 + 28) = 0;
    v10 = a2[4];
    v11 = (v10 >> 1) & 1;
    if ( v11 )
      return -8;
    if ( v10 >> 6 != 1 )
      return -6;
    v12 = (v10 >> 3) & 1;
    if ( v12 )
      v13 = 15;
    else
      v13 = 7;
    if ( (v10 & 1) != 0 )
      v11 = 4;
    v14 = v11 + v13;
    if ( a3 >= v14 )
    {
      v15 = a2[5];
      if ( v15 >> 7 )
        return -8;
      v16 = v15 >> 4;
      if ( v15 >> 4 <= 3 )
        return -2;
      if ( (v15 & 0xF) != 0 )
        return -8;
      if ( a2[v14 - 1] == (unsigned __int8)((unsigned __int16)sub_5A430(a2 + 4, v14 - 5, 0) >> 8) )
      {
        v17 = dword_1A00CC[v16 - 4];
        *(_DWORD *)(a1 + 16) = v16;
        *(_DWORD *)(a1 + 20) = (v10 >> 5) & 1;
        *(_DWORD *)(a1 + 64) = v17;
        *(_DWORD *)(a1 + 44) = (v10 >> 4) & 1;
        *(_DWORD *)(a1 + 24) = (v10 >> 2) & 1;
        if ( v12 )
        {
          v18 = __PAIR64__(a2[11] << 8, 0)
              + (a2[9] << 24)
              + a2[6]
              + (a2[7] << 8)
              + (unsigned __int64)(a2[8] << 16)
              + __PAIR64__(a2[10], 0)
              + __PAIR64__(a2[12] << 16, 0)
              + __PAIR64__(a2[13] << 24, 0);
          *(_QWORD *)(a1 + 32) = v18;
          *(_QWORD *)(a1 + 56) = v18;
        }
        if ( (v10 & 1) != 0 )
          *(_DWORD *)(a1 + 40) = a2[v14 - 5] + (a2[v14 - 3] << 16) + (a2[v14 - 4] << 8) + (a2[v14 - 2] << 24);
        *(_DWORD *)(a1 + 52) = 2;
        return v14;
      }
      else
      {
        return -17;
      }
    }
    else
    {
      if ( a2 != (unsigned __int8 *)(a1 + 208) )
        memcpy((void *)(a1 + 208), a2, a3);
      *(_DWORD *)(a1 + 76) = a3;
      *(_DWORD *)(a1 + 80) = v14;
      *(_DWORD *)(a1 + 52) = 1;
      return a3;
    }
  }
  return result;
}
