int __fastcall sub_1E534(_DWORD *a1)
{
  int v2; // r4
  unsigned int v3; // r0
  int v4; // r7
  int v5; // r6
  unsigned int v6; // r1
  int v7; // r2
  int v8; // r4
  int v9; // r6
  unsigned int v11; // r4
  int v12; // r2
  int v13; // r0
  _DWORD *v14; // r3
  void *v15; // r0
  int v16; // r2
  void *v17; // r0
  int v18; // r2
  int v19; // r1
  int v20; // r3
  int v21; // r12
  _DWORD *v22; // lr
  int v23; // r4
  int v24; // r0
  _DWORD v25[2]; // [sp+0h] [bp-12Ch] BYREF
  _DWORD src[24]; // [sp+8h] [bp-124h] BYREF
  _DWORD v27[49]; // [sp+68h] [bp-C4h] BYREF

  v2 = sub_163E78(*a1);
  v3 = a1[3];
  v4 = a1[1];
  v5 = (v3 >> 11) & 3;
  v25[0] = 0;
  v25[1] = 0;
  v6 = v3 >> 8;
  if ( v5 == 1 )
  {
    v3 = (unsigned __int8)v3;
    v19 = v6 & 7;
    if ( !(_BYTE)v3 )
    {
      src[0] = v19;
      v7 = 1;
      a1[8] = 1;
      v8 = 0;
      goto LABEL_18;
    }
    v20 = 0;
    v21 = 0;
    do
    {
      v22 = &v27[v20 + 48];
      v23 = v20 + 2;
      v7 = v20 + 1;
      if ( (v3 & 1) != 0 )
      {
        ++v20;
        *(v22 - 72) = v21;
        v7 = v23;
      }
      v3 >>= 1;
      ++v21;
    }
    while ( v3 );
    a1[8] = v7;
    v8 = 0;
    src[v20] = v19;
LABEL_5:
    if ( !v7 )
    {
      v9 = a1[7];
      if ( !v9 )
        return v8;
      goto LABEL_19;
    }
LABEL_18:
    v15 = (void *)sub_93028(4 * v7);
    v16 = a1[8];
    a1[9] = v15;
    memcpy(v15, src, 4 * v16);
    v9 = a1[7];
    if ( !v9 )
      return v8;
LABEL_19:
    v13 = 8 * v9;
    goto LABEL_20;
  }
  if ( v5 )
  {
    if ( (BYTE1(v3) & 0x1F) == 0x1F )
    {
      if ( !*(_DWORD *)(v2 + 88) )
      {
        v8 = -1;
        sub_259858("no syscall record support\n");
        return v8;
      }
      ((void (__fastcall *)(int, int, _DWORD *))loc_1DF9FC)(v4, 7, v25);
      v24 = (*(int (__fastcall **)(int, _DWORD))(v2 + 88))(v4, v25[0]);
      v7 = a1[8];
      v8 = v24;
    }
    else
    {
      v7 = a1[8];
      v8 = 0;
    }
    goto LABEL_5;
  }
  v11 = (unsigned __int8)v3;
  ((void (__fastcall *)(int, int, _DWORD *))loc_1DF9FC)(v4, BYTE1(v3) & 7, v25);
  if ( !v11 )
  {
    a1[7] = 0;
    goto LABEL_31;
  }
  do
  {
    if ( (v11 & 1) != 0 )
      ++v5;
    v11 >>= 1;
  }
  while ( v11 );
  a1[7] = v5;
  v12 = v25[0];
  if ( !v5 )
  {
LABEL_31:
    v7 = a1[8];
    if ( !v7 )
      return 0;
    goto LABEL_17;
  }
  v13 = 8 * v5;
  v14 = &v27[2 * v5];
  do
  {
    *(v14 - 1) = v12;
    v12 += 4;
    *(v14 - 2) = 4;
    v14 -= 2;
  }
  while ( v27 != v14 );
  v7 = a1[8];
  if ( v7 )
  {
LABEL_17:
    v8 = 0;
    goto LABEL_18;
  }
  v8 = 0;
LABEL_20:
  v17 = (void *)sub_93028(v13);
  v18 = a1[7];
  a1[10] = v17;
  memcpy(v17, v27, 8 * v18);
  return v8;
}
