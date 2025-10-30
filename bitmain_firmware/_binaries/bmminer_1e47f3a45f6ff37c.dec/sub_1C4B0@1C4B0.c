int __fastcall sub_1C4B0(int a1, int *a2)
{
  int v3; // r0
  int v4; // r3
  int v6; // r3
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
  {
    if ( !a2 )
      return -2;
    v3 = (*(int (**)(void))(*(_DWORD *)(dword_B3CC0 + 4 * a1) + 236))();
    v4 = 0;
    *a2 = v3;
    return v4;
  }
  if ( (unsigned int)dword_B308C <= 4 )
    return -1;
  snprintf(v7, 0x800u, "No test standard, chain = %d.\n", a1);
  sub_3B6AC(4, v7, 0, v6);
  return -1;
}
