int sub_486D0()
{
  int v0; // r7
  int i; // r4
  int v3; // r3
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v0 = 0;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(
          s,
          0x800u,
          "chain = %d, nonce_rate_max = %.4f, nonce_rate_threshold = %.4f\n",
          i,
          *(float *)(dword_535D80 + 4 * (i + 1032)),
          *(float *)(*(_DWORD *)(dword_535D80 + 8) + 20));
        sub_3B6AC(3, s, 0, v3);
      }
      if ( *(float *)(dword_535D80 + 4 * i + 4128) < *(float *)(*(_DWORD *)(dword_535D80 + 8) + 20) )
      {
        v0 = 1;
        *(_DWORD *)(dword_535D80 + 4 * i + 4160) = 1;
      }
    }
  }
  return v0;
}
