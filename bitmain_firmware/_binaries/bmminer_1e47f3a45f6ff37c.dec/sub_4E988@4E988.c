int __fastcall sub_4E988(int a1)
{
  unsigned int v2; // r6
  unsigned int v3; // r8
  unsigned int v4; // r7
  unsigned int v5; // r0
  unsigned int v6; // r1
  unsigned int v8; // r3
  int v9; // r3
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = sub_4E738(a1, dword_535D9C + 4);
  v3 = sub_4E7E8(a1, dword_535D9C + 4);
  v4 = sub_4E8B8(a1, dword_535D9C + 4);
  v5 = sub_4E8B8(a1, dword_535D9C + 4116);
  v6 = *(_DWORD *)(*(_DWORD *)dword_535D9C + 20);
  if ( v2 < v6 )
  {
    v8 = *(_DWORD *)(*(_DWORD *)dword_535D9C + 28);
    if ( v4 - v3 < v8 )
    {
      if ( v5 <= v6 )
        return 0;
      if ( (unsigned int)dword_B308C <= 3 )
        return 1;
      snprintf(s, 0x800u, "chain = %d, freq_max_runtime = %d, freq_threshold = %d, max freq enough\n", a1, v5, v6);
    }
    else
    {
      if ( (unsigned int)dword_B308C <= 3 )
        return 1;
      snprintf(
        s,
        0x800u,
        "chain = %d, freq_max = %d, freq_min = %d, freq_diff = %d, freq_diff_threshold = %d, freq diff enough\n",
        a1,
        v4,
        v3,
        v4 - v3,
        v8);
    }
LABEL_12:
    sub_3B6AC(3, s, 0, v9);
    return 1;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_avg = %d, freq_threshold = %d, avg freq enough\n", a1, v2, v6);
    goto LABEL_12;
  }
  return 1;
}
