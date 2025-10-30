int __fastcall sub_3816C(int a1)
{
  float v1; // s0
  float v2; // s1
  float v3; // s2
  int v5; // r0
  unsigned int v6; // r2
  int v7; // r5
  int v8; // r5
  unsigned int v9; // r12
  int result; // r0
  int v11; // r3
  float v12; // s13
  float v13; // s17
  float v14; // s16
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v5 = sub_37770();
  v6 = dword_9E31C;
  v7 = v5;
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(
      s,
      0x800u,
      "[DEBUG] Check if is need stop, chain = %d, hw_threshold = %.4f, nonce_rate_threshold = %.2f, nonce_rate_dec_threshold = %.2f.\n",
      a1,
      v1,
      v2,
      v3);
    sub_47AB4(4, s, 0);
    v6 = dword_9E31C;
  }
  if ( !dword_1AEA78 || !*(_DWORD *)(dword_1AEA78 + 4) )
  {
    if ( v6 > 3 )
    {
      strcpy(s, "Handle is NULL.\n");
      sub_47AB4(3, s, 0);
      return 1;
    }
    return 1;
  }
  v8 = v7 + 4 * a1;
  v9 = *(_DWORD *)(v8 + 1941376);
  if ( v9 > (unsigned int)(float)(v1 * 238990.0) )
  {
    if ( v6 > 3 )
    {
      snprintf(
        s,
        0x800u,
        "chain = %d, hw = %d, hw_threshold = %d, too much hw.\n",
        a1,
        v9,
        (unsigned int)(float)(v1 * 238990.0));
      sub_47AB4(3, s, 0);
      return 1;
    }
    return 1;
  }
  v11 = dword_1AEA78 + 4 * a1;
  v12 = *(float *)(v11 + 168);
  v13 = *(float *)(v11 + 104);
  v14 = (float)*(unsigned int *)(v8 + 1916928) / 238990.0;
  *(float *)(v11 + 104) = v14;
  if ( v12 < v14 )
    *(float *)(v11 + 168) = v14;
  if ( v6 > 3 )
  {
    snprintf(
      s,
      0x800u,
      "chain = %d, nonce_rate_curr = %.4f, nonce_rate_last = %.4f, nonce_rate_max = %.4f\n",
      a1,
      v14,
      v13,
      *(float *)(v11 + 168));
    sub_47AB4(3, s, 0);
  }
  result = sub_37834(a1);
  if ( result )
  {
    *(_BYTE *)(dword_1AEA78 + a1 + 72) = 1;
    return 1;
  }
  else if ( v14 < v13 && (float)(v3 * *(float *)(dword_1AEA78 + 4 * a1 + 168)) > v14 )
  {
    result = 1;
    *(_BYTE *)(dword_1AEA78 + a1 + 72) = 1;
  }
  return result;
}
