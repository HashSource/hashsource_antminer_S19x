int __fastcall sub_4A06C(int a1)
{
  float v1; // s0
  int v4; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(
      s,
      0x800u,
      "[DEBUG] Check if chain is unqualified happen, chain = %d, nonce_rate_threshold = %.2f\n",
      a1,
      v1);
    sub_3AF5C(4, s, 0, v4);
  }
  if ( dword_530F08 && *(_DWORD *)(dword_530F08 + 4) )
  {
    if ( *(float *)(dword_530F08 + 4 * a1 + 48) < v1 )
    {
      *(_BYTE *)(dword_530F08 + a1 + 28) = 1;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else if ( (unsigned int)off_AFC24 > 3 )
  {
    return sub_4955C();
  }
  else
  {
    return 1;
  }
}
