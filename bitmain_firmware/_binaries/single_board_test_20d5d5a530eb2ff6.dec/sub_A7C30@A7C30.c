int __fastcall sub_A7C30(const char *a1, int *a2)
{
  const char *v2; // r7
  int v4; // r0
  int v5; // r9
  char *v6; // r8
  size_t v7; // r6
  const char *v8; // r4
  char **v9; // r5
  const char *v10; // t1

  v2 = a1;
  v4 = sub_10BFCC(a1);
  if ( v4 )
  {
    v5 = v4;
    while ( 1 )
    {
      v6 = strchr(v2, 58);
      v7 = v6 - v2;
      if ( !v6 )
        v7 = strlen(v2);
      v8 = off_21F660;
      if ( !off_21F660 )
        break;
      v9 = &off_21F660;
      while ( 1 )
      {
        __pld(v9 + 14);
        if ( v7 == strlen(v8) && !strncmp(v8, v2, v7) )
          break;
        v10 = v9[2];
        v9 += 2;
        v8 = v10;
        if ( !v10 )
          goto LABEL_14;
      }
      if ( sub_10BC4C(v5, v9) >= 0 )
      {
        sub_D0048(20, 309, 353, "ssl/d1_srtp.c", 83);
        goto LABEL_15;
      }
      if ( !sub_10BD3C(v5, v9) )
      {
        sub_D0048(20, 309, 362, "ssl/d1_srtp.c", 89);
        goto LABEL_15;
      }
      if ( !v6 )
      {
        sub_10BDB4(*a2);
        *a2 = v5;
        return 0;
      }
      v2 = v6 + 1;
    }
LABEL_14:
    sub_D0048(20, 309, 364, "ssl/d1_srtp.c", 94);
LABEL_15:
    sub_10BDB4(v5);
    return 1;
  }
  sub_D0048(20, 309, 362, "ssl/d1_srtp.c", 72);
  return 1;
}
