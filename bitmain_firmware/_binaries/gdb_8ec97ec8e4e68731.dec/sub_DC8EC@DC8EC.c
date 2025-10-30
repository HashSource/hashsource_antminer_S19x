void __fastcall sub_DC8EC(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r9
  _DWORD *v10; // r5
  char *v11; // r11
  int v12; // r10
  int v13; // r2
  __int64 v14; // r0
  int v15; // r0
  _DWORD v16[10]; // [sp+8h] [bp-54h] BYREF
  _DWORD s[11]; // [sp+30h] [bp-2Ch] BYREF

  v5 = ((int (*)(void))loc_23DBE4)();
  memset(s, 0, 0x28u);
  if ( !*(_DWORD *)(v5 + 56) )
  {
    v9 = *(_DWORD *)(v5 + 20);
    v10 = sub_9836C(0x88u);
    memset(v10, 0, 0x88u);
    v11 = off_46D5A4[0][2];
    v12 = dword_46DE54;
    v10[22] = a1;
    v10[11] = 0;
    v10[12] = 0;
    v10[19] = 0;
    v10[21] = 0;
    v10[4] = 1;
    v10[1] = &dword_4784E4;
    *v10 = off_37E1FC;
    v10[23] = v11;
    v10[27] = v10;
    v10[24] = v12;
    v10[3] = 3;
    v10[5] = 3;
    v10[13] = 0;
    v10[14] = 0;
    v10[15] = 0;
    v10[16] = 0;
    v10[17] = 0;
    v10[28] = v9;
    if ( !v9 )
    {
      v14 = sub_94700(
              (int)"breakpoint.c",
              8535,
              "%s: Assertion `%s' failed.",
              "breakpoint* new_single_step_breakpoint(int, gdbarch*)",
              "b->thread != 0");
      v15 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*v10 + 4))(v10, HIDWORD(v14));
      sub_338FFC(v15);
    }
    v13 = dword_478348;
    if ( dword_478348 )
    {
      while ( *(_DWORD *)(v13 + 8) )
        v13 = *(_DWORD *)(v13 + 8);
      *(_DWORD *)(v13 + 8) = v10;
    }
    else
    {
      dword_478348 = (int)v10;
    }
    *(_DWORD *)(v5 + 56) = v10;
  }
  sub_21DEAC(v16, a3);
  s[0] = v16[0];
  s[1] = v16[1];
  s[2] = v16[2];
  s[3] = v16[3];
  s[4] = v16[4];
  s[6] = v16[6];
  s[7] = v16[7];
  s[5] = a3;
  s[8] = v16[8];
  s[9] = v16[9];
  s[3] = sub_214838(a3);
  v6 = *(_DWORD *)(v5 + 56);
  LOBYTE(s[7]) = 1;
  sub_CFF88(v6, (int)s);
  sub_D72EC(2, v7, v8);
}
