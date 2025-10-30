int __fastcall sub_2F0260(int result, unsigned int a2)
{
  int v2; // r5
  int v4; // r2

  if ( a2 - 1 <= 0xFFFFFFFD )
  {
    v2 = result;
    if ( *(_DWORD *)(result + 36) )
    {
      result = sub_2A6BBC("elf-strtab.c", 187);
      if ( *(_DWORD *)(v2 + 28) > a2 )
        goto LABEL_4;
    }
    else if ( *(_DWORD *)(result + 28) > a2 )
    {
LABEL_4:
      v4 = *(_DWORD *)(*(_DWORD *)(v2 + 40) + 4 * a2);
      ++*(_DWORD *)(v4 + 16);
      return result;
    }
    result = sub_2A6BBC("elf-strtab.c", 188);
    goto LABEL_4;
  }
  return result;
}
