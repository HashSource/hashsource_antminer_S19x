int __fastcall sub_2F04E0(_DWORD *a1, unsigned int a2)
{
  int v4; // r6
  int v5; // r3
  int result; // r0

  if ( !a2 )
    return 0;
  if ( a1[7] <= a2 )
  {
    sub_2A6BBC("elf-strtab.c", 280);
    if ( a1[9] )
      goto LABEL_4;
LABEL_9:
    sub_2A6BBC("elf-strtab.c", 281);
    goto LABEL_4;
  }
  if ( !a1[9] )
    goto LABEL_9;
LABEL_4:
  v4 = *(_DWORD *)(a1[10] + 4 * a2);
  v5 = *(_DWORD *)(v4 + 16);
  if ( !v5 )
  {
    sub_2A6BBC("elf-strtab.c", 283);
    v5 = *(_DWORD *)(v4 + 16);
  }
  result = *(_DWORD *)(*(_DWORD *)(a1[10] + 4 * a2) + 20);
  *(_DWORD *)(v4 + 16) = v5 - 1;
  return result;
}
