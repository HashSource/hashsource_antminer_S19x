int __fastcall sub_171C30(int a1, _DWORD *a2)
{
  int v2; // r5
  int v4; // r3
  char v5; // r2
  int v6; // r4
  int v7; // r1
  int v8; // r3
  char v9; // r2
  _DWORD *v10; // r0
  _DWORD *v11; // r3
  int v12; // r12
  bool v13; // zf
  int v14; // r3
  int v15; // r3
  int v17; // lr
  bool v18; // nf
  int v19; // r0
  int v20; // r0
  __int64 v21; // [sp+0h] [bp-10h] BYREF
  __int64 v22; // [sp+8h] [bp-8h] BYREF

  v2 = a1;
  if ( !a1 )
  {
    sub_16FF58((int)a2);
    v2 = v20;
  }
  v4 = *(_DWORD *)(v2 + 24);
  v5 = *(_BYTE *)(v4 + 2);
  *(_BYTE *)v4 = 11;
  *(_WORD *)(v4 + 4) = 1;
  if ( (v5 & 0x10) != 0 )
  {
    v6 = *(_DWORD *)(v4 + 16);
    v7 = *(_DWORD *)(v6 + 64);
    v8 = *(_DWORD *)(v6 + 60);
    v9 = v7 - v8;
    if ( (unsigned int)(v7 - v8) <= 0x17 )
    {
      obstack_newchunk((struct obstack *)(v6 + 48), 24);
      v8 = *(_DWORD *)(v6 + 60);
      v7 = *(_DWORD *)(v6 + 64);
    }
    v10 = *(_DWORD **)(v6 + 56);
    v11 = (_DWORD *)(v8 + 24);
    v12 = *(_DWORD *)(v6 + 72);
    *(_DWORD *)(v6 + 60) = v11;
    v13 = v11 == v10;
    if ( v11 == v10 )
      v9 = *(_BYTE *)(v6 + 88);
    v14 = ((unsigned int)v11 + v12) & ~v12;
    *(_DWORD *)(v6 + 60) = v14;
    if ( v13 )
      *(_BYTE *)(v6 + 88) = v9 | 2;
    if ( v14 - *(_DWORD *)(v6 + 52) > (unsigned int)(v7 - *(_DWORD *)(v6 + 52)) )
    {
      v14 = v7;
      *(_DWORD *)(v6 + 60) = v7;
    }
    *(_DWORD *)(v6 + 56) = v14;
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v10[3] = 0;
    v10[4] = 0;
    v10[5] = 0;
  }
  else
  {
    v10 = sub_930CC(0x18u);
  }
  v15 = a2[6];
  *(_DWORD *)(*(_DWORD *)(v2 + 24) + 24) = v10;
  if ( (*(_BYTE *)(v15 + 1) & 4) != 0 )
  {
    v10[3] = a2;
    return v2;
  }
  if ( sub_17195C(a2, &v21, &v22) < 0 )
  {
    v17 = *(_DWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 20) = 1;
LABEL_21:
    v19 = *(_DWORD *)(v17 + 24);
    *(_BYTE *)(v17 + 1) |= 1u;
    goto LABEL_19;
  }
  v17 = *(_DWORD *)(v2 + 24);
  v18 = v21 < 0;
  *(_DWORD *)(v2 + 20) = (v22 - v21 + 8) / 8;
  if ( !v18 )
    goto LABEL_21;
  v19 = *(_DWORD *)(v17 + 24);
LABEL_19:
  *(_DWORD *)(v19 + 12) = a2;
  return v2;
}
