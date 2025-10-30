_QWORD *__fastcall configfs_remove_default_groups(__int64 a1)
{
  _QWORD *v1; // x21
  _QWORD *result; // x0
  _QWORD *v3; // x20
  __int64 i; // x19

  v1 = (_QWORD *)(a1 + 104);
  result = *(_QWORD **)(a1 + 104);
  v3 = result - 15;
  for ( i = *result - 120LL; result != v1; i = *(_QWORD *)(i + 120) - 120LL )
  {
    list_del(result);
    config_item_put(v3);
    v3 = (_QWORD *)i;
    result = (_QWORD *)(i + 120);
  }
  return result;
}
