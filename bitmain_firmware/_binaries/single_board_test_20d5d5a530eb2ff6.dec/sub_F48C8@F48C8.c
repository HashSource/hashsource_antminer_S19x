int __fastcall sub_F48C8(_DWORD *a1)
{
  int v3; // r4

  if ( !sub_10C594(&unk_6E1AE0, sub_F3E68) || !dword_6E1ADC )
    return 0;
  if ( !a1 )
  {
    v3 = 0;
LABEL_7:
    sub_10C554(dword_6E1ACC);
    sub_F4728(v3);
    dword_6E1AE8 = (int)a1;
    sub_10C564(dword_6E1ACC);
    return 1;
  }
  if ( !sub_CDD6C(a1) )
    return 0;
  v3 = sub_15B928(a1);
  if ( v3 )
    goto LABEL_7;
  sub_CDDF8((int)a1);
  return 0;
}
