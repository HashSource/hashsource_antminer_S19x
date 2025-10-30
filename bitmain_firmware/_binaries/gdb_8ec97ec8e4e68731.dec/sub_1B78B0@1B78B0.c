void __fastcall sub_1B78B0(int a1, int a2)
{
  int v3; // r0
  int v4; // r5
  int i; // r8
  int v6; // r7
  void *v7; // r10
  void *v8; // r4
  int v9; // r0
  int v10; // r1
  _DWORD *v11; // r4
  int v12; // r11
  _DWORD *v13; // r3
  int v14; // r0

  v3 = sub_1B654C(a1, a2);
  v4 = *(_DWORD *)(a1 + 176);
  for ( i = v3; v4; v4 = ((int (__fastcall *)(int, int))loc_1B7308)(a1, v4) )
  {
    v6 = sub_211F3C(a1);
    v7 = sub_9253C((int)sub_1B6268, v6);
    ((void (__fastcall *)(int, _DWORD))loc_212028)(v6, *(_DWORD *)(v4 + 36));
    v8 = *(void **)(v4 + 148);
    v9 = sub_16304C(*(_DWORD *)(v4 + 36));
    if ( v8 != (void *)v9 )
    {
      v14 = sub_94700(
              (int)"objfiles.c",
              921,
              "%s: Assertion `%s' failed.",
              "void objfile_relocate(objfile*, const section_offsets*)",
              "debug_objfile->num_sections == gdb_bfd_count_sections (debug_objfile->obfd)");
      if ( v8 )
        sub_339E64(v8);
      sub_338FFC(v14);
    }
    v10 = *(_DWORD *)(v4 + 148);
    v11 = (_DWORD *)(4 * v10);
    if ( 4 * v10 )
    {
      if ( (unsigned int)v11 > 0x3FFFFFFF )
        sub_33D01C(v9, v10);
      v12 = 4 * v10;
      v11 = sub_9836C(16 * v10);
      v13 = v11;
      do
        *v13++ = 0;
      while ( &v11[v12] != v13 );
      v10 = *(_DWORD *)(v4 + 148);
    }
    sub_211FD8(v11, v10, v6);
    i |= sub_1B654C(v4, (int)v11);
    sub_92620(v7);
    if ( v11 )
      sub_339E64(v11);
  }
  if ( i )
    sub_DC424();
}
