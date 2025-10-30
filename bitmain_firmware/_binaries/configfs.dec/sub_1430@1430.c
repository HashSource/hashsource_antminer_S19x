__int64 __fastcall sub_1430(_QWORD *a1)
{
  __int64 v1; // x30
  __int64 result; // x0
  __int64 v4; // x21

  result = v1;
  v4 = a1[7];
  if ( v4 )
  {
    _list_del_entry(a1 + 4);
    a1[4] = a1 + 4;
    a1[5] = a1 + 4;
    a1[6] = 0;
    a1[7] = 0;
    config_item_put(a1);
    return config_item_put(v4);
  }
  return result;
}
