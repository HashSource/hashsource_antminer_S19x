int sub_3C0CC()
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
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      v0 = *_errno_location();
      v1 = _errno_location();
      v2 = strerror(*v1);
      snprintf(v5, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v0, v2);
      sub_1E4EC(6, v5, 0);
    }
    dword_9535C = time(0);
  }
  else
  {
    dword_9535C = info.uptime;
  }
  sub_22308(&dword_88068);
  sub_21CA0((int)&unk_898B4, (int)&dword_88068);
  dbl_95390 = 0.0;
  dbl_954A0 = 0.0;
  dbl_95498 = 0.0;
  dbl_92088 = 0.0;
  dbl_91F50 = 0.0;
  dbl_92098 = 0.0;
  for ( i = 0; i <= 11; ++i )
    qword_87AD8[i] = 0;
  dword_87B38 = 0;
  dword_9522C = 0;
  dword_953A4 = 0;
  dbl_94150 = 0.0;
  dbl_920B8 = 0.0;
  dbl_94180 = 0.0;
  dword_95228 = 0;
  dbl_95490 = 0.0;
  dbl_941D0 = 0.0;
  dword_920DC = 0;
  dword_920D0 = 0;
  dword_91F74 = 0;
  dbl_87478 = 1.0;
  dbl_87480 = 1.0;
  dbl_87488 = 1.0;
  dbl_91F90 = 0.0;
  dword_9523C = 0;
  dbl_940F0 = 0.0;
  dbl_94178 = 0.0;
  dbl_920C0 = 0.0;
  for ( i = 0; i < dword_92028; ++i )
  {
    v8 = *(_DWORD *)(dword_920CC + 4 * i);
    *(_DWORD *)(v8 + 116) = 0;
    *(_QWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = 0;
    *(_DWORD *)(v8 + 120) = 0;
    *(_DWORD *)(v8 + 124) = 0;
    *(_DWORD *)(v8 + 128) = 0;
    *(_DWORD *)(v8 + 132) = 0;
    *(_DWORD *)(v8 + 352) = 0;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 72) = 0;
    *(_QWORD *)(v8 + 80) = 0;
    *(_QWORD *)(v8 + 88) = 0;
    v3 = v8;
    *(_DWORD *)(v8 + 360) = 0;
    *(_DWORD *)(v3 + 364) = 0;
  }
  result = sub_3C014();
  for ( i = 0; i < dword_941A8; ++i )
  {
    v7 = sub_2EF94(i);
    sub_21CA0(v7 + 368, (int)&dword_88068);
    sub_2E354(&stru_920A0, "cgminer.c", "zero_stats", 6244);
    *(_QWORD *)(v7 + 80) = 0;
    *(_DWORD *)(v7 + 36) = 0;
    *(_DWORD *)(v7 + 40) = 0;
    *(_DWORD *)(v7 + 44) = 0;
    *(_QWORD *)(v7 + 88) = 0;
    *(_DWORD *)(v7 + 220) = 0;
    *(_QWORD *)(v7 + 192) = 0;
    *(_QWORD *)(v7 + 200) = 0;
    *(_QWORD *)(v7 + 208) = 0;
    *(_QWORD *)(v7 + 224) = 0;
    sub_2E484(&stru_920A0, "cgminer.c", "zero_stats", 6257);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)(v7 + 4) + 96))(v7);
  }
  return result;
}
