int __fastcall sub_2F0410(int result, unsigned int *a2)
{
  int v2; // r6
  unsigned int v4; // r5
  unsigned int v5; // r3
  int v6; // r2
  unsigned int *v7; // r1
  unsigned int v8; // r12
  unsigned int v9; // t1
  int v10; // t1
  int v11; // r0
  int *v12; // r3
  int v13; // t1

  v2 = result;
  v4 = *(_DWORD *)(result + 28);
  if ( *(_DWORD *)(result + 36) )
  {
    result = sub_2A6BBC("elf-strtab.c", 251);
    v5 = *a2;
    if ( *a2 <= v4 )
      goto LABEL_3;
  }
  else
  {
    v5 = *a2;
    if ( *a2 <= v4 )
      goto LABEL_3;
  }
  result = sub_2A6BBC("elf-strtab.c", 252);
  v5 = *a2;
LABEL_3:
  *(_DWORD *)(v2 + 28) = v5;
  if ( v5 > 1 )
  {
    v6 = *(_DWORD *)(v2 + 40);
    v7 = a2 + 1;
    do
    {
      v9 = v7[1];
      ++v7;
      v8 = v9;
      v10 = *(_DWORD *)(v6 + 4);
      v6 += 4;
      result = v10;
      *(_DWORD *)(v10 + 16) = v8;
    }
    while ( v7 != &a2[v5] );
  }
  else
  {
    v5 = 1;
  }
  if ( v4 > v5 )
  {
    v11 = *(_DWORD *)(v2 + 40);
    v12 = (int *)(v11 + 4 * v5);
    result = v11 + 4 * v4;
    do
    {
      v13 = *v12++;
      *(_DWORD *)(v13 + 16) = 0;
      *(_DWORD *)(v13 + 12) = 0;
    }
    while ( v12 != (int *)result );
  }
  return result;
}
