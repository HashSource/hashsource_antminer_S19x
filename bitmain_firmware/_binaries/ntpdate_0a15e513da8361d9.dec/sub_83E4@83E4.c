_DWORD *__fastcall sub_83E4(int a1, unsigned int a2)
{
  _DWORD *result; // r0
  bool v5; // zf
  int v6; // r3
  _DWORD *v7; // [sp+14h] [bp-10h]

  result = sub_8168(a1);
  v5 = result == 0;
  if ( !result )
    v5 = a2 == 0;
  if ( !v5 )
  {
    if ( result )
    {
      if ( a1 == cache_keyid )
      {
        v7 = result;
        sub_7804();
        result = v7;
      }
      if ( a2 )
      {
        *((_WORD *)result + 18) |= 1u;
        if ( a2 <= 1 )
          result[5] = 0;
        else
          result[5] = a2 + current_time;
      }
      else
      {
        return (_DWORD *)sub_7A04((int)result);
      }
    }
    else
    {
      if ( a2 > 1 )
        v6 = a2 + current_time;
      else
        v6 = 0;
      return (_DWORD *)sub_7EA4(a1, 1, 0, v6, 0, 0, 0);
    }
  }
  return result;
}
