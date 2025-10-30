_DWORD *__fastcall sub_17018C(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  char *s; // r4
  const char *v6; // r5
  int v10; // r0
  int v11; // r3
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0

  s = *(char **)(a4 + 8);
  v6 = *(const char **)(a4 + 4);
  if ( s )
  {
    if ( sub_122A8C(*(const char **)(a4 + 4), "email") )
    {
      v10 = sub_122A8C(v6, "URI");
      v11 = 6;
      if ( v10 )
      {
        v13 = sub_122A8C(v6, "DNS");
        v11 = 2;
        if ( v13 )
        {
          v14 = sub_122A8C(v6, "RID");
          v11 = 8;
          if ( v14 )
          {
            v15 = sub_122A8C(v6, "IP");
            v11 = 7;
            if ( v15 )
            {
              v16 = sub_122A8C(v6, "dirName");
              v11 = 4;
              if ( v16 )
              {
                v11 = sub_122A8C(v6, "otherName");
                if ( v11 )
                {
                  sub_D0048(34, 117, 117, (int)"crypto/x509v3/v3_alt.c", 552);
                  sub_D1240(2, "name=", v6);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v11 = 1;
    }
    return sub_16FF1C(a1, a2, a3, v11, s, a5);
  }
  sub_D0048(34, 117, 124, (int)"crypto/x509v3/v3_alt.c", 533);
  return 0;
}
