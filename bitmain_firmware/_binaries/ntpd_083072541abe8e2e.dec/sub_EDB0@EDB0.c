_DWORD *__fastcall sub_EDB0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r2
  _DWORD **v4; // r3
  _DWORD *v5; // r1

  v2 = a1;
  if ( !a1 )
    v2 = (_DWORD *)sub_63BA4(0, 8, 0, 1);
  if ( a2 )
  {
    v4 = (_DWORD **)v2[1];
    v5 = 0;
    *a2 = 0;
    if ( v4 )
    {
      v5 = *v4;
    }
    else
    {
      *v2 = a2;
      v2[1] = v2;
    }
    if ( v4 )
    {
      *v5 = a2;
      v2[1] = *v4;
    }
  }
  return v2;
}
