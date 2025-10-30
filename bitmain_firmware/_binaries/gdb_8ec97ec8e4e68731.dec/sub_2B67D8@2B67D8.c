int __fastcall sub_2B67D8(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v4; // r12
  int v5; // lr
  bool v6; // zf
  unsigned int v7; // r1
  int v8; // r12
  int v10; // r12

  if ( a2[11] != 4 )
    __und(0);
  if ( !a2[12] && *(unsigned __int8 *)(a4 + 4) == 160 )
    a3 = (_DWORD *)a2[65];
  if ( !a3 )
    sub_2A6BF0((int)"elf32-arm.c", 9168, (int)"elf32_arm_add_dynreloc");
  v4 = a3[19];
  v5 = a3[27];
  v6 = a2[108] == 0;
  a3[19] = v4 + 1;
  v7 = a3[9];
  if ( v6 )
  {
    v8 = 12 * v4;
    if ( v7 >= v8 + 12 )
      return sub_2C8564(a1, a4, v5 + v8);
LABEL_13:
    sub_2A6BF0((int)"elf32-arm.c", 9172, (int)"elf32_arm_add_dynreloc");
  }
  v10 = 8 * v4;
  if ( v10 + 8 > v7 )
    goto LABEL_13;
  return sub_2C8528(a1, a4, v5 + v10);
}
