int __fastcall sub_472D8(int a1)
{
  int v1; // r9
  int v2; // r7
  int v3; // r4
  char *v4; // r11
  unsigned int v5; // r10
  unsigned int v6; // s16
  int v7; // r3
  int v9; // r3
  int v10; // [sp+0h] [bp-81Ch]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Check if is unbalanche happen, chain = %d\n", a1);
    sub_3AF5C(4, s, 0, v9);
  }
  v1 = sub_26540();
  if ( v1 )
  {
    v3 = 0;
    v2 = 0;
    while ( 1 )
    {
      v4 = (char *)&unk_202402 + 256 * a1 + v3;
      v5 = *(_DWORD *)(dword_530F00 + 4 * (_DWORD)v4);
      if ( v5 > 8 * sub_26580() )
      {
        v2 = 1;
        if ( (unsigned int)off_AFC24 <= 3 )
          goto LABEL_7;
LABEL_11:
        v10 = v3++;
        snprintf(s, 0x800u, "Unbalance happened: chain = %d, asic = %d\n", a1, v10);
        v2 = 1;
        sub_3AF5C(3, s, 0, v7);
        if ( v1 == v3 )
          return v2;
      }
      else
      {
        v6 = *(_DWORD *)(dword_530F00 + 4 * (_DWORD)v4);
        if ( (double)v6 < (double)(8 * sub_26580()) * 0.75 )
        {
          v2 = 1;
          if ( (unsigned int)off_AFC24 > 3 )
            goto LABEL_11;
        }
LABEL_7:
        if ( v1 == ++v3 )
          return v2;
      }
    }
  }
  return 0;
}
