int __fastcall sub_3A5E8(int a1)
{
  unsigned int v2; // r6
  unsigned int v3; // r8
  unsigned int v4; // r7
  unsigned int v5; // r0
  int v6; // r3
  unsigned int v7; // r1
  unsigned int v9; // lr
  int v10; // r0
  unsigned int v11; // r1
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = sub_3A3C4(a1, dword_1AEA80 + 4);
  v3 = sub_3A458(a1, dword_1AEA80 + 4);
  v4 = sub_3A520(a1, dword_1AEA80 + 4);
  v5 = sub_3A520(a1, dword_1AEA80 + 5060);
  v6 = *(_DWORD *)dword_1AEA80;
  v7 = *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 68);
  if ( v7 > v2 )
  {
    v9 = *(_DWORD *)(v6 + 76);
    if ( v9 > v4 - v3 )
    {
      if ( v7 < v5 )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return 1;
        snprintf(s, 0x800u, "chain = %d, freq_max_runtime = %d, freq_threshold = %d, max freq enough\n", a1, v5, v7);
      }
      else
      {
        v10 = *(_DWORD *)(v6 + 112);
        v11 = *(_DWORD *)(dword_1AEA80 + 4 * (a1 + 2512) + 4);
        if ( v11 < v10 - 1 )
          return 0;
        if ( (unsigned int)dword_9E31C <= 3 )
          return 1;
        snprintf(s, 0x800u, "chain = %d, grade_curr = %d, grade_max = %d, grade done\n", a1, v11, v10);
      }
    }
    else
    {
      if ( (unsigned int)dword_9E31C <= 3 )
        return 1;
      snprintf(
        s,
        0x800u,
        "chain = %d, freq_max = %d, freq_min = %d, freq_diff = %d, freq_diff_threshold = %d, freq diff enough\n",
        a1,
        v4,
        v3,
        v4 - v3,
        v9);
    }
LABEL_14:
    sub_47AB4(3, s, 0);
    return 1;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_avg = %d, freq_threshold = %d, avg freq enough\n", a1, v2, v7);
    goto LABEL_14;
  }
  return 1;
}
