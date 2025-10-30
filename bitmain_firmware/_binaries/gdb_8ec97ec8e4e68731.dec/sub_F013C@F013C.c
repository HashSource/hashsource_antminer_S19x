int __fastcall sub_F013C(int a1, int a2, int a3)
{
  int v4; // r2
  void *v6; // r0
  int v7; // r0
  int v8; // [sp+Ch] [bp-4h] BYREF

  v8 = a2;
  sub_2579B4(a1, a3);
  v4 = v8;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)a1 = off_38F0AC;
  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 36) = 0;
  if ( !v4 )
  {
    sub_94700(
      (int)"cli-out.c",
      269,
      "%s: Assertion `%s' failed.",
      "cli_ui_out::cli_ui_out(ui_file*, ui_out_flags)",
      "stream != NULL");
    v6 = *(void **)(a1 + 24);
    if ( v6 )
      sub_339E64(v6);
    v7 = sub_257708(a1);
    sub_338FFC(v7);
  }
  sub_69274((int *)(a1 + 24), 0, &v8);
  return a1;
}
