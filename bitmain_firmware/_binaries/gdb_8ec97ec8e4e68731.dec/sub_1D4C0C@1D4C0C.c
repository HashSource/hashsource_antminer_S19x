int *__fastcall sub_1D4C0C(_DWORD *a1)
{
  _DWORD *v1; // r4
  void *v3; // r9
  int v4; // r0
  int v5; // r11
  int v6; // r10
  int *v7; // r0
  int v8; // r1
  int *v9; // r4
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r12
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r12
  int *v20; // r4
  void *v21; // r0
  __int64 v22; // r0
  int v23; // [sp+24h] [bp-18h] BYREF
  int v24; // [sp+28h] [bp-14h]
  int v25; // [sp+2Ch] [bp-10h]
  int v26; // [sp+30h] [bp-Ch]
  int v27; // [sp+34h] [bp-8h]

  if ( a1[69] == a1[70] )
    return 0;
  v1 = a1 + 63;
  v3 = sub_92E28();
  v4 = sub_1D4B2C((int)a1);
  ((void (__fastcall *)(int *, int))loc_15CFA0)(&v23, v4);
  v5 = sub_15D0C4(v23, v24, v25, v26, v27, a1[19], a1[20], a1[21], a1[22], a1[23]);
  v6 = sub_15D0C4(v23, v24, v25, v26, v27, a1[24], a1[25], a1[26], a1[27], a1[28]);
  v7 = (int *)sub_93028(0xCu);
  v8 = (int)v1;
  v9 = v7;
  sub_E17BC(v7, v8);
  while ( !((int (__fastcall *)(int *))loc_E16AC)(v9) )
  {
    if ( !sub_E1948(v9, 1u) )
      sub_946E0("No trace.");
  }
  if ( a1[77] )
  {
    v22 = sub_94700(
            (int)"record-btrace.c",
            1954,
            "%s: Assertion `%s' failed.",
            "btrace_insn_iterator* record_btrace_start_replaying(thread_info*)",
            "btinfo->replay == NULL");
    if ( HIDWORD(v22) == 1 )
    {
      v20 = (int *)sub_339E78(v22);
      v21 = (void *)a1[77];
      if ( v21 )
        free(v21);
      a1[77] = 0;
      sub_1DDBE4(a1[2], a1[3], a1[4]);
      sub_92F1C(*v20, v20[1], v20[2]);
    }
    sub_339E78(v22);
    sub_92E60();
  }
  a1[77] = v9;
  sub_1DDBE4(a1[2], a1[3], a1[4]);
  v10 = sub_1D4B2C((int)a1);
  ((void (__fastcall *)(int *, int))loc_15CFA0)(&v23, v10);
  if ( v5 )
  {
    v11 = v24;
    v12 = v25;
    v13 = v26;
    v14 = v27;
    a1[19] = v23;
    a1[20] = v11;
    a1[21] = v12;
    a1[22] = v13;
    a1[23] = v14;
  }
  if ( v6 )
  {
    v15 = v24;
    v16 = v25;
    v17 = v26;
    v18 = v27;
    a1[24] = v23;
    a1[25] = v15;
    a1[26] = v16;
    a1[27] = v17;
    a1[28] = v18;
  }
  sub_92E40((int)v3);
  return v9;
}
