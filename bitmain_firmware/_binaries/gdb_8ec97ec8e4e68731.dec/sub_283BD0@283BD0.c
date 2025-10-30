int __fastcall sub_283BD0(int a1, int a2)
{
  int v4; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r2

  if ( a2 == 10 )
    return 0;
  if ( a2 <= 10 )
  {
    switch ( a2 )
    {
      case 7:
        goto LABEL_18;
      case 8:
LABEL_16:
        if ( dword_4900D8 )
        {
          v4 = sub_295ED4(1, a2);
          goto LABEL_7;
        }
        v10 = sub_29728C(a1);
        v8 = sub_28D50C(v10);
        v11 = *(_DWORD *)(a1 + 36);
        dword_4900D4 = *(_DWORD *)(a1 + 40);
        dword_4900D8 = v11;
        goto LABEL_19;
      case 3:
LABEL_18:
        v6 = sub_2945C8(a1, a2);
        v7 = sub_29728C(v6);
        sub_28D50C(v7);
        v8 = *(_DWORD *)(a1 + 36);
        v9 = *(_DWORD *)(a1 + 40);
        dword_4900D8 = v8;
        dword_4900D4 = v9;
LABEL_19:
        sub_28D478(v8);
        dword_48AAA0 &= ~0x100u;
        return -1;
    }
LABEL_11:
    if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
      v4 = sub_295A08(1, a2);
    else
      v4 = sub_294F3C(a1 + 80);
    goto LABEL_7;
  }
  if ( a2 == 21 )
  {
    v4 = sub_292208(1);
    goto LABEL_7;
  }
  if ( a2 > 21 )
  {
    if ( a2 == 23 )
    {
      v4 = sub_291FD0(1);
LABEL_7:
      off_470784(v4);
      return 1;
    }
    if ( a2 == 127 )
      goto LABEL_16;
    goto LABEL_11;
  }
  if ( a2 != 13 )
    goto LABEL_11;
  return 0;
}
