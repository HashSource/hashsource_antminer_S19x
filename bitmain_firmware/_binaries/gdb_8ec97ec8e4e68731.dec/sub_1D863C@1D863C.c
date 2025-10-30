int __fastcall sub_1D863C(int *a1, int a2, _DWORD *a3, int a4)
{
  int v4; // r5
  int v6; // r12
  unsigned int v7; // r4
  _DWORD *v8; // r3
  _DWORD *v9; // t1
  int v10; // r0
  int result; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r0

  if ( !dword_488098 || (v4 = *(_DWORD *)dword_488098) == 0 )
  {
LABEL_14:
    sub_94700(
      (int)"record-full.c",
      1711,
      "%s: %s",
      "int record_full_remove_breakpoint(target_ops*, gdbarch*, bp_target_info*, remove_bp_reason)",
      "removing unknown breakpoint");
    goto LABEL_15;
  }
  v6 = dword_488098 + 4;
  v7 = 0;
  while ( 1 )
  {
    v9 = *(_DWORD **)(v6 + 4);
    v6 += 4;
    v8 = v9;
    if ( v9[1] == a3[1] && *v8 == *a3 )
      break;
    if ( ++v7 == v4 )
      goto LABEL_14;
  }
  if ( !v8[2]
    || (v10 = *a1,
        v4 = dword_48809C,
        dword_48809C = 1,
        result = (*(int (**)(void))(v10 + 80))(),
        dword_48809C = v4,
        !result) )
  {
    if ( a4 )
      return 0;
    v12 = dword_488098;
    v13 = *(_DWORD *)dword_488098;
    if ( *(_DWORD *)dword_488098 > v7 )
    {
      result = 0;
      v14 = *(_DWORD *)(dword_488098 + 4 * (v13 + 1));
      *(_DWORD *)dword_488098 = v13 - 1;
      *(_DWORD *)(v12 + 4 * (v7 + 2)) = v14;
      return result;
    }
LABEL_15:
    v15 = sub_94700(
            (int)"record-full.c",
            1705,
            "%s: Assertion `%s' failed.",
            "record_full_breakpoint* VEC_record_full_breakpoint_p_unordered_remove(VEC_record_full_breakpoint_p*, unsigne"
            "d int, const char*, unsigned int)",
            "unordered_remove");
    dword_48809C = v4;
    sub_338FFC(v15);
  }
  return result;
}
