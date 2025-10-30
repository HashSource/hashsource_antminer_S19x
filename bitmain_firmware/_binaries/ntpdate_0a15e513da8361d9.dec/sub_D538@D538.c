_BYTE *__fastcall sub_D538(int *a1, int a2)
{
  _BYTE *v4; // r6
  int v5; // r4
  int v6; // r1
  unsigned int v7; // r3
  unsigned int v8; // r8
  struct tm *v9; // r3
  __int64 v11; // [sp+28h] [bp-20h] BYREF
  __int64 v12; // [sp+30h] [bp-18h] BYREF
  unsigned __int16 v13; // [sp+38h] [bp-10h] BYREF
  unsigned __int8 v14; // [sp+3Ch] [bp-Ch]
  unsigned __int8 v15; // [sp+3Dh] [bp-Bh]
  unsigned __int8 v16; // [sp+3Eh] [bp-Ah]
  unsigned __int8 v17; // [sp+3Fh] [bp-9h]
  unsigned __int8 v18; // [sp+40h] [bp-8h]
  unsigned __int8 v19; // [sp+41h] [bp-7h]

  v4 = &lib_stringbuf[128 * lib_nextbuf];
  v5 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v4, 0, 0x80u);
  lib_nextbuf = v5;
  v6 = *a1;
  v7 = a1[1];
  if ( *a1 || v7 )
  {
    v8 = v7 / 0x418937;
    if ( v7 / 0x418937 == 1000 )
    {
      ++v6;
      v8 = 0;
    }
    sub_B624(&v11, v6, 0);
    v12 = v11;
    v9 = sub_D388(&v12, a2);
    if ( v9 )
    {
      sub_FA7C(
        v4,
        128,
        "%08lx.%08lx  %s, %s %2d %4d %2d:%02d:%02d.%03u",
        *a1,
        a1[1],
        daynames[v9->tm_wday],
        months[v9->tm_mon],
        v9->tm_mday,
        v9->tm_year + 1900,
        v9->tm_hour,
        v9->tm_min,
        v9->tm_sec,
        v8);
    }
    else
    {
      sub_BD40(&v13, &v12);
      if ( a2 )
        sub_FA7C(
          v4,
          128,
          "%08lx.%08lx [%s, %s %2d %4d %2d:%02d:%02d.%03u UTC]",
          *a1,
          a1[1],
          daynames[v19],
          months[v14 - 1],
          v15,
          v13,
          v16,
          v17,
          v18,
          v8);
      else
        sub_FA7C(
          v4,
          128,
          "%08lx.%08lx  %s, %s %2d %4d %2d:%02d:%02d.%03u",
          *a1,
          a1[1],
          daynames[v19],
          months[v14 - 1],
          v15,
          v13,
          v16,
          v17,
          v18,
          v8);
    }
  }
  else
  {
    sub_108C4(v4, "(no time)", 128);
  }
  return v4;
}
