int __fastcall sub_104E38(int a1, int a2, int a3)
{
  int result; // r0
  const void *v7; // r7
  size_t v8; // r5
  void *v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  int v15; // r3

  result = sub_21B790(a1);
  if ( result )
  {
    v7 = (const void *)sub_21B790(a1);
    v8 = ((int (*)(void))loc_100310)();
    v9 = *(void **)(a3 + 12);
    if ( v8 + 1 > *(_DWORD *)(a3 + 16) - (int)v9 )
    {
      obstack_newchunk((struct obstack *)a3, v8 + 1);
      v9 = *(void **)(a3 + 12);
    }
    memcpy(v9, v7, v8);
    v10 = *(_DWORD *)(a3 + 12);
    *(_DWORD *)(a3 + 12) = v10 + v8 + 1;
    *(_BYTE *)(v10 + v8) = 0;
    v11 = *(_DWORD *)(a3 + 12);
    v12 = *(_DWORD *)(a3 + 8);
    v13 = *(_DWORD *)(a3 + 16);
    v14 = v11 == v12;
    if ( v11 == v12 )
      LOBYTE(v10) = *(_BYTE *)(a3 + 40);
    v15 = (v11 + *(_DWORD *)(a3 + 24)) & ~*(_DWORD *)(a3 + 24);
    *(_DWORD *)(a3 + 12) = v15;
    if ( v14 )
      *(_BYTE *)(a3 + 40) = v10 | 2;
    if ( v15 - *(_DWORD *)(a3 + 4) > (unsigned int)(v13 - *(_DWORD *)(a3 + 4)) )
    {
      v15 = v13;
      *(_DWORD *)(a3 + 12) = v13;
    }
    *(_DWORD *)(a3 + 8) = v15;
    return sub_C25E0(a2, v12, (struct obstack *)a3);
  }
  return result;
}
