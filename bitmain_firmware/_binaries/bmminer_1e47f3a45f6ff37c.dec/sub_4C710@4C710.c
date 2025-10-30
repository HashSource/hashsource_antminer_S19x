int __fastcall sub_4C710(int a1)
{
  float v1; // s0
  float v2; // s1
  float v3; // s2
  int v5; // r5
  int v6; // r4
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r0
  int v11; // r3
  float v12; // s16
  int v13; // r4
  int v14; // r0
  int v15; // r9
  unsigned int v16; // r3
  float v17; // s13
  float v18; // s14
  float v19; // s15
  int v20; // r3
  int v21; // r3
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v5 = sub_4BCE4();
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(
      s,
      0x800u,
      "[DEBUG] Check if is need stop, chain = %d, hw_threshold = %.4f, nonce_rate_threshold = %.2f, nonce_rate_dec_threshold = %.2f.\n",
      a1,
      v1,
      v2,
      v3);
    sub_3B6AC(4, s, 0, v11);
  }
  if ( !dword_535D94 || !*(_DWORD *)(dword_535D94 + 4) )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "Handle is NULL.\n");
      sub_3B6AC(3, s, 0, *(int *)"LL.\n");
    }
    return 1;
  }
  v6 = sub_26A84();
  v7 = sub_26A44();
  v8 = *(_DWORD *)(v5 + 4 * a1 + 8431696);
  v9 = v7 * 8 * v6;
  if ( (unsigned int)(float)((float)v9 * v1) >= v8 )
  {
    v12 = (float)*(unsigned int *)(v5 + 4 * a1 + 8429568);
    v13 = sub_26A84();
    v14 = sub_26A44();
    v15 = dword_535D94 + 4 * a1;
    v16 = dword_B308C;
    v17 = *(float *)(v15 + 48);
    v18 = *(float *)(v15 + 32);
    v19 = v12 / (float)(v14 * 8 * v13);
    *(float *)(v15 + 32) = v19;
    if ( v19 > v17 )
      *(float *)(v15 + 48) = v19;
    if ( v16 > 3 )
    {
      snprintf(
        s,
        0x800u,
        "chain = %d, nonce_rate_curr = %.4f, nonce_rate_last = %.4f, nonce_rate_max = %.4f\n",
        a1,
        v19,
        v18,
        *(float *)(v15 + 48));
      sub_3B6AC(3, s, 0, v20);
    }
    return 0;
  }
  else
  {
    if ( (unsigned int)dword_B308C <= 3 )
      return 1;
    snprintf(
      s,
      0x800u,
      "chain = %d, hw = %d, hw_threshold = %d, too much hw.\n",
      a1,
      v8,
      (unsigned int)(float)((float)v9 * v1));
    sub_3B6AC(3, s, 0, v21);
    return 1;
  }
}
