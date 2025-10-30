_DWORD *__fastcall sub_623A4(int a1, unsigned __int16 *a2)
{
  _DWORD *result; // r0
  __int16 v4; // r1

  if ( cache_keyid == a1 )
  {
    if ( (cache_flags & 1) == 0 )
      return 0;
    return (_DWORD *)(sub_61A8C((unsigned __int16 *)cache_keyacclist, a2, (unsigned __int16 *)((char *)&dword_0 + 1)) != 0);
  }
  else
  {
    result = sub_61F34(a1);
    if ( result )
    {
      v4 = *((_WORD *)result + 18);
      ++authkeyuncached;
      if ( (v4 & 1) == 0 )
        return 0;
      return (_DWORD *)(sub_61A8C((unsigned __int16 *)result[4], a2, (unsigned __int16 *)((char *)&dword_0 + 1)) != 0);
    }
    else
    {
      ++authkeynotfound;
    }
  }
  return result;
}
