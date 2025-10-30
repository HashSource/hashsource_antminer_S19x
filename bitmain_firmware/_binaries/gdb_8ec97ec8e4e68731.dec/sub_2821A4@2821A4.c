int sub_2821A4()
{
  if ( !dword_4900D8 || dword_4900D8 != dword_4900DC )
    return 0;
  if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
  {
    sub_280500();
    return 0;
  }
  --dword_4900D8;
  return 0;
}
