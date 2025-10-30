int __fastcall sub_1C70C(int a1, int a2, int *a3)
{
  int v4; // r3
  int v5; // r0
  int v7; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
  {
    if ( !a3 )
      return 0;
    v5 = (*(int (**)(void))(*(_DWORD *)(dword_B3CC0 + 4 * a1) + 204))();
    v4 = 0;
    *a3 = v5;
    return v4;
  }
  if ( (unsigned int)dword_B308C <= 4 )
    return 0xFFFF;
  snprintf(s, 0x800u, "No work mode hash rate, chain = %d, mode = %d.\n", a1, a2);
  sub_3B6AC(4, s, 0, v7);
  return 0xFFFF;
}
