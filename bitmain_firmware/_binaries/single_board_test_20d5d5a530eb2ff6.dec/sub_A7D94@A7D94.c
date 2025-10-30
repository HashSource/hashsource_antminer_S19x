int __fastcall sub_A7D94(_DWORD *a1)
{
  _DWORD *v1; // r12
  __int64 v3; // r4
  int v4; // r3
  int v6; // r0
  int v7; // r7
  _BYTE *v8; // r1
  _BYTE *v9; // r3
  int v10; // r7
  bool v11; // cc
  int v12; // lr
  unsigned int v13; // r6
  _BYTE *v14; // lr
  int v15; // r3

  v1 = (_DWORD *)a1[5];
  if ( !v1 )
    return 0;
  do
  {
    LODWORD(v3) = a1[3] - v1[3];
    if ( !(_DWORD)v3 )
    {
      v4 = v1[4];
      if ( (v4 & 1) != 0 || (v4 & 2) != 0 )
        return 0;
    }
    v6 = v1[2];
    if ( v6 )
    {
      v7 = a1[1];
      if ( !v7 )
        v7 = *(_DWORD *)(*a1 + 4);
      HIDWORD(v3) = 0;
      v8 = (_BYTE *)(v6 + v1[1] - 1 + v7);
      if ( (unsigned int)(v6 - 1) <= 0x1F )
      {
        v12 = v1[2];
      }
      else
      {
        v9 = v8 - 32;
        do
        {
          v9[32] = v3;
          v10 = (__int64)(unsigned int)v3 >> 8;
          v11 = (unsigned int)(v6 - 33) > 0x1F;
          __pld(v9 - 2);
          v12 = v6 - 32;
          v9[28] = 0;
          v6 -= 32;
          v13 = WORD1(v3);
          v9[27] = 0;
          v9[26] = 0;
          v8 = v9;
          v9[25] = 0;
          v9[24] = 0;
          v3 = 0;
          v9[23] = 0;
          v9[22] = 0;
          v9 -= 32;
          v9[53] = 0;
          v9[52] = 0;
          v9[51] = 0;
          v9[50] = 0;
          v9[49] = 0;
          v9[48] = 0;
          v9[47] = 0;
          v9[46] = 0;
          v9[45] = 0;
          v9[44] = 0;
          v9[43] = 0;
          v9[42] = 0;
          v9[41] = 0;
          v9[40] = 0;
          v9[39] = 0;
          v9[38] = 0;
          v9[37] = 0;
          v9[36] = 0;
          v9[35] = 0;
          v9[34] = 0;
          v9[63] = v10;
          v9[62] = v13;
          v9[61] = BYTE1(v13);
          v9[33] = 0;
        }
        while ( v11 );
      }
      v14 = &v8[-v12];
      do
      {
        *v8-- = v3;
        v15 = v3 >> 8;
        HIDWORD(v3) >>= 8;
        LODWORD(v3) = v15;
      }
      while ( v8 != v14 );
      if ( v3 )
        return 0;
    }
    v1 = (_DWORD *)*v1;
  }
  while ( v1 );
  return 1;
}
