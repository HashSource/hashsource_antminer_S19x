int __fastcall sub_B6CB4(unsigned int a1, int a2)
{
  int v2; // r4
  int result; // r0
  int v5; // r4
  int v6; // r1
  int v7; // r3
  char v8; // r2
  int v9; // r3
  int v10; // r12
  bool v11; // zf
  int v12; // r3
  int v13; // r3
  int v14; // lr
  int v15; // r3
  int v16; // lr
  int v17; // r3
  int v18; // lr
  int v19; // r3
  int v20; // lr
  __int64 v21; // r0
  int v22; // lr
  int v23; // r2
  _DWORD v24[3]; // [sp+0h] [bp-3Ch] BYREF
  int v25; // [sp+Ch] [bp-30h]

  if ( a1 <= 0xF )
  {
    sub_94700(
      (int)"addrmap.c",
      524,
      "%s: Assertion `%s' failed.",
      "void* splay_obstack_alloc(int, void*)",
      "size >= sizeof (*n)");
    sub_94700((int)"addrmap.c", 463, "addrmap_relocate is not implemented yet for mutable addrmaps", v13, v2, v14);
    sub_94700((int)"addrmap.c", 162, "addrmap_create_fixed is not implemented yet for fixed addrmaps", v15, v2, v16);
    sub_94700((int)"addrmap.c", 120, "addrmap_fixed_set_empty: fixed addrmaps can't be changed\n", v17, v2, v18);
    v21 = sub_94700((int)"addrmap.c", 390, "addrmap_find is not implemented yet for mutable addrmaps", v19, v2, v20);
    v25 = v22;
    v24[0] = HIDWORD(v21);
    v24[1] = v23;
    ((void (__fastcall *)(_DWORD, int, _DWORD *))sub_3270BC)(*(_DWORD *)(v21 + 8), 748636, v24);
    __asm { POP             {PC} }
  }
  result = *(_DWORD *)(a2 + 12);
  if ( result )
  {
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(result + 12);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 4);
    v6 = *(_DWORD *)(v5 + 16);
    v7 = *(_DWORD *)(v5 + 12);
    v8 = v6 - v7;
    if ( a1 > v6 - v7 )
    {
      obstack_newchunk((struct obstack *)v5, a1);
      v7 = *(_DWORD *)(v5 + 12);
      v6 = *(_DWORD *)(v5 + 16);
    }
    result = *(_DWORD *)(v5 + 8);
    v9 = v7 + a1;
    v10 = *(_DWORD *)(v5 + 24);
    *(_DWORD *)(v5 + 12) = v9;
    v11 = v9 == result;
    if ( v9 == result )
      v8 = *(_BYTE *)(v5 + 40);
    v12 = (v9 + v10) & ~v10;
    *(_DWORD *)(v5 + 12) = v12;
    if ( v11 )
      *(_BYTE *)(v5 + 40) = v8 | 2;
    if ( v12 - *(_DWORD *)(v5 + 4) > (unsigned int)(v6 - *(_DWORD *)(v5 + 4)) )
    {
      v12 = v6;
      *(_DWORD *)(v5 + 12) = v6;
    }
    *(_DWORD *)(v5 + 8) = v12;
  }
  return result;
}
