int __fastcall sub_4A1EC(int a1)
{
  int v2; // r3
  int v4; // r3
  char v5[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v5, 0x800u, "[DEBUG] Check if recv nonce enough, chain = %d.\n", a1);
    sub_3AF5C(4, v5, 0, v4);
  }
  if ( dword_530F08 )
  {
    v2 = *(_DWORD *)(dword_530F08 + 4);
    if ( v2 )
      return (*(int (__fastcall **)(int))(v2 + 40))(a1);
  }
  if ( (unsigned int)off_AFC24 > 3 )
    return sub_4955C();
  return 1;
}
