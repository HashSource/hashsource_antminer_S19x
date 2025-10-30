int __fastcall sub_170244(int a1, int *a2)
{
  int v4; // r5
  int v5; // r3
  __int16 v6; // r2
  __int16 v7; // r2
  int v8; // r4
  int v9; // r1
  int v10; // r3
  char v11; // r2
  _DWORD *v12; // r0
  _DWORD *v13; // r3
  int v14; // r12
  bool v15; // zf
  int v16; // r3
  int v18; // r0
  int v19; // r0

  if ( a2 )
  {
    v4 = *a2;
    if ( *a2 )
    {
      sub_16F708(*a2);
    }
    else
    {
      sub_16FF58(a1);
      v4 = v18;
      *a2 = v18;
    }
  }
  else
  {
    sub_16FF58(a1);
    v4 = v19;
  }
  v5 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v5 + 20) = a1;
  *(_DWORD *)(v4 + 20) = 1;
  v6 = *(_WORD *)(v5 + 2);
  *(_BYTE *)v5 = 7;
  v7 = v6 & 0xFC7F | 0x200;
  *(_WORD *)(v5 + 2) = v7;
  if ( (v7 & 0x10) != 0 )
  {
    v8 = *(_DWORD *)(v5 + 16);
    v9 = *(_DWORD *)(v8 + 64);
    v10 = *(_DWORD *)(v8 + 60);
    v11 = v9 - v10;
    if ( (unsigned int)(v9 - v10) <= 0xB )
    {
      obstack_newchunk((struct obstack *)(v8 + 48), 12);
      v10 = *(_DWORD *)(v8 + 60);
      v9 = *(_DWORD *)(v8 + 64);
    }
    v12 = *(_DWORD **)(v8 + 56);
    v13 = (_DWORD *)(v10 + 12);
    v14 = *(_DWORD *)(v8 + 72);
    *(_DWORD *)(v8 + 60) = v13;
    v15 = v13 == v12;
    if ( v13 == v12 )
      v11 = *(_BYTE *)(v8 + 88);
    v16 = ((unsigned int)v13 + v14) & ~v14;
    *(_DWORD *)(v8 + 60) = v16;
    if ( v15 )
      *(_BYTE *)(v8 + 88) = v11 | 2;
    if ( v16 - *(_DWORD *)(v8 + 52) > (unsigned int)(v9 - *(_DWORD *)(v8 + 52)) )
    {
      v16 = v9;
      *(_DWORD *)(v8 + 60) = v9;
    }
    *(_DWORD *)(v8 + 56) = v16;
    *v12 = 0;
    v12[1] = 0;
    v12[2] = 0;
  }
  else
  {
    v12 = sub_930CC(0xCu);
  }
  *(_DWORD *)(*(_DWORD *)(v4 + 24) + 28) = v12;
  return v4;
}
