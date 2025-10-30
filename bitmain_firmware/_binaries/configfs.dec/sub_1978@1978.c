__int64 __fastcall sub_1978(__int64 a1, __int64 a2)
{
  __int64 v3; // x1

  *(_QWORD *)(a2 + 48) = a1;
  if ( a1 )
    v3 = config_item_get(a1);
  else
    v3 = 0;
  *(_QWORD *)(a2 + 56) = v3;
  _list_add(a2 + 32, *(_QWORD *)(v3 + 88), v3 + 80);
  return config_item_get(a2);
}
