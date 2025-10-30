int __fastcall sub_7EC8(int a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r3
  int v3; // r2
  __int16 v4; // r1
  int result; // r0
  int v6; // r6
  int v7; // r1
  int v8; // r12

  ++authkeylookups;
  if ( !a1 || cache_keyid == a1 )
    return cache_flags & 1;
  ++authkeyuncached;
  v1 = sub_7DB0(a1);
  v2 = v1;
  if ( v1 && (v3 = *((unsigned __int16 *)v1 + 14), *((_WORD *)v1 + 14)) )
  {
    v4 = *((_WORD *)v1 + 18);
    result = v4 & 1;
    if ( (v4 & 1) != 0 )
    {
      cache_keyid = v2[6];
      v6 = v2[3];
      cache_type = v3;
      cache_flags = v4;
      v7 = v2[4];
      v8 = v2[8];
      cache_secret = v6;
      cache_secretsize = v8;
      cache_keyacclist = v7;
      return 1;
    }
    else
    {
      ++authnokey;
    }
  }
  else
  {
    ++authkeynotfound;
    return 0;
  }
  return result;
}
