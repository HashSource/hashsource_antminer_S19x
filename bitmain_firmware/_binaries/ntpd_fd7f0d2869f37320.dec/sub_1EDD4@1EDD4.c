void *__fastcall sub_1EDD4(int a1)
{
  int v2; // r3
  int v3; // r5
  size_t n; // r4
  _BYTE *v5; // r3
  int *v6; // r6
  _DWORD *v8; // r12
  _BYTE *v9; // r3
  size_t v10; // r2
  int v11; // r3
  int v12; // r0
  char v13; // r12
  int v14; // r1

  v2 = dword_BA498;
  v3 = dword_BA498 - (_DWORD)&unk_BA4A8;
  if ( !a1 && dword_BA6A0 && (unsigned int)(v3 + 2) < 0x1D4 )
  {
    v3 += 2;
    *(_BYTE *)dword_BA498 = 13;
    dword_BA498 = v2 + 2;
    *(_BYTE *)(v2 + 1) = 10;
  }
  n = v3 + 12;
  if ( ((v3 + 12) & 3) != 0 )
  {
    v5 = (_BYTE *)dword_BA498;
    do
    {
      ++n;
      *v5++ = 0;
    }
    while ( (n & 3) != 0 );
    dword_BA498 = (int)v5;
  }
  word_BA4A6 = BYTE1(v3) | (unsigned __int16)((_WORD)v3 << 8);
  word_BA4A4 = BYTE1(dword_BA6A8) | (unsigned __int16)((_WORD)dword_BA6A8 << 8);
  byte_BA49D = a1 | ~(~((byte_BA6A4 & 0x1Fu) << 25) >> 25);
  if ( !byte_BA6AC )
  {
    if ( byte_BA6AD && sys_authenticate )
    {
      if ( (n & 7) != 0 )
      {
        v9 = (_BYTE *)dword_BA498;
        v10 = n - dword_BA498;
        do
        {
          *v9++ = 0;
          n = (size_t)&v9[v10];
        }
        while ( ((unsigned int)&v9[v10] & 7) != 0 );
        v8 = v9;
        dword_BA498 = (int)v9;
      }
      else
      {
        v8 = (_DWORD *)dword_BA498;
      }
      v11 = dword_BA6B0;
      *v8 = bswap32(dword_BA6B0);
      v12 = sub_636A4(v11, &byte_BA49C, n);
      sub_16CC0((struct sockaddr *)dword_BA494, dword_BA6B4, -5, (unsigned __int8 *)&byte_BA49C, v12 + n);
      if ( a1 )
        goto LABEL_20;
    }
    else
    {
      sub_16CC0((struct sockaddr *)dword_BA494, dword_BA6B4, -6, (unsigned __int8 *)&byte_BA49C, n);
      if ( a1 )
      {
LABEL_20:
        ++numctlfrags;
        goto LABEL_11;
      }
    }
    ++numctlresponses;
    goto LABEL_11;
  }
  v6 = (int *)&ctl_traps;
  do
  {
    if ( (*((_BYTE *)v6 + 50) & 1) != 0 )
    {
      v13 = *((_BYTE *)v6 + 51) & 7;
      v14 = v6[7];
      word_BA49E = HIBYTE(*((_WORD *)v6 + 24)) | (*((_WORD *)v6 + 24) << 8);
      byte_BA49C = (sys_leap << 6) | 6 | (8 * v13);
      sub_16CC0((struct sockaddr *)v6, v14, -4, (unsigned __int8 *)&byte_BA49C, n);
      if ( !a1 )
        ++*((_WORD *)v6 + 24);
      ++numasyncmsgs;
    }
    v6 += 13;
  }
  while ( v6 != &numctlinputresp );
LABEL_11:
  dword_BA498 = (int)&unk_BA4A8;
  dword_BA6A8 += v3;
  ++word_BA6B8;
  return &unk_BA4A8;
}
