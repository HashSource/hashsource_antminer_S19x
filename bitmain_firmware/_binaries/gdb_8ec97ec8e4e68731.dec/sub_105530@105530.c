const char *__fastcall sub_105530(int a1, _DWORD *a2)
{
  unsigned int v4; // r5

  v4 = *a2 + dword_47B268;
  if ( v4 < *(_DWORD *)(sub_1B6B24(a1, dword_47B26C) + 16) && !__CFADD__(*a2, dword_47B268) )
    return (const char *)(*(_DWORD *)(sub_1B6B24(a1, dword_47B26C) + 12) + *a2 + dword_47B268);
  if ( dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, "bad string table offset in symbol %d", dword_478988);
  return "<bad string table offset>";
}
