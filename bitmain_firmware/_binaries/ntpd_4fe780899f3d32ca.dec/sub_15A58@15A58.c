__int16 *__fastcall sub_15A58(int a1)
{
  int *v2; // r3
  int *v3; // r1
  int *v4; // r3
  __int16 *result; // r0

  v2 = &asyncio_reader_list;
  v3 = (int *)asyncio_reader_list;
  if ( a1 == asyncio_reader_list )
  {
LABEL_9:
    *v2 = *v3;
    goto LABEL_10;
  }
  if ( asyncio_reader_list )
  {
    v4 = *(int **)asyncio_reader_list;
    if ( *(_DWORD *)asyncio_reader_list )
    {
      while ( (int *)a1 != v4 )
      {
        v3 = v4;
        if ( !*v4 )
          goto LABEL_10;
        v4 = (int *)*v4;
      }
      v2 = v3;
      v3 = (int *)*v3;
      goto LABEL_9;
    }
  }
LABEL_10:
  result = *(__int16 **)(a1 + 4);
  if ( result != (__int16 *)-1 )
    result = sub_15954(result);
  *(_DWORD *)(a1 + 4) = -1;
  return result;
}
