_DWORD *__fastcall sub_2AAE50(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 v6; // r0
  _DWORD *result; // r0
  _DWORD *v8; // r3

  v6 = sub_347674(a2[2], a1[3]);
  result = *(_DWORD **)(*a1 + 4 * HIDWORD(v6));
  v8 = (_DWORD *)(*a1 + 4 * HIDWORD(v6));
  if ( !result )
LABEL_9:
    sub_2A6BF0((int)"hash.c", 611, (int)"bfd_hash_replace");
  if ( a2 != result )
  {
    while ( 1 )
    {
      if ( !*result )
        goto LABEL_9;
      if ( (_DWORD *)*result == a2 )
        break;
      result = (_DWORD *)*result;
    }
    v8 = result;
  }
  *v8 = a3;
  return result;
}
