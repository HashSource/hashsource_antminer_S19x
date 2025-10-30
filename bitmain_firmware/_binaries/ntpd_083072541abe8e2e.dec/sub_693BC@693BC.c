int __fastcall sub_693BC(int a1)
{
  int v2; // r3
  int v3; // r0
  void (__fastcall *v4)(int, int, int, int); // r5
  int v5; // r2
  int v6; // r1
  int result; // r0
  _DWORD *v8; // r4

  while ( 1 )
  {
    result = sub_6E948(a1);
    v8 = (_DWORD *)result;
    if ( !result )
      break;
    v2 = result + 24;
    v3 = *(_DWORD *)(result + 8);
    v4 = (void (__fastcall *)(int, int, int, int))v8[4];
    v5 = *v8 - 24;
    v6 = v8[5];
    --intres_req_pending;
    v4(v3, v6, v5, v2);
    free(v8);
  }
  if ( worker_per_query )
    return sub_6EAE8(a1);
  if ( !intres_req_pending )
    return sub_40DFC(180);
  return result;
}
