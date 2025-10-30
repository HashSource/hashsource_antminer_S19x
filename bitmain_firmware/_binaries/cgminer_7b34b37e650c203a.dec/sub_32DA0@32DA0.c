int sub_32DA0()
{
  int v0; // r4
  char *v1; // r0
  int *v2; // r3
  int *v3; // r12
  int v4; // lr
  int v5; // t1
  int result; // r0
  int v7; // r5
  int v8; // r4
  int *v9; // r0
  int *v10; // r0
  struct sysinfo info; // [sp+10h] [bp-840h] BYREF
  char s[2048]; // [sp+50h] [bp-800h] BYREF

  if ( sysinfo(&info) )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
    {
      v0 = *_errno_location();
      v1 = strerror(v0);
      snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v0, v1);
      sub_20F58(6, s, 0);
    }
    dword_73320 = time(0);
  }
  else
  {
    dword_73320 = info.uptime;
  }
  sub_239A4((struct timeval *)&dword_69020);
  sub_257F8(&unk_6907C, &dword_69020);
  v2 = (int *)&unk_69088;
  dbl_75590 = 0.0;
  dbl_75690 = 0.0;
  dbl_75688 = 0.0;
  dbl_75698 = 0.0;
  dbl_756A8 = 0.0;
  dbl_76830 = 0.0;
  do
  {
    *(_QWORD *)v2 = 0;
    v2 += 2;
  }
  while ( v2 != &dword_690E8 );
  dbl_68740 = 1.0;
  dbl_68720 = 1.0;
  dbl_68738 = 1.0;
  dword_73368 = 0;
  dword_690E8 = 0;
  dword_75580 = 0;
  dword_75584 = 0;
  dword_767E0 = 0;
  dword_7345C = 0;
  dword_755D0 = 0;
  dword_74494 = 0;
  *(_QWORD *)&dword_755E8 = 0;
  *(_QWORD *)&dword_755D8 = 0;
  qword_767E8 = 0;
  *(_QWORD *)&dword_73318 = 0;
  qword_73380 = 0;
  qword_76850 = 0;
  dbl_73370 = 0.0;
  dbl_73390 = 0.0;
  dbl_766B8 = 0.0;
  if ( dword_733CC > 0 )
  {
    v3 = (int *)dword_744C8;
    v4 = dword_744C8 + 4 * dword_733CC;
    do
    {
      v5 = *v3++;
      *(_DWORD *)(v5 + 116) = 0;
      *(_QWORD *)(v5 + 8) = 0;
      *(_QWORD *)(v5 + 16) = 0;
      *(_DWORD *)(v5 + 120) = 0;
      *(_DWORD *)(v5 + 124) = 0;
      *(_DWORD *)(v5 + 128) = 0;
      *(_DWORD *)(v5 + 132) = 0;
      *(_DWORD *)(v5 + 352) = 0;
      *(_QWORD *)(v5 + 40) = 0;
      *(_QWORD *)(v5 + 72) = 0;
      *(_QWORD *)(v5 + 80) = 0;
      *(_QWORD *)(v5 + 88) = 0;
      *(_DWORD *)(v5 + 360) = 0;
      *(_DWORD *)(v5 + 364) = 0;
    }
    while ( (int *)v4 != v3 );
  }
  result = sub_2D75C();
  if ( dword_755C0 > 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_3046C(v7);
      sub_257F8((void *)(v8 + 368), &dword_69020);
      if ( pthread_mutex_lock(&stru_76838) )
        break;
      *(_QWORD *)(v8 + 80) = 0;
      *(_DWORD *)(v8 + 36) = 0;
      *(_DWORD *)(v8 + 40) = 0;
      *(_DWORD *)(v8 + 44) = 0;
      *(_QWORD *)(v8 + 88) = 0;
      *(_DWORD *)(v8 + 220) = 0;
      *(_QWORD *)(v8 + 200) = 0;
      *(_QWORD *)(v8 + 208) = 0;
      *(_QWORD *)(v8 + 224) = 0;
      *(_QWORD *)(v8 + 192) = 0;
      if ( pthread_mutex_unlock(&stru_76838) )
      {
        v10 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v10, "cgminer.c", "zero_stats", 6188);
LABEL_19:
        sub_20F58(3, s, 1);
        sub_2E6B0(1, 1);
      }
      ++v7;
      off_67ED8();
      result = (*(int (__fastcall **)(int))(*(_DWORD *)(v8 + 4) + 96))(v8);
      if ( dword_755C0 <= v7 )
        return result;
    }
    v9 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v9, "cgminer.c", "zero_stats", 6175);
    goto LABEL_19;
  }
  return result;
}
