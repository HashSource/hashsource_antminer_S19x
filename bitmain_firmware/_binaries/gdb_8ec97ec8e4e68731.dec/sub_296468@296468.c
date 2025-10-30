int __fastcall sub_296468(int a1)
{
  int v1; // r5
  int v2; // r1
  int v3; // r0
  int v4; // r5
  const char *v5; // r0
  const char *v6; // r8
  const char *v7; // r3
  const char *v8; // r1
  int i; // r3
  int v10; // r2
  int v11; // r0
  int v13; // r1

  if ( !a1 )
    return 0;
  if ( dword_4900D8 && dword_4900DC > 1 )
  {
    sub_2926F8();
    v1 = dword_4900D8;
    if ( dword_4900D8 != dword_4900DC )
    {
      if ( _ctype_get_mb_cur_max() > 1 )
        goto LABEL_6;
      goto LABEL_26;
    }
    if ( _ctype_get_mb_cur_max() <= 1 )
    {
      v13 = dword_4900D8;
    }
    else
    {
      v13 = dword_4900D8;
      if ( !dword_48BB60 )
      {
        v1 = sub_29B610(dword_48AAD4, dword_4900D8, 1);
LABEL_25:
        dword_4900D8 = v1;
        if ( _ctype_get_mb_cur_max() > 1 )
        {
LABEL_6:
          v2 = dword_4900D8;
          if ( !dword_48BB60 )
          {
            v3 = sub_29B610(dword_48AAD4, dword_4900D8, 1);
            goto LABEL_8;
          }
LABEL_7:
          v3 = v2 - 1;
LABEL_8:
          v4 = v1 - v3;
          dword_4900D8 = v3;
          v5 = (const char *)sub_93028(v4 + 1);
          v6 = v5;
          if ( v4 > 0 )
          {
            v8 = v5 - 1;
            for ( i = 0; i != v4; ++i )
            {
              v10 = dword_48AAD4 + i;
              *++v8 = *(_BYTE *)(v10 + dword_4900D8);
            }
            v7 = &v5[v4];
          }
          else
          {
            v7 = v5;
          }
          *v7 = 0;
          sub_294F5C(dword_4900D8, dword_4900D8 + v4);
          v11 = sub_29B4D0(dword_48AAD4);
          dword_4900D8 = v11;
          if ( v11 <= dword_4900DC )
          {
            if ( v11 < 0 )
              dword_4900D8 = 0;
          }
          else
          {
            dword_4900D8 = dword_4900DC;
          }
          if ( v6 )
          {
            if ( *v6 )
              sub_294748(v6);
          }
          sub_292748();
          sub_297758(v6);
          return 0;
        }
LABEL_26:
        v2 = dword_4900D8;
        goto LABEL_7;
      }
    }
    v1 = v13 - 1;
    goto LABEL_25;
  }
  sub_2945C8();
  return -1;
}
