_DWORD *__fastcall sub_8038(int a1, unsigned int a2)
{
  _DWORD *result; // r0
  int v5; // r3
  _DWORD *v6; // [sp+14h] [bp-10h]

  result = sub_7DB0(a1);
  if ( __PAIR64__(a2, (unsigned int)result) )
  {
    if ( result )
    {
      if ( a1 == cache_keyid )
      {
        v6 = result;
        sub_7454();
        result = v6;
      }
      if ( a2 )
      {
        *((_WORD *)result + 18) |= 1u;
        if ( a2 <= 1 )
          result[5] = 0;
        else
          result[5] = current_time + a2;
      }
      else
      {
        return (_DWORD *)sub_7654((int)result);
      }
    }
    else
    {
      if ( a2 > 1 )
        v5 = a2 + current_time;
      else
        v5 = 0;
      return (_DWORD *)sub_7AEC(a1, 1, 0, v5, 0, 0, 0);
    }
  }
  return result;
}
