int sub_33A7C()
{
  int v0; // r8
  int i; // r4
  int v2; // r3
  int v3; // r10
  float v4; // s12
  float v5; // s14
  int v6; // r2
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v0 = 0;
  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        return v0;
    }
    v2 = dword_1AEA6C;
    v3 = 4 * (i + 1268);
    v4 = *(float *)(dword_1AEA6C + v3);
    v5 = *(float *)(*(_DWORD *)(dword_1AEA6C + 8) + 20);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "chain = %d, nonce_rate_max = %.4f, nonce_rate_threshold = %.4f\n", i, v4, v5);
      sub_47AB4(3, s, 0);
      v2 = dword_1AEA6C;
      v4 = *(float *)(dword_1AEA6C + v3);
      v5 = *(float *)(*(_DWORD *)(dword_1AEA6C + 8) + 20);
    }
    v6 = i + 1300;
    if ( v4 < v5 )
    {
      v0 = 1;
      *(_DWORD *)(v2 + 4 * v6) = 1;
    }
  }
  return v0;
}
