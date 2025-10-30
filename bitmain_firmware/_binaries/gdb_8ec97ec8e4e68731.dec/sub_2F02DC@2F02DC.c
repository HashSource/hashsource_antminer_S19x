int __fastcall sub_2F02DC(int result, unsigned int a2)
{
  int v2; // r5
  int v4; // r2
  int v5; // r3

  if ( a2 - 1 > 0xFFFFFFFD )
    return result;
  v2 = result;
  if ( *(_DWORD *)(result + 36) )
  {
    result = sub_2A6BBC("elf-strtab.c", 197);
    if ( *(_DWORD *)(v2 + 28) > a2 )
      goto LABEL_4;
LABEL_8:
    result = sub_2A6BBC("elf-strtab.c", 198);
    goto LABEL_4;
  }
  if ( *(_DWORD *)(result + 28) <= a2 )
    goto LABEL_8;
LABEL_4:
  v4 = *(_DWORD *)(*(_DWORD *)(v2 + 40) + 4 * a2);
  v5 = *(_DWORD *)(v4 + 16);
  if ( !v5 )
  {
    result = sub_2A6BBC("elf-strtab.c", 199);
    v4 = *(_DWORD *)(*(_DWORD *)(v2 + 40) + 4 * a2);
    v5 = *(_DWORD *)(v4 + 16);
  }
  *(_DWORD *)(v4 + 16) = v5 - 1;
  return result;
}
