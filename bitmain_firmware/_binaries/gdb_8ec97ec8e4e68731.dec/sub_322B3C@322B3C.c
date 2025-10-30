int __fastcall sub_322B3C(int a1)
{
  unsigned int v1; // r0

  v1 = a1 - 3;
  if ( v1 > 0xFA )
    return 0;
  else
    return *(_DWORD *)&aTpc[4 * v1];
}
