int sub_3B1A8()
{
  int v0; // r4
  int *v1; // r0
  char *v2; // r0
  int v3; // r1
  int result; // r0
  char v5[24]; // [sp+Ch] [bp-858h] BYREF
  struct sysinfo info; // [sp+80Ch] [bp-58h] BYREF
  int v7; // [sp+84Ch] [bp-18h]
  int v8; // [sp+850h] [bp-14h]
  int i; // [sp+854h] [bp-10h]

  if ( sysinfo(&info) )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      v0 = *_errno_location();
      v1 = _errno_location();
      v2 = strerror(*v1);
      snprintf(v5, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v0, v2);
      sub_1DB6C(6, v5, 0);
    }
    dword_941C4 = time(0);
  }
  else
  {
    dword_941C4 = info.uptime;
  }
  sub_21AC0(&dword_86ED0);
  sub_21430((int)&unk_8871C, (int)&dword_86ED0);
  dbl_941F8 = 0.0;
  dbl_94308 = 0.0;
  dbl_94300 = 0.0;
  dbl_90EF0 = 0.0;
  dbl_90DB8 = 0.0;
  dbl_90F00 = 0.0;
  for ( i = 0; i <= 11; ++i )
    qword_86940[i] = 0;
  dword_869A0 = 0;
  dword_94094 = 0;
  dword_9420C = 0;
  *(_QWORD *)&dword_92FB8 = 0;
  *(_QWORD *)&dword_90F20 = 0;
  *(_QWORD *)&dword_92FE8 = 0;
  dword_94090 = 0;
  *(_QWORD *)&dword_942F8 = 0;
  *(_QWORD *)&dword_93038 = 0;
  dword_90F44 = 0;
  dword_90F38 = 0;
  dword_90DDC = 0;
  dbl_862E0 = 1.0;
  dbl_862E8 = 1.0;
  dbl_862F0 = 1.0;
  qword_90DF8 = 0;
  dword_940A4 = 0;
  dbl_92F58 = 0.0;
  dbl_92FE0 = 0.0;
  dbl_90F28 = 0.0;
  for ( i = 0; i < dword_90E90; ++i )
  {
    v7 = *(_DWORD *)(dword_90F34 + 4 * i);
    *(_DWORD *)(v7 + 116) = 0;
    *(_QWORD *)(v7 + 8) = 0;
    *(_QWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 120) = 0;
    *(_DWORD *)(v7 + 124) = 0;
    *(_DWORD *)(v7 + 128) = 0;
    *(_DWORD *)(v7 + 132) = 0;
    *(_DWORD *)(v7 + 352) = 0;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 72) = 0;
    *(_QWORD *)(v7 + 80) = 0;
    *(_QWORD *)(v7 + 88) = 0;
    v3 = v7;
    *(_DWORD *)(v7 + 360) = 0;
    *(_DWORD *)(v3 + 364) = 0;
  }
  result = sub_3B0DC();
  for ( i = 0; i < dword_93010; ++i )
  {
    v8 = sub_2DF88(i);
    sub_21430(v8 + 368, (int)&dword_86ED0);
    sub_2D2FC(&stru_90F08, "cgminer.c", "zero_stats", 6244);
    *(_QWORD *)(v8 + 80) = 0;
    *(_DWORD *)(v8 + 36) = 0;
    *(_DWORD *)(v8 + 40) = 0;
    *(_DWORD *)(v8 + 44) = 0;
    *(_QWORD *)(v8 + 88) = 0;
    *(_DWORD *)(v8 + 220) = 0;
    *(_QWORD *)(v8 + 192) = 0;
    *(_QWORD *)(v8 + 200) = 0;
    *(_QWORD *)(v8 + 208) = 0;
    *(_QWORD *)(v8 + 224) = 0;
    sub_2D434(&stru_90F08, "cgminer.c", "zero_stats", 6257);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)(v8 + 4) + 96))(v8);
  }
  return result;
}
