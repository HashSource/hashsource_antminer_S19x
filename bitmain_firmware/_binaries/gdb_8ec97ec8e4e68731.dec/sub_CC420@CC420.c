int __fastcall sub_CC420(int a1)
{
  int v1; // r3
  int v3; // r4
  __int64 v5; // r0
  int v6; // r0
  int v7; // [sp+8h] [bp-28h]
  _BYTE v8[36]; // [sp+Ch] [bp-24h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
  {
    sub_94700(
      (int)"breakpoint.c",
      3834,
      "%s: Assertion `%s' failed.",
      "int remove_breakpoint(bp_location*)",
      "bl->owner != NULL");
LABEL_5:
    v5 = sub_94700(
           (int)"breakpoint.c",
           3838,
           "%s: Assertion `%s' failed.",
           "int remove_breakpoint(bp_location*)",
           "bl->owner->type != bp_none");
    ((void (__fastcall *)(_BYTE *, _DWORD))loc_23FC8C)(v8, HIDWORD(v5));
    v6 = ((int (__fastcall *)())loc_1CD290)();
    sub_338FFC(v6);
  }
  if ( !*(_DWORD *)(v1 + 12) )
    goto LABEL_5;
  v7 = dword_487D2C;
  ((void (__fastcall *)(_BYTE *))loc_23FF20)(v8);
  sub_1CD664(*(_DWORD *)(a1 + 48));
  v3 = ((int (__fastcall *)(int, _DWORD))loc_C7338)(a1, 0);
  ((void (__fastcall *)(_BYTE *))loc_23FC8C)(v8);
  ((void (__fastcall *)(int))loc_1CD290)(v7);
  return v3;
}
