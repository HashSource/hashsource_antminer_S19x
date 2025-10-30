int sub_1B7B24()
{
  _DWORD *v0; // r4
  int v1; // r3

  v0 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v0 )
    return 0;
  while ( 1 )
  {
    v1 = v0[33];
    if ( v1 )
    {
      if ( (v0[3] & 0x10) == 0 && *(_DWORD *)(v1 + 12) || (**(int (***)(void))(v1 + 40))() )
        break;
    }
    v0 = (_DWORD *)*v0;
    if ( !v0 )
      return 0;
  }
  return 1;
}
