int __fastcall sub_15F8C(int a1)
{
  int v2; // r7
  int v3; // r0
  int v4; // r5
  int v5; // r8
  int v6; // r6
  _DWORD v8[5]; // [sp+3Ch] [bp-8Ch] BYREF
  int v9; // [sp+50h] [bp-78h] BYREF
  int v10; // [sp+54h] [bp-74h]
  int v11; // [sp+58h] [bp-70h]
  int v12; // [sp+5Ch] [bp-6Ch]
  int v13; // [sp+60h] [bp-68h]
  int v14; // [sp+64h] [bp-64h]
  int v15; // [sp+68h] [bp-60h]
  int v16; // [sp+6Ch] [bp-5Ch]
  int v17; // [sp+70h] [bp-58h]
  int v18; // [sp+74h] [bp-54h]
  int v19; // [sp+78h] [bp-50h]
  _DWORD s[19]; // [sp+7Ch] [bp-4Ch] BYREF

  sub_15FA2C(v8, a1);
  if ( !sub_15CD58(v8[0], v8[1], v8[2], v8[3], v8[4]) )
    sub_94700(
      "infrun.c",
      7464,
      "%s: Assertion `%s' failed.",
      "void insert_step_resume_breakpoint_at_caller(frame_info*)",
      "frame_id_p (frame_unwind_caller_id (next_frame))");
  v2 = ((int (__fastcall *)(int))loc_1602C8)(a1);
  memset(s, 0, 0x24u);
  v3 = ((int (__fastcall *)(int))loc_15F9E0)(a1);
  v4 = ((int (__fastcall *)(int, int))loc_169FA0)(v2, v3);
  v5 = sub_214838();
  v6 = ((int (__fastcall *)(int))loc_15DAC4)(a1);
  sub_15FA2C(&v9, a1);
  s[4] = v4;
  s[2] = v5;
  v19 = v6;
  s[9] = v6;
  s[10] = s[0];
  s[11] = s[1];
  s[12] = v5;
  s[13] = s[3];
  s[14] = v4;
  s[15] = s[5];
  s[16] = s[6];
  s[17] = s[7];
  s[18] = s[8];
  v14 = v9;
  v15 = v10;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  return sub_184D5C(v2, v6, s[0], s[1], v5, s[3], v4, s[5], s[6], s[7], s[8], v9, v10, v11, v12, v13, 15);
}
