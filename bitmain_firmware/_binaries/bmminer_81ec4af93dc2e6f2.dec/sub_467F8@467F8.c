int sub_467F8()
{
  int v0; // r8
  int i; // r5
  int v2; // r4
  int v3; // r2
  float v4; // s12
  float v5; // s14
  int v7; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v0 = 0;
  for ( i = 0; i != 4; ++i )
  {
    v2 = 4 * (i + 1032);
    if ( sub_266F0(i) )
    {
      v3 = dword_530EF4;
      v4 = *(float *)(dword_530EF4 + v2);
      v5 = *(float *)(*(_DWORD *)(dword_530EF4 + 8) + 20);
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "chain = %d, nonce_rate_max = %.4f, nonce_rate_threshold = %.4f\n", i, v4, v5);
        sub_3AF5C(3, s, 0, v7);
        v3 = dword_530EF4;
        v4 = *(float *)(dword_530EF4 + v2);
        v5 = *(float *)(*(_DWORD *)(dword_530EF4 + 8) + 20);
      }
      if ( v4 < v5 )
      {
        v0 = 1;
        *(_DWORD *)(v3 + 4 * (i + 1040)) = 1;
      }
    }
  }
  return v0;
}
