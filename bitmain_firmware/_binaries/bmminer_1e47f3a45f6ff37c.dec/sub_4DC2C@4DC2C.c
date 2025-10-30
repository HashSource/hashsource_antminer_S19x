int __fastcall sub_4DC2C(int a1)
{
  int v2; // r3
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v4, 0x800u, "[DEBUG] Get freq result, chain = %d.\n", a1);
    sub_3B6AC(4, v4, 0, v2);
  }
  return *(_DWORD *)(dword_535D98 + 4 * a1 + 4);
}
