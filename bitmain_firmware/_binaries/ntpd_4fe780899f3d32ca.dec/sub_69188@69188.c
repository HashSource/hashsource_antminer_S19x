int sub_69188()
{
  int v0; // r2
  int v1; // r3
  int v2; // r5
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r2

  if ( !worker_per_query )
  {
    v0 = dword_B7D78;
    if ( dword_B7D78 != -1 && !**(_DWORD **)(blocking_children + 4 * dword_B7D78) )
    {
      v1 = intres_req_pending;
      goto LABEL_5;
    }
  }
  v4 = sub_6908C();
  v2 = v4;
  if ( !worker_per_query )
  {
    v0 = dword_B7D78;
    v1 = intres_req_pending;
    if ( dword_B7D78 == -1 )
    {
      dword_B7D78 = v4;
      if ( intres_req_pending )
        goto LABEL_17;
      v0 = v4;
      goto LABEL_15;
    }
LABEL_5:
    if ( v1 )
    {
      v2 = v0;
      intres_req_pending = v1 + 1;
      goto LABEL_8;
    }
LABEL_15:
    v2 = v0;
    sub_40DFC(0);
    v1 = intres_req_pending;
    goto LABEL_17;
  }
  v1 = intres_req_pending;
LABEL_17:
  intres_req_pending = v1 + 1;
  if ( v2 == -1 )
    sub_6ECC0("ntp_worker.c", 193, 2, "(0x7fffffff * 2U + 1U) != child_slot");
LABEL_8:
  if ( !*(_DWORD *)(blocking_children + 4 * v2) )
  {
    v5 = sub_63BA4(0, 0x90u, 0, 1);
    v6 = blocking_children;
    v5[13] = -1;
    v5[14] = -1;
    *(_DWORD *)(v6 + 4 * v2) = v5;
  }
  return sub_6E544();
}
