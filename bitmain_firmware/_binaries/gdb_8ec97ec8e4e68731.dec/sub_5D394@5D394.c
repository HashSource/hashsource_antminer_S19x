int __fastcall sub_5D394(int a1, _DWORD *a2, int a3)
{
  int *v5; // r0
  bool v6; // zf
  int v7; // r4
  _BYTE *v8; // r0
  int v9; // r5
  const char *v10; // r2

  v5 = (int *)sub_242FDC(a1);
  v6 = a3 == 1;
  v7 = *v5;
  if ( !v6 )
    sub_946E0("Usage: -info-gdb-mi-command MI_COMMAND_NAME");
  v8 = (_BYTE *)*a2;
  if ( *(_BYTE *)*a2 == 45 )
    ++v8;
  v9 = sub_5FE9C(v8);
  sub_2578AC(v7, 0);
  v10 = "true";
  if ( !v9 )
    v10 = "false";
  sub_2575E8(v7, "exists", v10);
  return sub_25734C(v7, 0);
}
