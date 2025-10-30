__int16 *__fastcall sub_1EBA4(int a1)
{
  int v2; // r3
  unsigned int v3; // r6
  size_t n; // r4
  _BYTE *v5; // r3
  int v6; // r8
  unsigned __int16 *v7; // r5
  int v9; // r2
  _DWORD *v10; // r12
  size_t v11; // r5
  int v12; // r0
  int v13; // r0
  char v14; // lr
  int v15; // r1

  v2 = dword_B9498;
  v3 = dword_B9498 - (_DWORD)&unk_B94A8;
  if ( !a1 && dword_B96A0 && v3 + 2 < 0x1D4 )
  {
    v3 += 2;
    *(_BYTE *)dword_B9498 = 13;
    *(_BYTE *)(v2 + 1) = 10;
    dword_B9498 = v2 + 2;
  }
  n = v3 + 12;
  if ( ((v3 + 12) & 3) != 0 )
  {
    v5 = (_BYTE *)dword_B9498;
    do
    {
      ++n;
      *v5++ = 0;
    }
    while ( (n & 3) != 0 );
    dword_B9498 = (int)v5;
  }
  word_B94A6 = __rev16(v3);
  word_B94A4 = __rev16(dword_B96A8);
  byte_B949D = a1 | ~(~((byte_B96A4 & 0x1Fu) << 25) >> 25);
  if ( !byte_B96AC )
  {
    if ( byte_B96AD && sys_authenticate )
    {
      v9 = dword_B9498;
      if ( (n & 7) != 0 )
      {
        v10 = (_DWORD *)dword_B9498;
        do
        {
          *(_BYTE *)v10 = 0;
          v10 = (_DWORD *)((char *)v10 + 1);
          v11 = (size_t)v10 + n - v9;
        }
        while ( (v11 & 7) != 0 );
        dword_B9498 = (int)v10;
      }
      else
      {
        v10 = (_DWORD *)dword_B9498;
        v11 = n;
      }
      v12 = dword_B96B0;
      *v10 = bswap32(dword_B96B0);
      v13 = sub_6278C(v12, &byte_B949C, v11);
      sub_16A68((struct sockaddr *)dword_B9494, dword_B96B4, -5, (unsigned __int8 *)&byte_B949C, v13 + v11);
      if ( a1 )
        goto LABEL_19;
    }
    else
    {
      sub_16A68((struct sockaddr *)dword_B9494, dword_B96B4, -6, (unsigned __int8 *)&byte_B949C, n);
      if ( a1 )
      {
LABEL_19:
        ++numctlfrags;
        goto LABEL_11;
      }
    }
    ++numctlresponses;
    goto LABEL_11;
  }
  v6 = 0;
  v7 = (unsigned __int16 *)&ctl_traps;
  do
  {
    if ( (v7[25] & 1) != 0 )
    {
      v14 = (8 * *((_BYTE *)v7 + 51)) & 0x38;
      word_B949E = __rev16(v7[24]);
      v15 = *((_DWORD *)v7 + 7);
      byte_B949C = (sys_leap << 6) | 6 | v14;
      sub_16A68((struct sockaddr *)v7, v15, -4, (unsigned __int8 *)&byte_B949C, n);
      if ( !a1 )
        ++v7[24];
      ++numasyncmsgs;
    }
    ++v6;
    v7 += 26;
  }
  while ( v6 != 3 );
LABEL_11:
  dword_B9498 = (int)&unk_B94A8;
  dword_B96A8 += v3;
  ++word_B96B8;
  return &word_B96B8;
}
