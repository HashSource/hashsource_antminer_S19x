_DWORD *__fastcall sub_191FB0(int a1)
{
  _DWORD *v1; // r4
  int v3; // r0

  v1 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v3 = sub_1B6B24(v1, dword_4879D4);
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 8) == a1 )
        break;
    }
    v1 = (_DWORD *)*v1;
    if ( !v1 )
      return 0;
  }
  return v1;
}
