_DWORD *__fastcall sub_326E94(_DWORD *result, int a2)
{
  _DWORD *v2; // r4
  void (__fastcall *v4)(_DWORD); // r3
  _DWORD *v5; // r0
  int v6; // r5
  int v7; // r6

  if ( *result )
  {
    v2 = result;
    result = (_DWORD *)sub_326A24((int)result, a2);
    if ( *v2 )
    {
      result = (_DWORD *)((int (__fastcall *)(_DWORD, int))v2[1])(*(_DWORD *)*v2, a2);
      if ( !result )
      {
        v4 = (void (__fastcall *)(_DWORD))v2[3];
        v5 = (_DWORD *)*v2;
        v6 = *(_DWORD *)(*v2 + 8);
        v7 = *(_DWORD *)(*v2 + 12);
        if ( v4 )
        {
          v4(v5[1]);
          v5 = (_DWORD *)*v2;
        }
        result = (_DWORD *)((int (__fastcall *)(_DWORD *, _DWORD))v2[5])(v5, v2[6]);
        if ( v6 )
        {
          *v2 = v6;
          if ( v7 )
          {
            while ( *(_DWORD *)(v6 + 12) )
              v6 = *(_DWORD *)(v6 + 12);
            *(_DWORD *)(v6 + 12) = v7;
          }
        }
        else
        {
          *v2 = v7;
        }
      }
    }
  }
  return result;
}
