int __fastcall sub_4C994(int a1)
{
  unsigned int v2; // r6
  unsigned int v3; // r8
  unsigned int v4; // r7
  unsigned int v5; // r0
  int v6; // r3
  unsigned int v7; // r1
  int v9; // r3
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = sub_4C750(a1, dword_530F10 + 4);
  v3 = sub_4C7FC(a1, dword_530F10 + 4);
  v4 = sub_4C8C8(a1, dword_530F10 + 4);
  v5 = sub_4C8C8(a1, dword_530F10 + 4116);
  v6 = *(_DWORD *)dword_530F10;
  v7 = *(_DWORD *)(*(_DWORD *)dword_530F10 + 20);
  if ( v7 > v2 )
  {
    if ( *(_DWORD *)(v6 + 28) > v4 - v3 )
    {
      if ( v7 >= v5 )
        return 0;
      if ( (unsigned int)off_AFC24 <= 3 )
        return 1;
      snprintf(s, 0x800u, "chain = %d, freq_max_runtime = %d, freq_threshold = %d, max freq enough\n", a1, v5, v7);
    }
    else
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return 1;
      snprintf(
        s,
        0x800u,
        "chain = %d, freq_max = %d, freq_min = %d, freq_diff = %d, freq_diff_threshold = %d, freq diff enough\n",
        a1,
        v4,
        v3,
        v4 - v3,
        *(_DWORD *)(v6 + 28));
    }
LABEL_13:
    sub_3AF5C(3, s, 0, v9);
    return 1;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_avg = %d, freq_threshold = %d, avg freq enough\n", a1, v2, v7);
    goto LABEL_13;
  }
  return 1;
}
