int __fastcall sub_294884(int a1)
{
  int v1; // r8
  int v2; // r0
  int v3; // r1
  int v4; // r4
  wint_t v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r4
  wint_t v9; // r0
  int v10; // r0
  int v11; // r1
  wint_t v12; // r0

  v1 = a1;
  if ( a1 && dword_4900D8 )
  {
    while ( _ctype_get_mb_cur_max() > 1 )
    {
      v2 = dword_48AAD4;
      v3 = dword_4900D8;
      if ( dword_48BB60 )
        goto LABEL_5;
      v4 = sub_29B610(dword_48AAD4, dword_4900D8, 1);
      v2 = dword_48AAD4;
LABEL_6:
      v5 = sub_29B44C(v2, v4);
      if ( !sub_2911D0(v5) )
      {
        do
        {
          dword_4900D8 = v4;
          if ( v4 <= 0 )
            goto LABEL_8;
          if ( _ctype_get_mb_cur_max() > 1 )
          {
            v10 = dword_48AAD4;
            v11 = dword_4900D8;
            if ( !dword_48BB60 )
            {
              v4 = sub_29B610(dword_48AAD4, dword_4900D8, 1);
              v10 = dword_48AAD4;
              goto LABEL_18;
            }
          }
          else
          {
            v10 = dword_48AAD4;
            v11 = dword_4900D8;
          }
          v4 = v11 - 1;
LABEL_18:
          v12 = sub_29B44C(v10, v4);
        }
        while ( !sub_2911D0(v12) );
      }
      v4 = dword_4900D8;
LABEL_8:
      if ( !v4 )
        return 0;
      while ( 1 )
      {
        if ( _ctype_get_mb_cur_max() <= 1 )
        {
          v6 = dword_48AAD4;
          v7 = dword_4900D8;
LABEL_11:
          v8 = v7 - 1;
          goto LABEL_12;
        }
        v6 = dword_48AAD4;
        v7 = dword_4900D8;
        if ( dword_48BB60 )
          goto LABEL_11;
        v8 = sub_29B610(dword_48AAD4, dword_4900D8, 1);
        v6 = dword_48AAD4;
LABEL_12:
        v9 = sub_29B44C(v6, v8);
        if ( !sub_2911D0(v9) )
          break;
        dword_4900D8 = v8;
        if ( !v8 )
          return 0;
      }
      if ( !--v1 || !dword_4900D8 )
        return 0;
    }
    v2 = dword_48AAD4;
    v3 = dword_4900D8;
LABEL_5:
    v4 = v3 - 1;
    goto LABEL_6;
  }
  return 0;
}
