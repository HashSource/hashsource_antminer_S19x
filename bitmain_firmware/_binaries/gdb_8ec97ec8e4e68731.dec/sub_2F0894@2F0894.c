_DWORD *__fastcall sub_2F0894(int a1, unsigned int a2, unsigned int a3)
{
  int v3; // r4
  int *v7; // r0
  int *v8; // r4
  unsigned int v9; // r3
  unsigned int v10; // r3
  _DWORD *v11; // r0
  _DWORD *result; // r0
  int v13; // r2
  unsigned int v14; // r3

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) != 5 )
    sub_2A6BF0((int)"elf-properties.c", 41, (int)"_bfd_elf_get_property");
  v3 = *(_DWORD *)(a1 + 160);
  v7 = *(int **)(v3 + 592);
  v8 = (int *)(v3 + 592);
  if ( !v7 )
  {
LABEL_9:
    v11 = (_DWORD *)sub_2ACBF4(a1, 20);
    if ( !v11 )
    {
      sub_2A6A5C("%B: out of memory in _bfd_elf_get_property", a1);
      exit(1);
    }
    v11[1] = a2;
    *v11 = 0;
    v11[3] = 0;
    v11[4] = 0;
    v13 = *v8;
    v11[2] = a3;
    *v11 = v13;
    *v8 = (int)v11;
    return v11 + 1;
  }
  v9 = v7[1];
  if ( a2 != v9 )
  {
    if ( a2 >= v9 )
    {
      do
      {
        v8 = v7;
        v7 = (int *)*v7;
        if ( !v7 )
          break;
        v10 = v7[1];
        if ( v10 == a2 )
          goto LABEL_11;
      }
      while ( v10 <= a2 );
    }
    goto LABEL_9;
  }
LABEL_11:
  v14 = v7[2];
  result = v7 + 1;
  if ( v14 < a3 )
    result[1] = a3;
  return result;
}
