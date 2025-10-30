int __fastcall sub_1A238(int a1)
{
  int v2; // r3
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_B0F4C && *(_BYTE *)(dword_B0F4C + 28) )
    return (*(int (**)(void))(*(_DWORD *)(dword_B0F4C + 4 * a1) + 212))();
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v3, 0x800u, "No temp, chain = %d.\n", a1);
    sub_3AF5C(4, v3, 0, v2);
  }
  return -1;
}
