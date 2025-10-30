void sub_28048C()
{
  int v0; // r6

  if ( dword_4900D8 < dword_4900DC )
  {
    if ( _ctype_get_mb_cur_max() == 1 )
    {
      v0 = dword_4900D8;
LABEL_5:
      dword_4900D8 = v0 + 1;
      return;
    }
    v0 = dword_4900D8;
    if ( dword_48BB60 )
      goto LABEL_5;
    dword_4900D8 = sub_2951B4(1);
    if ( v0 == dword_4900D8 )
      dword_4900D8 = dword_4900DC;
  }
}
