int __fastcall sub_B6F58(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r4
  int v8; // r2
  int v9; // r3
  _DWORD *v10; // r1
  _DWORD *v11; // r3
  int v12; // r12
  int v13; // r3
  int v14; // [sp+0h] [bp-Ch] BYREF
  int v15; // [sp+4h] [bp-8h] BYREF

  v14 = a2;
  result = sub_326F3C(*(_DWORD *)(a1 + 8), &v14);
  if ( !result )
  {
    v5 = *(_DWORD *)(a1 + 8);
    v15 = a2;
    sub_326FD4(v5, &v15);
    v6 = *(_DWORD *)(a1 + 4);
    v7 = *(_DWORD *)(a1 + 8);
    v8 = *(_DWORD *)(v6 + 16);
    v9 = *(_DWORD *)(v6 + 12);
    if ( (unsigned int)(v8 - v9) <= 3 )
    {
      obstack_newchunk((struct obstack *)v6, 4);
      v9 = *(_DWORD *)(v6 + 12);
      v8 = *(_DWORD *)(v6 + 16);
    }
    v10 = *(_DWORD **)(v6 + 8);
    v11 = (_DWORD *)(v9 + 4);
    v12 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v6 + 12) = v11;
    if ( v11 == v10 )
      *(_BYTE *)(v6 + 40) |= 2u;
    v13 = ((unsigned int)v11 + *(_DWORD *)(v6 + 24)) & ~*(_DWORD *)(v6 + 24);
    *(_DWORD *)(v6 + 12) = v13;
    if ( v13 - v12 > (unsigned int)(v8 - v12) )
    {
      v13 = v8;
      *(_DWORD *)(v6 + 12) = v8;
    }
    *(_DWORD *)(v6 + 8) = v13;
    *v10 = a2;
    return sub_326D80(v7);
  }
  return result;
}
