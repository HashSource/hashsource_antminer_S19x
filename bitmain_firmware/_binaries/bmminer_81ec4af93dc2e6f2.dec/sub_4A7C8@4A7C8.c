int __fastcall sub_4A7C8(int a1)
{
  float v1; // s0
  float v2; // s1
  float v3; // s2
  int v5; // r8
  int v6; // r9
  int v7; // r5
  int v8; // r5
  int v10; // r3
  int v11; // r3
  unsigned int v12; // s16
  int v13; // r5
  int v14; // r0
  int v15; // r9
  void *v16; // r3
  float v17; // s13
  float v18; // s12
  float v19; // s14
  int v20; // r3
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v5 = sub_49E5C();
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(
      s,
      0x800u,
      "[DEBUG] Check if is need stop, chain = %d, hw_threshold = %.4f, nonce_rate_threshold = %.2f, nonce_rate_dec_threshold = %.2f.\n",
      a1,
      v1,
      v2,
      v3);
    sub_3AF5C(4, s, 0, v10);
  }
  if ( dword_530F08 && *(_DWORD *)(dword_530F08 + 4) )
  {
    v6 = 4 * a1;
    v7 = 8 * sub_26580();
    v8 = sub_26540() * v7;
    if ( *(_DWORD *)(v5 + 4 * a1 + 8431696) > (unsigned int)(float)((float)v8 * v1) )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(
          s,
          0x800u,
          "chain = %d, hw = %d, hw_threshold = %d, too much hw.\n",
          a1,
          *(_DWORD *)(v5 + v6 + 8431696),
          (unsigned int)(float)((float)v8 * v1));
        sub_3AF5C(3, s, 0, v11);
      }
      return 1;
    }
    v12 = *(_DWORD *)(v5 + 4 * a1 + 8429568);
    v13 = 8 * sub_26580();
    v14 = sub_26540();
    v15 = dword_530F08 + v6;
    v16 = off_AFC24;
    v17 = *(float *)(v15 + 48);
    v18 = *(float *)(v15 + 32);
    v19 = (float)v12 / (float)(v14 * v13);
    *(float *)(v15 + 32) = v19;
    if ( v17 < v19 )
      *(float *)(v15 + 48) = v19;
    if ( (unsigned int)v16 > 3 )
    {
      snprintf(
        s,
        0x800u,
        "chain = %d, nonce_rate_curr = %.4f, nonce_rate_last = %.4f, nonce_rate_max = %.4f\n",
        a1,
        v19,
        v18,
        *(float *)(v15 + 48));
      sub_3AF5C(3, s, 0, v20);
    }
    return 0;
  }
  else
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return 1;
    strcpy(s, "Handle is NULL.\n");
    sub_3AF5C(3, s, 0, *(int *)"LL.\n");
    return 1;
  }
}
