int __fastcall sub_1E0AC(_DWORD *a1)
{
  unsigned int v1; // r3
  int v3; // r6
  int v4; // r0
  int v5; // r7
  int v6; // r3
  int v7; // r0
  void *v8; // r0
  int v9; // r2
  int v10; // r0
  int v12; // r5
  int v13; // r1
  int v14; // r3
  int v15; // r0
  _DWORD *v16; // r3
  int v17; // r0
  void *v18; // r0
  int v19; // r2
  _DWORD *v20; // r3
  int v21; // [sp+0h] [bp-4Ch] BYREF
  _DWORD src[8]; // [sp+8h] [bp-44h] BYREF
  _DWORD v23[9]; // [sp+28h] [bp-24h] BYREF

  v1 = a1[3];
  a1[8] = 0;
  v3 = v1 & 0x1200000;
  v4 = a1[1];
  v5 = HIWORD(v1) & 0xF;
  if ( (v1 & 0x100000) != 0 )
  {
    v6 = (unsigned __int16)v1 >> 12;
    v7 = 1;
    src[0] = v6;
    a1[8] = 1;
    if ( v6 == 15 )
    {
      v7 = 2;
      a1[8] = 2;
      src[1] = 25;
    }
    if ( v3 != 0x1000000 )
    {
      v20 = &v23[v7++ + 8];
      a1[8] = v7;
      *(v20 - 16) = v5;
    }
  }
  else
  {
    v12 = v1 & 0xFFF;
    ((void (__fastcall *)(int, unsigned int, int *))loc_1DF9FC)(v4, HIWORD(v1) & 0xF, &v21);
    v13 = a1[3];
    if ( (v13 & 0x800000) != 0 )
      v14 = v12 + v21;
    else
      v14 = v21 - v12;
    if ( (v13 & 0x400000) != 0 )
      v15 = 1;
    else
      v15 = 4;
    if ( (v13 & 0x1000000) == 0 )
      v14 = v21;
    v23[0] = v15;
    v23[1] = v14;
    a1[7] = 1;
    v7 = a1[8];
    if ( v3 != 0x1000000 )
    {
      v16 = &v23[v7++ + 8];
      a1[8] = v7;
      *(v16 - 16) = v5;
    }
    if ( !v7 )
    {
      v17 = 8;
      goto LABEL_21;
    }
  }
  v8 = (void *)sub_93028(4 * v7);
  v9 = a1[8];
  a1[9] = v8;
  memcpy(v8, src, 4 * v9);
  v10 = a1[7];
  if ( !v10 )
    return 0;
  v17 = 8 * v10;
LABEL_21:
  v18 = (void *)sub_93028(v17);
  v19 = a1[7];
  a1[10] = v18;
  memcpy(v18, v23, 8 * v19);
  return 0;
}
