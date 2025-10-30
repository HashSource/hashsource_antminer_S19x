__int16 *__fastcall sub_18E64(int a1)
{
  __int16 *result; // r0
  int *v3; // r1
  int *v4; // r3
  int *v5; // r3
  __int16 *v6; // r0

  *(_DWORD *)(a1 + 28) = 0;
  result = word_B9240;
  v3 = (int *)dword_B93D0;
  if ( a1 == dword_B93D0 )
  {
    v5 = &dword_B93D0;
LABEL_9:
    v6 = *(__int16 **)(a1 + 20);
    *v5 = *v3;
    sub_15954(v6);
    result = (__int16 *)sub_6A240(*(_DWORD *)(a1 + 20));
    *(_DWORD *)(a1 + 20) = -1;
    return result;
  }
  if ( dword_B93D0 )
  {
    v4 = *(int **)dword_B93D0;
    if ( *(_DWORD *)dword_B93D0 )
    {
      while ( (int *)a1 != v4 )
      {
        v3 = v4;
        if ( !*v4 )
          return result;
        v4 = (int *)*v4;
      }
      v5 = v3;
      v3 = (int *)*v3;
      goto LABEL_9;
    }
  }
  return result;
}
