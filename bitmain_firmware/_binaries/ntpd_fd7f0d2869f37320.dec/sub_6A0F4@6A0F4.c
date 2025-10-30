int sub_6A0F4()
{
  int v0; // r3
  int v1; // r0
  int v2; // r5
  int v3; // r3
  _DWORD *v5; // r0
  int v6; // r2

  if ( !worker_per_query )
  {
    v0 = dword_B8D78;
    if ( dword_B8D78 != -1 && !**(_DWORD **)(blocking_children + 4 * dword_B8D78) )
      goto LABEL_11;
  }
  v1 = sub_69FEC();
  v2 = v1;
  if ( worker_per_query )
  {
    v3 = intres_req_pending;
    goto LABEL_6;
  }
  v0 = dword_B8D78;
  if ( dword_B8D78 != -1 )
  {
LABEL_11:
    if ( intres_req_pending )
    {
      ++intres_req_pending;
      v2 = v0;
      goto LABEL_7;
    }
    goto LABEL_13;
  }
  dword_B8D78 = v1;
  v3 = intres_req_pending;
  if ( !intres_req_pending )
  {
    v0 = v1;
LABEL_13:
    v2 = v0;
    sub_41BB4(0);
    v3 = intres_req_pending;
  }
LABEL_6:
  intres_req_pending = v3 + 1;
  if ( v2 == -1 )
    sub_6FC54("ntp_worker.c", 193, 2, "(2147483647 * 2U + 1U) != child_slot");
LABEL_7:
  if ( !*(_DWORD *)(blocking_children + 4 * v2) )
  {
    v5 = sub_64B04(0, 0x90u, 0, 1);
    v6 = blocking_children;
    v5[13] = -1;
    v5[14] = -1;
    *(_DWORD *)(v6 + 4 * v2) = v5;
  }
  return sub_6F494();
}
