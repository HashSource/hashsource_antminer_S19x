int __fastcall sub_2A4C9C(int a1, int a2)
{
  _BYTE *v3; // r4
  const char *v6; // r9
  size_t v7; // r0
  int v8; // r3
  unsigned int v9; // r8
  size_t v10; // r5

  v3 = **(_BYTE ***)(a2 + 136);
  if ( *v3 != 35 || v3[1] != 49 || v3[2] != 47 || (word_438898[(unsigned __int8)v3[3]] & 4) == 0 )
    return sub_2A8884(**(_DWORD **)(a2 + 136), 60, a1) == 60;
  v6 = (const char *)sub_3245A4(*(_DWORD *)a2);
  v7 = strlen(v6);
  v8 = *(_DWORD *)(a2 + 136);
  v9 = (v7 + 3) & 0xFFFFFFFC;
  v10 = v7;
  if ( *(_DWORD *)(v8 + 8) != v9 )
  {
    sub_2A6BBC("archive.c", 1859);
    v8 = *(_DWORD *)(a2 + 136);
  }
  if ( !sub_2A3370(v3 + 48, 0xAu, v9 + *(_DWORD *)(v8 + 4))
    || sub_2A8884(v3, 60, a1) != 60
    || sub_2A8884(v6, v10, a1) != v10 )
  {
    return 0;
  }
  if ( (v10 & 3) != 0 )
    return sub_2A8884(&unk_4113DC, 4 - (v10 & 3), a1) == 4 - (v10 & 3);
  return 1;
}
