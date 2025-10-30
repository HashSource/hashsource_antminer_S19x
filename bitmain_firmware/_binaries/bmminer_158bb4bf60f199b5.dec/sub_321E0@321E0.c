int __fastcall sub_321E0(int result, int a2, unsigned int a3, int a4)
{
  int v4; // r5
  unsigned int v5; // r6
  int v6; // r8
  int v7; // lr
  int v8; // r2
  int v9; // r12
  int v10; // r7
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = 78 * result;
  v5 = HIWORD(a3);
  v6 = a4 + 4 * result;
  v7 = (unsigned __int16)a3;
  v8 = *(_DWORD *)(dword_1AEA64 + 4);
  v9 = a4 + 4 * (78 * result + a2) + 1908736;
  *(_DWORD *)(v9 + 3200) += v5;
  v10 = v7 - v5 + *(_DWORD *)(v6 + 1941440);
  if ( v5 > 0xBF8 )
  {
    *(_DWORD *)(v6 + 1941440) = v10;
    *(_BYTE *)(v8 + v4 + a2) = 1;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(
        s,
        0x800u,
        "Nonce counter overflow: chain = %d, asic = %d, nonce_return = %d, nonce_match = %d, nonce_accumulate = %d\n",
        result,
        a2,
        v7,
        v5,
        *(_DWORD *)(a4 + 4 * (78 * result + a2) + 1911936));
      return sub_47AB4(3, s, 0);
    }
  }
  else
  {
    result = *(_DWORD *)(v6 + 1916928);
    *(_DWORD *)(v6 + 1916928) = result + v5;
    *(_DWORD *)(v6 + 1941440) = v10;
    *(_BYTE *)(v8 + v4 + a2) = 1;
  }
  return result;
}
