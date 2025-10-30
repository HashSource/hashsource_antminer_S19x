int sub_8908()
{
  int result; // r0
  unsigned int v1; // r3
  void *v2; // r4

  result = dword_3345C;
  if ( (_UNKNOWN *)dword_3345C != &key_listhead )
  {
    do
    {
      while ( 1 )
      {
        v1 = *(_DWORD *)(result + 20);
        v2 = *(void **)(result + 8);
        if ( v1 )
        {
          if ( v1 < current_time )
            break;
        }
        result = *(_DWORD *)(result + 8);
        if ( v2 == &key_listhead )
          return result;
      }
      sub_7A04(result);
      result = (int)v2;
      ++authkeyexpired;
    }
    while ( v2 != &key_listhead );
  }
  return result;
}
