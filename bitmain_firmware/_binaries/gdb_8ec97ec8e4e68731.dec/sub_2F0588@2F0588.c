int __fastcall sub_2F0588(int a1, _DWORD *a2)
{
  int v5; // r7
  unsigned int v6; // r4
  int v7; // r5
  int v8; // r0
  int *v9; // r3

  if ( sub_2A8884((int)"", 1, a1) != 1 )
    return 0;
  v5 = 1;
  if ( a2[7] > 1u )
  {
    v6 = 1;
    do
    {
      v9 = *(int **)(a2[10] + 4 * v6);
      if ( v9[4] )
      {
        sub_2A6BBC("elf-strtab.c", 302);
        v9 = *(int **)(a2[10] + 4 * v6);
      }
      v7 = v9[3];
      ++v6;
      if ( v7 >= 0 )
      {
        v8 = sub_2A8884(v9[1], v9[3], a1);
        v5 += v8;
        if ( v8 != v7 )
          return 0;
      }
    }
    while ( a2[7] > v6 );
  }
  if ( a2[9] != v5 )
    sub_2A6BBC("elf-strtab.c", 314);
  return 1;
}
