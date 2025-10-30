int __fastcall sub_1DEC8(_DWORD *a1)
{
  unsigned int v1; // r12
  int v2; // r3
  int v4; // r0
  int v5; // r9
  int v6; // r7
  unsigned int v7; // r4
  int v8; // r6
  int v9; // r2
  _BYTE *v10; // r1
  int v11; // r0
  int v12; // r12
  _BYTE *v13; // r2
  _BYTE *v14; // r3
  int v15; // r0
  void *v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r8
  unsigned int v21; // r3
  _BYTE *v22; // r3
  void *v23; // r0
  int v24; // r2
  unsigned int v25; // [sp+0h] [bp-12Ch] BYREF
  _DWORD v26[24]; // [sp+8h] [bp-124h] BYREF
  unsigned int src; // [sp+68h] [bp-C4h] BYREF
  unsigned int v28; // [sp+6Ch] [bp-C0h]
  _BYTE v29[4]; // [sp+128h] [bp-4h] BYREF

  v1 = a1[3];
  v2 = 0;
  v4 = a1[1];
  v5 = v1 & 0x100000;
  v6 = HIWORD(v1) & 0xF;
  a1[8] = 0;
  v7 = (unsigned __int16)v1;
  v8 = v1 & 0x200000;
  if ( (v1 & 0x100000) == 0 )
  {
    v20 = (v1 >> 23) & 3;
    ((void (__fastcall *)(int, unsigned int, unsigned int *))loc_1DF9FC)(v4, HIWORD(v1) & 0xF, &v25);
    if ( v7 )
    {
      do
      {
        if ( (v7 & 1) != 0 )
          ++v5;
        v7 >>= 1;
      }
      while ( v7 );
      v7 = 4 * v5;
    }
    v21 = v25;
    v5 = (int)v26;
    if ( v20 == 2 )
    {
      v28 = v25 - v7;
    }
    else
    {
      if ( v20 == 3 )
      {
        v21 = v25 + 4;
      }
      else if ( v20 != 1 )
      {
        v28 = v25 + 4 - v7;
        goto LABEL_27;
      }
      v28 = v21;
    }
LABEL_27:
    src = v7;
    a1[7] = 1;
    v11 = a1[8];
    if ( v8 )
    {
      v22 = &v29[4 * v11++];
      a1[8] = v11;
      *((_DWORD *)v22 - 72) = v6;
    }
    if ( !v11 )
    {
      v19 = 8;
      goto LABEL_32;
    }
    goto LABEL_16;
  }
  if ( !(_WORD)v1 )
  {
    if ( !v8 )
    {
      v11 = 1;
      a1[8] = 1;
      v26[0] = 25;
      v5 = (int)v26;
      goto LABEL_16;
    }
    v2 = 0;
    v11 = 1;
    goto LABEL_8;
  }
  v9 = 0;
  do
  {
    v10 = &v29[4 * v2];
    v11 = v2 + 1;
    v12 = v2 + 2;
    if ( (v7 & 1) != 0 )
    {
      a1[8] = v11;
      ++v2;
      *((_DWORD *)v10 - 72) = v9;
      v11 = v12;
    }
    v7 >>= 1;
    ++v9;
  }
  while ( v7 );
  if ( v8 )
  {
LABEL_8:
    v13 = &v29[4 * v2];
    v2 = v11++;
    *((_DWORD *)v13 - 72) = v6;
  }
  v14 = &v29[4 * v2];
  a1[8] = v11;
  if ( v11 )
    v5 = (int)v26;
  *((_DWORD *)v14 - 72) = 25;
  if ( !v11 )
  {
    v15 = a1[7];
    if ( !v15 )
      return 0;
    goto LABEL_17;
  }
LABEL_16:
  v17 = (void *)sub_93028(4 * v11);
  v18 = a1[8];
  a1[9] = v17;
  memcpy(v17, (const void *)v5, 4 * v18);
  v15 = a1[7];
  if ( !v15 )
    return 0;
LABEL_17:
  v19 = 8 * v15;
LABEL_32:
  v23 = (void *)sub_93028(v19);
  v24 = a1[7];
  a1[10] = v23;
  memcpy(v23, &src, 8 * v24);
  return 0;
}
