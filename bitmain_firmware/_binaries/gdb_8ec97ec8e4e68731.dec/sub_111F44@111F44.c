void __fastcall sub_111F44(int a1, _DWORD *a2, __int64 *a3)
{
  int v6; // r4
  void *v7; // r6
  int v8; // r10
  int v9; // r7
  _DWORD *v10; // r4
  int v11; // r0
  char v12; // r10
  int v13; // r11
  _DWORD *v14; // r6
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r1
  int v18; // r3
  int v19; // r2
  char v20; // r3
  char v21; // r3
  __int64 v22; // r2
  __int64 v23; // r0
  int v24; // r0
  _DWORD *v25; // r4
  _DWORD *v26; // r0

  if ( *a2 )
    goto LABEL_18;
  v6 = sub_15DE14(a1);
  v7 = sub_92E28();
  v8 = sub_15DB40(a1);
  v9 = ((int (__fastcall *)(int, int))loc_1699D4)(v8, a1);
  v10 = (_DWORD *)sub_11A9C4(v8, v9, v6);
  if ( a3 && (v11 = ((int (__fastcall *)(int))loc_1672F0)(v8), v11 != -1) )
  {
    v13 = ((int (__fastcall *)(int, int))loc_15EBBC)(a1, v11);
    v12 = 1;
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  sub_92E40((int)v7);
  if ( !v10 )
    return;
  if ( !v10[2] )
  {
    free(v10);
    return;
  }
  v14 = sub_93094(1u, 0x28u);
  v15 = dword_4872CC;
  *v14 = a1;
  v14[1] = 1;
  v16 = (_DWORD *)sub_324030(v15, v14, 1);
  if ( *v16 )
    goto LABEL_20;
  v17 = *v10;
  v18 = v10[2];
  v19 = v10[1];
  *v16 = v14;
  *a2 = v14;
  v14[2] = v10;
  v14[4] = v9;
  if ( v17 != v18 || v17 != v19 )
  {
    v17 += v19;
    if ( v18 < v17 )
    {
LABEL_19:
      sub_94700(
        (int)"dwarf2-frame-tailcall.c",
        198,
        "%s: Assertion `%s' failed.",
        "int pretended_chain_levels(call_site_chain*)",
        "chain_levels <= chain->length");
LABEL_20:
      v23 = sub_94700(
              (int)"dwarf2-frame-tailcall.c",
              101,
              "%s: Assertion `%s' failed.",
              "tailcall_cache* cache_new_ref1(frame_info*)",
              "*slot == NULL");
      if ( HIDWORD(v23) != 1 )
      {
        sub_339E78(v23);
        sub_92E60();
      }
      v24 = sub_339E78(v23);
      v25 = (_DWORD *)v24;
      if ( dword_4872D4 )
      {
        v26 = (_DWORD *)sub_242F8C(v24);
        v24 = sub_154B38(*v26, *v25, v25[1], v25[2]);
      }
      sub_349250(v24);
      return;
    }
  }
  v20 = *((_BYTE *)v14 + 20);
  v14[3] = v17;
  v21 = v20 & 0xFE | v12 & 1;
  *((_BYTE *)v14 + 20) = v21;
  if ( (v21 & 1) != 0 )
  {
    v22 = *a3;
    v14[6] = v13;
    *((_QWORD *)v14 + 4) = v22;
  }
  if ( v17 <= 0 )
  {
    sub_94700(
      (int)"dwarf2-frame-tailcall.c",
      425,
      "%s: Assertion `%s' failed.",
      "void dwarf2_tailcall_sniffer_first(frame_info*, void**, const LONGEST*)",
      "cache->chain_levels > 0");
LABEL_18:
    sub_94700(
      (int)"dwarf2-frame-tailcall.c",
      370,
      "%s: Assertion `%s' failed.",
      "void dwarf2_tailcall_sniffer_first(frame_info*, void**, const LONGEST*)",
      "*tailcall_cachep == NULL");
    goto LABEL_19;
  }
}
