__int64 __fastcall config_group_find_item(__int64 a1, const char *a2)
{
  _QWORD *v3; // x19
  _QWORD *v4; // x20
  const char *v5; // x0

  v4 = (_QWORD *)(a1 + 80);
  v3 = *(_QWORD **)(a1 + 80);
  if ( v3 == (_QWORD *)(a1 + 80) )
    return 0;
  while ( 1 )
  {
    v5 = (const char *)*(v3 - 4);
    if ( v5 )
    {
      if ( !strcmp(v5, a2) )
        break;
    }
    v3 = (_QWORD *)*v3;
    if ( v3 == v4 )
      return 0;
  }
  return config_item_get((__int64)(v3 - 4));
}
