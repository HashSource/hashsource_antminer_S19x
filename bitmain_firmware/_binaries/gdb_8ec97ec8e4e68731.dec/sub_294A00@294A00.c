int __fastcall sub_294A00(int a1)
{
  int v1; // r8
  int v2; // r1
  wint_t v3; // r0
  int v4; // r1
  int v5; // r3
  int v6; // r1
  int v7; // r1
  wint_t v8; // r0
  int v9; // r1
  wint_t v10; // r0

  v1 = a1;
  if ( a1 )
  {
    v2 = dword_4900D8;
    if ( dword_4900D8 != dword_4900DC )
    {
      while ( 1 )
      {
        v3 = sub_29B44C(dword_48AAD4, v2);
        if ( !sub_2911D0(v3) )
          break;
LABEL_4:
        v4 = dword_4900D8;
        v5 = dword_4900DC;
LABEL_5:
        if ( v4 == v5 )
          return 0;
        do
        {
          if ( _ctype_get_mb_cur_max() <= 1 )
          {
            v6 = dword_4900D8;
LABEL_8:
            v7 = v6 + 1;
            dword_4900D8 = v7;
            if ( v7 >= dword_4900DC )
              break;
            goto LABEL_9;
          }
          v6 = dword_4900D8;
          if ( dword_48BB60 )
            goto LABEL_8;
          v7 = sub_29B4D0(dword_48AAD4);
          dword_4900D8 = v7;
          if ( v7 >= dword_4900DC )
            break;
LABEL_9:
          v8 = sub_29B44C(dword_48AAD4, v7);
        }
        while ( sub_2911D0(v8) );
        if ( --v1 )
        {
          v2 = dword_4900D8;
          if ( dword_4900D8 != dword_4900DC )
            continue;
        }
        return 0;
      }
      while ( 1 )
      {
        if ( _ctype_get_mb_cur_max() > 1 )
        {
          v9 = dword_4900D8;
          if ( !dword_48BB60 )
          {
            v4 = sub_29B4D0(dword_48AAD4);
            goto LABEL_14;
          }
        }
        else
        {
          v9 = dword_4900D8;
        }
        v4 = v9 + 1;
LABEL_14:
        v5 = dword_4900DC;
        dword_4900D8 = v4;
        if ( v4 >= dword_4900DC )
          goto LABEL_5;
        v10 = sub_29B44C(dword_48AAD4, v4);
        if ( sub_2911D0(v10) )
          goto LABEL_4;
      }
    }
  }
  return 0;
}
