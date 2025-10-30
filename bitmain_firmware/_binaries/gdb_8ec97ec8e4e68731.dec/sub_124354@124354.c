_DWORD *__fastcall sub_124354(_DWORD *a1, int a2, __int64 *a3)
{
  _DWORD *v3; // r8
  _DWORD *v4; // r11
  __int64 v7; // r6
  __int64 v8; // r4
  _DWORD *v9; // r3

  v3 = *(_DWORD **)(*a1 + 4 * a2);
  if ( v3 )
  {
    v4 = (_DWORD *)*v3;
    v7 = *a3;
    v8 = *(_QWORD *)(*v3 + 8);
    while ( v7 != v8 )
    {
      v9 = (_DWORD *)*v4;
      v3 = v4;
      v4 = (_DWORD *)*v4;
      if ( !v4 )
        return v9;
      v8 = *((_QWORD *)v9 + 1);
      if ( a2 != (unsigned __int64)sub_347674(v9[2], a1[1]) >> 32 )
        return 0;
    }
  }
  return v3;
}
