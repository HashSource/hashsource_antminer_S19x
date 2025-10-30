int __fastcall sub_123EC0(
        int a1,
        const char *a2,
        int a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int *a7,
        _DWORD *a8,
        unsigned int *a9)
{
  int v12; // r1
  unsigned int v13; // r3
  bool v15; // zf
  int v16; // r0
  int v17; // r3
  int v18; // r12
  __int64 v19; // r2
  __int64 v20; // r2
  __int64 v21; // r2

  if ( !*(_BYTE *)(a4 + 16) )
    ((void (__fastcall *)(int, int))loc_11FFD0)(a1, a4);
  v12 = *(_DWORD *)(a4 + 4);
  v13 = *(_DWORD *)v12;
  if ( *(_DWORD *)v12 > 3u )
  {
    v15 = v13 == 5;
    if ( v13 <= 5 )
      v15 = a3 == 0;
    if ( v15 )
    {
      if ( !dword_4872FC )
      {
        sub_946B0(
          "Skipping deprecated .gdb_index section in %s.\n"
          "Do \"set use-deprecated-index-sections on\" before the file is read\n"
          "to use the section anyway.",
          a2);
        dword_4872FC = 1;
      }
      return 0;
    }
    if ( v13 > 8 )
      return 0;
    a5[5] = v13;
    v16 = *(_DWORD *)(v12 + 4);
    v17 = *(_DWORD *)(v12 + 8);
    v18 = *(_DWORD *)(a4 + 8);
    a5[7] = 0;
    a5[6] = v18;
    *a6 = v12 + v16;
    *a7 = (unsigned int)(v17 - v16) >> 3;
    v19 = *(_QWORD *)(v12 + 8);
    *a8 = v12 + v19;
    *a9 = (unsigned int)(HIDWORD(v19) - v19) >> 3;
    v20 = *(_QWORD *)(v12 + 12);
    a5[8] = v12 + v20;
    a5[9] = HIDWORD(v20) - v20;
    v21 = *(_QWORD *)(v12 + 16);
    a5[10] = v12 + v21;
    a5[11] = (HIDWORD(v21) - (int)v21) >> 3;
    a5[12] = v12 + *(_DWORD *)(v12 + 20);
    return 1;
  }
  else
  {
    if ( dword_4872F8 )
      return 0;
    sub_946B0("Skipping obsolete .gdb_index section in %s.", a2);
    dword_4872F8 = 1;
    return 0;
  }
}
