int __fastcall sub_DA350(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  void *v12; // r4
  int v14; // r0
  int v15; // [sp+3Ch] [bp-28h]
  int v16; // [sp+40h] [bp-24h]
  _BYTE v17[4]; // [sp+4Ch] [bp-18h] BYREF
  int v18; // [sp+50h] [bp-14h]
  int v19; // [sp+54h] [bp-10h]
  int v20; // [sp+58h] [bp-Ch]
  int v21; // [sp+5Ch] [bp-8h]

  v15 = a4;
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v16 = 0;
  if ( !a11 )
  {
    sub_94700(
      (int)"breakpoint.c",
      9343,
      "%s: Assertion `%s' failed.",
      "int create_breakpoint(gdbarch*, const event_location*, const char*, int, const char*, int, int, bptype, int, auto_"
      "boolean, const breakpoint_ops*, int, int, int, unsigned int)",
      "ops != NULL");
    v14 = sub_199294(v17);
    sub_338FFC(v14);
  }
  v12 = sub_92E28();
  (*(void (__fastcall **)(int))(a11 + 52))(a2);
  sub_92E40((int)v12);
  sub_199294(v17);
  return 0;
}
