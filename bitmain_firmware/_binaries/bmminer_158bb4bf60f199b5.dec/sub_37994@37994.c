int __fastcall sub_37994(int a1)
{
  float v1; // s0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(
      s,
      0x800u,
      "[DEBUG] Check if chain is unqualified happen, chain = %d, nonce_rate_threshold = %.2f\n",
      a1,
      v1);
    sub_47AB4(4, s, 0);
  }
  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
  {
    if ( *(float *)(dword_1AEA78 + 4 * a1 + 168) < v1 )
    {
      *(_BYTE *)(dword_1AEA78 + a1 + 88) = 1;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    return sub_36F30();
  }
  else
  {
    return 1;
  }
}
