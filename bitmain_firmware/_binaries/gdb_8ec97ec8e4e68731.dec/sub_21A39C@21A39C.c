int __fastcall sub_21A39C(int a1, int a2, const char *a3)
{
  int v3; // r3
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int result; // r0
  unsigned __int8 *v10; // r2
  __int16 *v11; // r1

  v3 = *(_DWORD *)(a1 + 132);
  if ( !v3 )
    return 0;
  v6 = (*(int (__fastcall **)(int, int, const char *, int))(*(_DWORD *)(v3 + 40) + 16))(a1, a2, a3, 2);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = sub_C2F00(*(_DWORD **)(*(_DWORD *)(v6 + 32) + 4 * (a2 + 2)), a3, 2, (int (__fastcall *)(int, int))sub_C31B4, 0);
  if ( !v8 )
    sub_16420(a2, a3, *(_DWORD *)(v7 + 12));
  result = *(_DWORD *)(v8 + 24);
  v10 = *(unsigned __int8 **)(result + 24);
  if ( (unsigned int)*v10 - 3 <= 1 && !*((_WORD *)v10 + 2) )
  {
    if ( (*((_WORD *)v10 + 1) & 0x380) != 0x80
      || (v11 = (__int16 *)*((_DWORD *)v10 + 7), v11 == &word_3B4A2C)
      || !v11[2] )
    {
      if ( (*(_DWORD *)v10 & 0x20400) != 0x20000 )
      {
        sub_94700(
          (int)"symtab.c",
          2753,
          "%s: Assertion `%s' failed.",
          "type* basic_lookup_transparent_type_quick(objfile*, int, const char*)",
          "!TYPE_IS_OPAQUE (SYMBOL_TYPE (sym))");
        return 0;
      }
    }
  }
  return result;
}
