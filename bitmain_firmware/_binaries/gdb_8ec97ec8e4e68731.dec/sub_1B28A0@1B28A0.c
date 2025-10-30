_BYTE *__fastcall sub_1B28A0(int a1)
{
  int v2; // r4
  int v3; // r3
  _BYTE *result; // r0
  int v5; // r2
  int v6; // r1
  int v7; // r3
  char v8; // r2
  int v9; // r0
  int v10; // r3
  int v11; // r12
  bool v12; // zf
  int v13; // r3
  char v14; // r1
  int v15; // r3

  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(v2 + 80);
  if ( !v3 )
  {
    v6 = *(_DWORD *)(v2 + 16);
    v7 = *(_DWORD *)(v2 + 12);
    v8 = v6 - v7;
    if ( (unsigned int)(v6 - v7) <= 0x2F )
    {
      obstack_newchunk(*(struct obstack **)(a1 + 40), 48);
      v7 = *(_DWORD *)(v2 + 12);
      v6 = *(_DWORD *)(v2 + 16);
    }
    v9 = *(_DWORD *)(v2 + 8);
    v10 = v7 + 48;
    v11 = *(_DWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 12) = v10;
    v12 = v10 == v9;
    *(_DWORD *)(v2 + 80) = v9;
    if ( v10 == v9 )
      v8 = *(_BYTE *)(v2 + 40);
    v13 = (v10 + v11) & ~v11;
    *(_DWORD *)(v2 + 12) = v13;
    if ( v12 )
      *(_BYTE *)(v2 + 40) = v8 | 2;
    if ( v13 - *(_DWORD *)(v2 + 4) > (unsigned int)(v6 - *(_DWORD *)(v2 + 4)) )
    {
      v13 = v6;
      *(_DWORD *)(v2 + 12) = v6;
    }
    *(_DWORD *)(v2 + 8) = v13;
    v2 = *(_DWORD *)(a1 + 40);
    v3 = *(_DWORD *)(v2 + 80);
  }
  result = memset((void *)(v3 + 48 * *(_DWORD *)(v2 + 84)), 0, 0x30u);
  v5 = *(_DWORD *)(a1 + 40);
  result[32] = 0;
  v14 = result[20] & 0xE0;
  result[20] = v14;
  v15 = v14 & 0x1F;
  if ( (unsigned int)(v15 - 3) > 4 )
  {
    if ( v15 == 14 )
    {
      if ( (v14 & 0x20) != 0 )
      {
        sub_94700(
          (int)"symtab.c",
          663,
          "%s: Assertion `%s' failed.",
          "void symbol_set_language(general_symbol_info*, language, obstack*)",
          "gsymbol->ada_mangled == 0");
        JUMPOUT(0x21AF44);
      }
      *((_DWORD *)result + 4) = v5;
    }
    else
    {
      *((_DWORD *)result + 4) = 0;
    }
  }
  else
  {
    *((_DWORD *)result + 4) = 0;
  }
  return result;
}
