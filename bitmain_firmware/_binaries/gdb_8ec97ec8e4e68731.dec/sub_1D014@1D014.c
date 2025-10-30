int __fastcall sub_1D014(_DWORD *a1)
{
  unsigned int v1; // r4
  int v3; // r8
  int v4; // r6
  _BOOL4 v5; // r3
  int result; // r0
  void *v7; // r0
  int v8; // r2
  int v9; // r7
  int v10; // r0
  int v11; // r2
  char *v12; // r1
  int v13; // r12
  int v14; // r3
  void *v15; // r0
  int v16; // r2
  int v17; // r2
  _QWORD *v18; // r3
  _DWORD v19[2]; // [sp+0h] [bp-128h] BYREF
  int src; // [sp+8h] [bp-120h] BYREF
  int v21; // [sp+Ch] [bp-11Ch]
  _QWORD varC0[27]; // [sp+68h] [bp-C0h] BYREF

  v1 = a1[3];
  v19[0] = 0;
  v19[1] = 0;
  v3 = (v1 >> 23) & 3;
  v4 = v1 & 0x100000;
  v5 = v3 == 3;
  if ( !v3 )
    v5 = 1;
  if ( v5 )
  {
    if ( !v4 )
      return sub_1AB90(a1);
    v4 = a1[7];
    src = 25;
    a1[8] = 1;
    goto LABEL_6;
  }
  v9 = HIWORD(v1) & 0xF;
  v1 = (unsigned __int16)v1;
  if ( !v4 )
  {
    ((void (__fastcall *)(_DWORD, int, _DWORD *))loc_1DF9FC)(a1[1], v9, v19);
    if ( (_WORD)v1 )
    {
      do
      {
        if ( (v1 & 1) != 0 )
          ++v4;
        v1 >>= 1;
      }
      while ( v1 );
      v17 = v19[0];
      if ( v3 == 1 )
        goto LABEL_26;
    }
    else
    {
      v17 = v19[0];
      if ( v3 == 1 )
      {
        a1[7] = 0;
LABEL_29:
        src = v9;
        v21 = 25;
        a1[8] = 2;
LABEL_6:
        if ( !v4 )
        {
          result = a1[8];
LABEL_9:
          v7 = (void *)sub_93028(4 * result);
          v8 = a1[8];
          a1[9] = v7;
          memcpy(v7, &src, 4 * v8);
          return 0;
        }
        goto LABEL_17;
      }
    }
    v17 -= 4 * v4;
LABEL_26:
    a1[7] = v4;
    if ( v4 )
    {
      v18 = &varC0[v4];
      do
      {
        *((_DWORD *)v18 - 1) = v17;
        v17 += 4;
        *((_DWORD *)v18-- - 2) = 4;
      }
      while ( varC0 != v18 );
    }
    goto LABEL_29;
  }
  if ( !(_WORD)v1 )
  {
    v4 = a1[7];
    result = 2;
    src = v9;
    v21 = 25;
    a1[8] = 2;
    if ( !v4 )
      goto LABEL_9;
    goto LABEL_17;
  }
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = (char *)&varC0[24] + 4 * v10;
    v13 = v10 + 2;
    v14 = v10 + 1;
    if ( (v1 & 1) != 0 )
    {
      ++v10;
      *((_DWORD *)v12 - 72) = v11;
      v14 = v13;
    }
    v1 >>= 1;
    ++v11;
  }
  while ( v1 );
  v4 = a1[7];
  *(&src + v10) = v9;
  result = v10 + 2;
  a1[8] = result;
  *(&src + v14) = 25;
  if ( v4 )
  {
LABEL_17:
    v15 = (void *)sub_93028(8 * v4);
    v16 = a1[7];
    a1[10] = v15;
    memcpy(v15, varC0, 8 * v16);
    result = a1[8];
  }
  if ( result )
    goto LABEL_9;
  return result;
}
