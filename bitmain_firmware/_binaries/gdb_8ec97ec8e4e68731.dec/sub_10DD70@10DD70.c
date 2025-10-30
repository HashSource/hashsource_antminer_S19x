int __fastcall sub_10DD70(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v3; // r1
  unsigned int v4; // lr
  unsigned int i; // r2
  unsigned int v7; // r3
  int result; // r0
  unsigned __int64 v9; // r4
  unsigned int v10; // r12
  unsigned __int64 v11; // r4
  __int64 v12; // r0
  int v13; // lr
  int v14; // r4
  int v15; // r2
  int v16; // r5
  int v17; // r6
  int v18; // [sp-4h] [bp-10h]

  v3 = *a1;
  v4 = a1[1];
  if ( v4 )
  {
    for ( i = 0; v3 > i; i = v7 + 1 )
    {
      v7 = (v3 + i) >> 1;
      result = *(_DWORD *)(v4 + 4 * v7);
      v9 = *(_QWORD *)(result + 8);
      if ( a2 == v9 )
        return result;
      if ( a2 < v9 )
      {
        if ( i >= v7 )
          return 0;
        while ( 1 )
        {
          v10 = (i + v7) >> 1;
          result = *(_DWORD *)(v4 + 4 * v10);
          v11 = *(_QWORD *)(result + 8);
          if ( v11 == a2 )
            return result;
          if ( v11 <= a2 )
          {
            v3 = v7;
            v7 = (i + v7) >> 1;
            break;
          }
          v7 = (i + v7) >> 1;
          if ( i >= v10 )
            return 0;
        }
      }
    }
  }
  else if ( v3 )
  {
    v12 = sub_94700(
            (int)"dwarf2-frame.c",
            1648,
            "%s: Assertion `%s' failed.",
            "dwarf2_cie* find_cie(dwarf2_cie_table*, ULONGEST)",
            "cie_table->num_entries == 0");
    v18 = v13;
    v14 = HIDWORD(v12);
    v16 = v15;
    v17 = v12;
    if ( ((int (*)(void))loc_167368)() != HIDWORD(v12) )
    {
      if ( v14 == ((int (__fastcall *)(int))loc_1672F0)(v17) )
        *(_DWORD *)(v16 + 16) = 11;
      __asm { POP             {R4-R6,PC} }
    }
    *(_DWORD *)(v16 + 16) = 9;
    __asm { POP             {R4-R6,PC} }
  }
  return 0;
}
