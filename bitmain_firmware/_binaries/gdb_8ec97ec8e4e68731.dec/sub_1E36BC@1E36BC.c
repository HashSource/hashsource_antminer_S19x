_DWORD *__fastcall sub_1E36BC(int a1, int a2)
{
  int v3; // r0
  int v4; // r5
  _DWORD *v5; // r0
  _DWORD *result; // r0
  _DWORD *v7; // r0
  __int64 v8; // r0

  v3 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v3);
  v4 = dword_488C94;
  if ( a2 )
  {
    v5 = (_DWORD *)sub_1FE15C(*(_DWORD *)(dword_488C94 + 56), sub_1E1FB8, dword_488C94);
    if ( dword_488CE4 )
    {
      if ( *(_DWORD *)dword_488CE4 )
        v5 = sub_1532BC((_DWORD *)dword_488C6C);
      result = (_DWORD *)sub_232950(v5);
      if ( result )
        return sub_1532BC(*(_DWORD **)(*(_DWORD *)(v4 + 408) + 4));
    }
    else
    {
      v8 = ((__int64 (__fastcall *)(_DWORD *))loc_16318)(v5);
      return (_DWORD *)sub_1E3768(v8, (char *)HIDWORD(v8));
    }
  }
  else
  {
    sub_1FE15C(*(_DWORD *)(dword_488C94 + 56), 0, 0);
    v7 = sub_1532C8((_DWORD *)dword_488C6C);
    result = (_DWORD *)sub_232950(v7);
    if ( result )
      return sub_1532C8(*(_DWORD **)(*(_DWORD *)(v4 + 408) + 4));
  }
  return result;
}
