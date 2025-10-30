int __fastcall sub_1717A0(int a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  int v4; // r7
  int v7; // r2
  int v8; // r3
  int v9; // r8
  int v10; // r1
  int v11; // r3
  char v12; // r2
  _DWORD *v13; // r4
  _DWORD *v14; // r3
  int v15; // r0
  bool v16; // zf
  int v17; // r3
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // lr
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v27; // r0
  int v28; // r0
  _DWORD *v29; // [sp+4h] [bp-4h]

  v4 = a1;
  if ( !a1 )
  {
    v29 = a2;
    sub_16FF58((int)a2);
    a2 = v29;
    v4 = v28;
  }
  v7 = a2[6];
  v8 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v8 + 20) = a2;
  LOBYTE(v7) = *(_BYTE *)(v7 + 1);
  *(_BYTE *)v8 = 12;
  if ( (v7 & 4) != 0 )
  {
    *(_BYTE *)(v8 + 1) |= 8u;
  }
  else
  {
    v27 = sub_171258(a2);
    v8 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(v27 + 20);
  }
  if ( (*(_BYTE *)(v8 + 2) & 0x10) != 0 )
  {
    v9 = *(_DWORD *)(v8 + 16);
    v10 = *(_DWORD *)(v9 + 64);
    v11 = *(_DWORD *)(v9 + 60);
    v12 = v10 - v11;
    if ( (unsigned int)(v10 - v11) <= 0x27 )
    {
      obstack_newchunk((struct obstack *)(v9 + 48), 40);
      v11 = *(_DWORD *)(v9 + 60);
      v10 = *(_DWORD *)(v9 + 64);
    }
    v13 = *(_DWORD **)(v9 + 56);
    v14 = (_DWORD *)(v11 + 40);
    v15 = *(_DWORD *)(v9 + 72);
    *(_DWORD *)(v9 + 60) = v14;
    v16 = v14 == v13;
    if ( v14 == v13 )
      v12 = *(_BYTE *)(v9 + 88);
    v17 = ((unsigned int)v14 + v15) & ~v15;
    *(_DWORD *)(v9 + 60) = v17;
    if ( v16 )
      *(_BYTE *)(v9 + 88) = v12 | 2;
    if ( v17 - *(_DWORD *)(v9 + 52) > (unsigned int)(v10 - *(_DWORD *)(v9 + 52)) )
    {
      v17 = v10;
      *(_DWORD *)(v9 + 60) = v10;
    }
    *(_DWORD *)(v9 + 56) = v17;
    memset(v13, 0, 0x28u);
  }
  else
  {
    v13 = sub_930CC(0x28u);
  }
  v18 = *a3;
  v19 = a3[1];
  v20 = a3[2];
  v21 = a3[3];
  v22 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v22 + 24) = v13;
  *v13 = v18;
  v13[1] = v19;
  v13[2] = v20;
  v13[3] = v21;
  v23 = a4[1];
  v24 = a4[2];
  v25 = a4[3];
  v13[4] = *a4;
  v13[5] = v23;
  v13[6] = v24;
  v13[7] = v25;
  if ( *a3 == 1 && a3[3] >= 0 )
    *(_BYTE *)(v22 + 1) |= 1u;
  if ( *a4 == 1 && (int)a4[3] < 0 )
    *(_BYTE *)(v22 + 1) &= ~1u;
  return v4;
}
