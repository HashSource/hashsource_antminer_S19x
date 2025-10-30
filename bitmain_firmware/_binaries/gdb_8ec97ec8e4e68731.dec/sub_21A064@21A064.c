int __fastcall sub_21A064(_DWORD *a1, int a2, const char *a3)
{
  _DWORD *v3; // r4
  int v5; // r5
  int v6; // r0
  int result; // r0
  unsigned __int8 *v8; // r2
  __int16 *v9; // r1

  v3 = a1;
  if ( !a1 )
    return 0;
  v5 = a2 + 2;
  while ( 1 )
  {
    v6 = sub_C2F00(*(_DWORD **)(v3[8] + 4 * v5), a3, 2, (int (__fastcall *)(int, int))sub_C31B4, 0);
    if ( v6 )
      break;
    v3 = (_DWORD *)*v3;
    if ( !v3 )
      return 0;
  }
  result = *(_DWORD *)(v6 + 24);
  v8 = *(unsigned __int8 **)(result + 24);
  if ( (unsigned int)*v8 - 3 <= 1 && !*((_WORD *)v8 + 2) )
  {
    if ( (*((_WORD *)v8 + 1) & 0x380) != 0x80 || (v9 = (__int16 *)*((_DWORD *)v8 + 7), v9 == &word_3B4A2C) || !v9[2] )
    {
      if ( (*(_DWORD *)v8 & 0x20400) != 0x20000 )
      {
        sub_94700(
          (int)"symtab.c",
          2778,
          "%s: Assertion `%s' failed.",
          "type* basic_lookup_transparent_type_1(objfile*, int, const char*)",
          "!TYPE_IS_OPAQUE (SYMBOL_TYPE (sym))");
        return 0;
      }
    }
  }
  return result;
}
