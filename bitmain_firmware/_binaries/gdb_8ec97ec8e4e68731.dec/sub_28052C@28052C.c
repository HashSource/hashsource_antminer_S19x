size_t sub_28052C()
{
  size_t result; // r0

  result = _ctype_get_mb_cur_max();
  if ( result > 1 && !dword_48BB60 )
    return sub_280500();
  --dword_4900D8;
  return result;
}
