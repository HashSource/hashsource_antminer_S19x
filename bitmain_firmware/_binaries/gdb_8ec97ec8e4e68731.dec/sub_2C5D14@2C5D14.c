int __fastcall sub_2C5D14(int a1, int a2)
{
  int v4; // r3
  int result; // r0

  if ( (*(_BYTE *)a2 & 3) == 2 )
    return 1;
  if ( (*(_DWORD *)(a1 + 40) & 0x800) == 0 )
  {
    v4 = *(_DWORD *)(a2 + 28);
    if ( *(_DWORD *)(v4 + 44) == 4 )
      goto LABEL_4;
LABEL_7:
    sub_2A6BBC("elf32-arm.c", 7454);
    __und(0);
  }
  sub_2A6BBC("elf32-arm.c", 7451);
  v4 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v4 + 44) != 4 )
    goto LABEL_7;
LABEL_4:
  result = 1;
  if ( !*(_DWORD *)(v4 + 360) )
    *(_DWORD *)(v4 + 360) = a1;
  return result;
}
