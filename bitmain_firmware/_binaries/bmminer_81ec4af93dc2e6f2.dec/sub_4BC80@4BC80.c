int __fastcall sub_4BC80(int a1)
{
  int v2; // r3
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v4, 0x800u, "[DEBUG] Get freq result, chain = %d.\n", a1);
    sub_3AF5C(4, v4, 0, v2);
  }
  return *(_DWORD *)(dword_530F0C + 4 * a1 + 4);
}
