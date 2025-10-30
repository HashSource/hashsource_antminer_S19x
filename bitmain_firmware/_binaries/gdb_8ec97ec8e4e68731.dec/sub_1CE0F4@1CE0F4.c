void *__fastcall sub_1CE0F4(int a1)
{
  void *v1; // r6
  int v2; // r5
  int v5; // r0
  int v6; // r0
  _BYTE *v7; // r2
  void *v8; // r6
  bool v9; // zf
  int v10; // r0
  int v11; // [sp+Ch] [bp-4h] BYREF

  if ( *(_BYTE *)(a1 + 54) )
  {
    sub_94700(
      (int)"psymtab.c",
      1199,
      "%s: Assertion `%s' failed.",
      "const char* psymtab_to_fullname(partial_symtab*)",
      "!ps->anonymous");
    free(v1);
    sub_338FFC(v10);
  }
  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
  {
    v5 = sub_204098(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 12), a1 + 8);
    if ( v5 >= 0 )
    {
      close(v5);
      return *(void **)(a1 + 8);
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 12);
      v7 = *(_BYTE **)(a1 + 4);
      if ( v6 && *v7 != 47 )
        v8 = (void *)sub_31E27C(v6, &word_398974, v7);
      else
        v8 = (void *)sub_327254(*(_DWORD *)(a1 + 4));
      sub_203FF4(&v11, v8);
      v2 = v11;
      v9 = v11 == 0;
      *(_DWORD *)(a1 + 8) = v11;
      if ( v9 )
      {
        *(_DWORD *)(a1 + 8) = v8;
        return v8;
      }
      else
      {
        free(v8);
      }
    }
  }
  return (void *)v2;
}
