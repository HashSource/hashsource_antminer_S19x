int __fastcall sub_491FC(int a1)
{
  int v1; // r7
  int v2; // r4
  int v3; // r5
  int v4; // r11
  unsigned int v5; // r10
  unsigned int v6; // s16
  int v7; // r3
  int v9; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Check if is unbalanche happen, chain = %d\n", a1);
    sub_3B6AC(4, s, 0, v9);
  }
  v1 = sub_26A44();
  if ( v1 )
  {
    v2 = 0;
    v3 = 0;
    while ( 1 )
    {
      v4 = (a1 << 8) + v2 + 2106370;
      v5 = *(_DWORD *)(dword_535D8C + 4 * v4);
      if ( v5 > 8 * sub_26A84() )
      {
        v3 = 1;
        if ( (unsigned int)dword_B308C <= 3 )
          goto LABEL_6;
LABEL_10:
        snprintf(s, 0x800u, "Unbalance happened: chain = %d, asic = %d\n", a1, v2++);
        v3 = 1;
        sub_3B6AC(3, s, 0, v7);
        if ( v1 == v2 )
          return v3;
      }
      else
      {
        v6 = *(_DWORD *)(dword_535D8C + 4 * v4);
        if ( (double)v6 < (double)(8 * sub_26A84()) * 0.75 )
        {
          v3 = 1;
          if ( (unsigned int)dword_B308C > 3 )
            goto LABEL_10;
        }
LABEL_6:
        if ( v1 == ++v2 )
          return v3;
      }
    }
  }
  return 0;
}
