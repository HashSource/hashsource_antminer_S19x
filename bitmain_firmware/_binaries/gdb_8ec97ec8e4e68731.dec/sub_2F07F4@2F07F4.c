int __fastcall sub_2F07F4(int a1, int a2, int *a3, int *a4)
{
  int v4; // r12
  int (*v5)(void); // lr
  bool v7; // zf
  unsigned int v8; // r3

  if ( a3 )
    v4 = *a3;
  else
    v4 = *a4;
  v5 = *(int (**)(void))(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 444) + 436);
  if ( v5 && (unsigned int)(v4 + 0x40000000) <= 0x1FFFFFFF )
    return v5();
  if ( v4 != 1 )
  {
    if ( v4 != 2 )
      sub_2A6BF0((int)"elf-properties.c", 233, (int)"elf_merge_gnu_properties");
    return a3 == 0;
  }
  v7 = a3 == 0;
  if ( a3 )
    v7 = a4 == 0;
  if ( v7 )
    return a3 == 0;
  v8 = a4[2];
  if ( v8 <= a3[2] )
    return 0;
  a3[2] = v8;
  return 1;
}
