int __fastcall sub_4BF20(int a1, int a2, int a3)
{
  float v3; // s0
  int result; // r0
  int v6; // r3
  float v7; // s15
  int v8; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(
      s,
      0x800u,
      "[DEBUG] Check if chain is unqualified happen, chain = %d, nonce_rate_threshold = %.2f\n",
      a1,
      v3);
    sub_3B6AC(4, s, 0, v8);
  }
  result = dword_535D94;
  if ( dword_535D94 && *(_DWORD *)(dword_535D94 + 4) )
  {
    v6 = dword_535D94 + 4 * a1;
    v7 = *(float *)(v6 + 48);
    if ( v3 <= v7 )
    {
      result = 0;
    }
    else
    {
      v6 = dword_535D94 + a1;
      a3 = 1;
    }
    if ( v3 > v7 )
    {
      result = a3;
      *(_BYTE *)(v6 + 28) = a3;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "Handle is NULL.\n");
      sub_3B6AC(3, s, 0, *(int *)"LL.\n");
    }
    return 1;
  }
  return result;
}
