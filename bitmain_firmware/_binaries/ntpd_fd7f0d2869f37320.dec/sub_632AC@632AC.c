_DWORD *__fastcall sub_632AC(int a1, unsigned __int16 *a2)
{
  _DWORD *result; // r0
  __int16 v4; // r1

  if ( a1 == cache_keyid )
  {
    if ( (cache_flags & 1) == 0 )
      return 0;
    return (_DWORD *)sub_6299C((unsigned __int16 *)cache_keyacclist, a2, 1);
  }
  else
  {
    result = sub_62E48(a1);
    if ( result )
    {
      v4 = *((_WORD *)result + 18);
      ++authkeyuncached;
      if ( (v4 & 1) == 0 )
        return 0;
      return (_DWORD *)sub_6299C((unsigned __int16 *)result[4], a2, 1);
    }
    else
    {
      ++authkeynotfound;
    }
  }
  return result;
}
