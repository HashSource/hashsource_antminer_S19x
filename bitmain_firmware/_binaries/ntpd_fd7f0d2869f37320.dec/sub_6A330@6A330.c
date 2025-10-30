int __fastcall sub_6A330(int a1)
{
  int result; // r0
  _DWORD *i; // r4
  int v4; // r0
  int v5; // r2
  int v6; // r1
  void (__fastcall *v7)(int, int, int, _DWORD *); // r5

  result = sub_6F8D4(a1);
  for ( i = (_DWORD *)result; result; i = (_DWORD *)result )
  {
    v4 = i[2];
    v5 = *i - 24;
    v6 = i[5];
    v7 = (void (__fastcall *)(int, int, int, _DWORD *))i[4];
    --intres_req_pending;
    v7(v4, v6, v5, i + 6);
    free(i);
    result = sub_6F8D4(a1);
  }
  if ( worker_per_query )
    return sub_6FA74(a1);
  if ( !intres_req_pending )
    return sub_41BB4(180);
  return result;
}
