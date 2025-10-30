void __fastcall sub_21AA24(_BYTE *a1, int a2, int a3)
{
  _DWORD *v4; // r4
  void *v5; // r6
  _DWORD *i; // r4
  int v7; // r3
  int v8; // r0
  _BYTE *v11; // [sp+14h] [bp-4h] BYREF

  if ( *a1 != 47 )
  {
    v4 = *(_DWORD **)(dword_487D2C + 36);
    if ( v4 )
    {
      v5 = 0;
      goto LABEL_5;
    }
    return;
  }
  sub_984A4((int *)&v11, (int)a1);
  v5 = v11;
  if ( *v11 != 47 )
  {
    v8 = sub_94700(
           (int)"symtab.c",
           474,
           "%s: Assertion `%s' failed.",
           "void iterate_over_symtabs(const char*, gdb::function_view<bool(symtab*)>)",
           "IS_ABSOLUTE_PATH (real_path.get ())");
    if ( v5 )
      free(v5);
    sub_338FFC(v8);
  }
  v4 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v4 )
  {
LABEL_7:
    free(v5);
    return;
  }
LABEL_5:
  while ( !((int (__fastcall *)(_BYTE *, void *, _DWORD, _DWORD, int, int))loc_21A8B4)(a1, v5, v4[5], 0, a2, a3) )
  {
    v4 = (_DWORD *)*v4;
    if ( !v4 )
    {
      for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
      {
        v7 = i[33];
        if ( v7
          && (*(int (__fastcall **)(_DWORD *, _BYTE *, void *, int, int))(*(_DWORD *)(v7 + 40) + 12))(i, a1, v5, a2, a3) )
        {
          break;
        }
      }
      break;
    }
  }
  if ( v5 )
    goto LABEL_7;
}
