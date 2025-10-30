int __fastcall sub_1C830(int a1, int a2, int *a3)
{
  int v4; // r0
  int v5; // r3
  int v7; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( dword_B0F4C && *(_BYTE *)(dword_B0F4C + 28) )
  {
    if ( !a3 )
      return 0;
    v4 = (*(int (**)(void))(*(_DWORD *)(dword_B0F4C + 4 * a1) + 204))();
    v5 = 0;
    *a3 = v4;
    return v5;
  }
  if ( (unsigned int)off_AFC24 <= 4 )
    return 0xFFFF;
  snprintf(s, 0x800u, "No work mode hash rate, chain = %d, mode = %d.\n", a1, a2);
  sub_3AF5C(4, s, 0, v7);
  return 0xFFFF;
}
