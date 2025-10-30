int __fastcall sub_39B88(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(v3, 0x800u, "[DEBUG] Get freq result, chain = %d.\n", a1);
    sub_47AB4(4, v3, 0);
  }
  return *(_DWORD *)(dword_1AEA7C + 4 * a1 + 4);
}
