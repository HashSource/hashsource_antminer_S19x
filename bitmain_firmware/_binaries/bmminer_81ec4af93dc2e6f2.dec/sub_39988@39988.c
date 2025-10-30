char *__fastcall sub_39988(int a1, int a2)
{
  char *result; // r0
  char *v5; // r6
  void *v6; // r12
  int v7; // r7
  unsigned int v8; // r4
  unsigned int v9; // r3
  int v10; // r1
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "\n asic nonce number for chain[%d] asic[%d]...\n", a1, a2);
    sub_3BE28(3, s, 0);
    result = (char *)sub_26570();
    v5 = result;
    if ( (int)result > 0 )
      goto LABEL_3;
  }
  else
  {
    result = (char *)sub_26570();
    v5 = result;
    if ( (int)result > 0 )
    {
LABEL_3:
      v6 = off_AFC24;
      v7 = (a2 + (a1 << 8)) << 12;
      v8 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v6 > 3 )
        {
          memset(s, 0, 0x800u);
          v9 = v8;
          v10 = v7 + 4 * v8++ + 4112;
          snprintf(s, 0x800u, "core[%03d]=%-8d", v9, *(int *)((char *)dword_B42F8 + v10));
          sub_3BE28(3, s, 0);
          result = s;
          v6 = off_AFC24;
          if ( v8 != 10 * (v8 / 0xA) || (unsigned int)off_AFC24 <= 3 )
            goto LABEL_4;
          memset(s, v8 % 0xA, 0x800u);
          *(_WORD *)s = 10;
          result = (char *)sub_3BE28(3, s, v8 % 0xA);
          v6 = off_AFC24;
          if ( v5 == (char *)v8 )
            goto LABEL_10;
        }
        else
        {
          ++v8;
LABEL_4:
          if ( v5 == (char *)v8 )
            goto LABEL_10;
        }
      }
    }
  }
  v6 = off_AFC24;
LABEL_10:
  if ( (unsigned int)v6 > 3 )
  {
    memset(s, 0, 0x800u);
    *(_WORD *)s = 10;
    return (char *)sub_3BE28(3, s, 0);
  }
  return result;
}
