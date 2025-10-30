int __fastcall sub_C38B0(int a1)
{
  int v1; // r1
  int v2; // r0
  int *v3; // r2
  int *v4; // r12
  int v5; // r1
  int v6; // t1
  int v7; // r3
  int v9; // r1
  int v10; // r3
  bool v11; // zf
  int v12; // r2
  __int64 v13; // r0

  v1 = *(_DWORD *)(a1 + 16);
  v2 = dword_478268;
  v3 = *(int **)(v1 + 136);
  v4 = *(int **)(v1 + 140);
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      v6 = *v3++;
      v5 = v6;
      v7 = *(_DWORD *)(v2 + 4 * v6);
      if ( !v7 )
        goto LABEL_15;
      *(_DWORD *)(v2 + 4 * v5) = v7 - 1;
      if ( v4 == v3 )
        goto LABEL_4;
    }
  }
  v9 = *(unsigned __int8 *)(v1 + 148);
  v10 = 0;
  while ( 1 )
  {
    if ( !v9 )
    {
      v11 = v10 == 5;
      if ( v10 != 5 )
        v11 = v10 == 2;
      if ( v11 )
        goto LABEL_12;
    }
    v12 = *(_DWORD *)(v2 + 4 * v10);
    if ( !v12 )
      break;
    *(_DWORD *)(v2 + 4 * v10) = v12 - 1;
LABEL_12:
    if ( ++v10 == 152 )
    {
LABEL_4:
      sub_189058();
      return 0;
    }
  }
  sub_94700(
    (int)"break-catch-sig.c",
    132,
    "%s: Assertion `%s' failed.",
    "int signal_catchpoint_remove_location(bp_location*, remove_bp_reason)",
    "signal_catch_counts[i] > 0");
LABEL_15:
  v13 = sub_94700(
          (int)"break-catch-sig.c",
          122,
          "%s: Assertion `%s' failed.",
          "int signal_catchpoint_remove_location(bp_location*, remove_bp_reason)",
          "signal_catch_counts[iter] > 0");
  return sub_C39AC(v13, HIDWORD(v13));
}
