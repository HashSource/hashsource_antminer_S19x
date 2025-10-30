void __fastcall sub_21F094(int a1, int a2, int a3, int a4, char *a5, char *a6)
{
  _BYTE *v7; // r12
  int v10; // r3
  char **v11; // r0
  int (__fastcall *v12)(int, int, int); // r0
  void *v13; // r12
  void *v14; // r0
  void *v15; // [sp+8h] [bp-Ch] BYREF
  void *ptr; // [sp+Ch] [bp-8h] BYREF

  v7 = *(_BYTE **)(a1 + 4);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *v7 = 0;
  v10 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 36) = v10;
  v11 = sub_194438(a2);
  v12 = (int (__fastcall *)(int, int, int))sub_194570((int)v11, a4);
  if ( v12(a3, a4, a1) )
  {
    if ( !*(_DWORD *)a1 )
    {
      sub_94700(
        (int)"symtab.c",
        4735,
        "%s: Assertion `%s' failed.",
        "void completion_list_add_name(completion_tracker&, language, const char*, const lookup_name_info&, const char*, const char*)",
        "symname != NULL");
      if ( ptr )
        free(ptr);
      v14 = v15;
      if ( v15 )
        free(v15);
      sub_338FFC(v14);
    }
    sub_F574C((int *)&v15, *(const char **)a1, a5, a6);
    v13 = v15;
    v15 = 0;
    ptr = v13;
    sub_F6C90((_DWORD *)a1, &ptr, a1 + 28, a5, a6);
    if ( ptr )
      free(ptr);
    if ( v15 )
      free(v15);
  }
}
