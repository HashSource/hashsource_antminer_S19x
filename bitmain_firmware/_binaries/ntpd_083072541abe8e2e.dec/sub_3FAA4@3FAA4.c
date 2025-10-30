int __fastcall sub_3FAA4(int *s, int a2)
{
  bool v3; // zf
  int *v4; // r2
  int *v5; // r0
  int *v6; // r3
  int *v7; // r3
  int v9; // [sp+4h] [bp-Ch]
  int v10; // [sp+Ch] [bp-4h]

  v3 = (s[2] & 0x40) == 0;
  --dword_BCB3C;
  if ( !v3 && !--dword_BCB40 )
  {
    v9 = a2;
    sub_30DFC(2u);
    a2 = v9;
  }
  if ( a2 )
    v4 = &restrictlist6;
  else
    v4 = &restrictlist4;
  v5 = (int *)*v4;
  if ( s == (int *)*v4 )
  {
    v6 = s;
  }
  else
  {
    if ( !v5 || (v6 = (int *)*v5) == 0 )
LABEL_21:
      sub_6ECC0("ntp_restrict.c", 306, 2, "unlinked == res");
    while ( v6 != s )
    {
      v5 = v6;
      if ( !*v6 )
        goto LABEL_21;
      v6 = (int *)*v6;
    }
    v4 = v5;
  }
  *v4 = *v6;
  if ( s != v6 )
    goto LABEL_21;
  if ( a2 )
  {
    memset(s, 0, 0x34u);
    v7 = &dword_BCB34;
  }
  else
  {
    *s = 0;
    s[1] = 0;
    s[2] = 0;
    v7 = &dword_BCB38;
    s[3] = 0;
    s[4] = 0;
    s[5] = 0;
    s[6] = 0;
  }
  *s = *v7;
  *v7 = (int)s;
  return v10;
}
