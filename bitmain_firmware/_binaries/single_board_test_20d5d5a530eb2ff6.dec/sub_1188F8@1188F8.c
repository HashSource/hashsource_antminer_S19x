_DWORD *__fastcall sub_1188F8(_DWORD *result)
{
  unsigned __int8 *v1; // r3

  if ( result )
  {
    result = (_DWORD *)*result;
    if ( result )
    {
      v1 = (unsigned __int8 *)result[2];
      if ( v1 )
      {
        if ( (int)*result <= 1 )
          return 0;
        else
          return (_DWORD *)(v1[1] | (*v1 << 8));
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
