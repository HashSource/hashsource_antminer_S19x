int __fastcall sub_295ED4(int a1, int a2)
{
  int v2; // r5
  int v3; // r6
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r5
  int v10; // r4
  int v11; // r0

  if ( a1 >= 0 )
  {
    v2 = dword_4900D8;
    if ( !dword_4900D8 )
    {
      sub_2945C8();
      return -1;
    }
    if ( a1 > 1 || (v3 = dword_48AB0C) != 0 )
    {
      v3 = 0;
      sub_29534C(a1, a2);
      sub_291D70(v2, dword_4900D8);
      return v3;
    }
    if ( _ctype_get_mb_cur_max() == 1 )
    {
      v5 = dword_4900D8;
      v6 = dword_48AAD4;
    }
    else
    {
      v5 = dword_4900D8;
      v6 = dword_48AAD4;
      if ( !dword_48BB60 )
      {
        dword_4900D8 = sub_29B610(dword_48AAD4, dword_4900D8, 1);
        sub_294F5C(dword_4900D8, v2);
        return v3;
      }
    }
    v7 = v5 - 1;
    v8 = v2;
    dword_4900D8 = v7;
    v9 = *(unsigned __int8 *)(v6 + v7);
    sub_294F5C(v7, v8);
    v10 = dword_4900D8;
    if ( dword_4900D8 == dword_4900DC && ((*_ctype_b_loc())[v9] & 0x4000) != 0 )
    {
      if ( dword_48AE04 )
      {
        v11 = sub_28D254(v9, v10);
        sub_28D648(v11);
      }
      else
      {
        return 0;
      }
    }
    return v3;
  }
  return sub_295C9C(-a1, a2);
}
