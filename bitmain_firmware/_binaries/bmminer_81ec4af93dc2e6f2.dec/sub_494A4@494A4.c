int __fastcall sub_494A4(_DWORD *a1)
{
  int v2; // r3
  int v4; // r3
  char v5[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v5, 0x800u, "[DEBUG] Send work one chain, chain = %d.\n", *a1);
    sub_3AF5C(4, v5, 0, v4);
  }
  if ( dword_530F08 )
  {
    v2 = *(_DWORD *)(dword_530F08 + 4);
    if ( v2 )
    {
      (*(void (__fastcall **)(_DWORD, _DWORD))(v2 + 28))(*a1, a1[2]);
      a1[1] = 1;
      return 0;
    }
  }
  if ( (unsigned int)off_AFC24 <= 3 )
    return 0;
  sub_49460();
  return 0;
}
