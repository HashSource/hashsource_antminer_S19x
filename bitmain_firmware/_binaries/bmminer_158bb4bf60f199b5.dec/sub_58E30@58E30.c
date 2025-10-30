int sub_58E30()
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
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
    {
      v0 = *_errno_location();
      v1 = strerror(v0);
      snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v0, v1);
      sub_47AB4(6, s, 0);
    }
    dword_242EA0 = time(0);
  }
  else
  {
    dword_242EA0 = info.uptime;
  }
  sub_4A60C((struct timeval *)&dword_1AF0F4);
  sub_4C460(algn_1AF148, &dword_1AF0F4);
  v2 = (int *)&unk_1AF150;
  dbl_245110 = 0.0;
  dbl_245210 = 0.0;
  dbl_245208 = 0.0;
  dbl_245218 = 0.0;
  dbl_245228 = 0.0;
  dbl_2463B0 = 0.0;
  do
  {
    *(_QWORD *)v2 = 0;
    v2 += 2;
  }
  while ( v2 != &dword_1AF1B0 );
  dbl_9ED88 = 1.0;
  dbl_9ED68 = 1.0;
  dbl_9ED80 = 1.0;
  dword_242EE8 = 0;
  dword_1AF1B0 = 0;
  dword_245100 = 0;
  dword_245104 = 0;
  dword_246360 = 0;
  dword_242FDC = 0;
  dword_245150 = 0;
  dword_244014 = 0;
  *(_QWORD *)&dword_245168 = 0;
  *(_QWORD *)&dword_245158 = 0;
  qword_246368 = 0;
  *(_QWORD *)&dword_242E98 = 0;
  qword_242F00 = 0;
  qword_2463D0 = 0;
  dbl_242EF0 = 0.0;
  dbl_242F10 = 0.0;
  dbl_246238 = 0.0;
  if ( dword_242F4C > 0 )
  {
    v3 = (int *)dword_244048;
    v4 = dword_244048 + 4 * dword_242F4C;
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
  result = sub_53C3C();
  if ( dword_245140 > 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_56518(v7);
      sub_4C460((void *)(v8 + 368), &dword_1AF0F4);
      if ( pthread_mutex_lock(&stru_2463B8) )
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
      if ( pthread_mutex_unlock(&stru_2463B8) )
      {
        v10 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v10, "cgminer.c", "zero_stats", 6182);
LABEL_19:
        sub_47AB4(3, s, 1);
        sub_54CCC(1, 1);
      }
      ++v7;
      off_9E444();
      result = (*(int (__fastcall **)(int))(*(_DWORD *)(v8 + 4) + 96))(v8);
      if ( dword_245140 <= v7 )
        return result;
    }
    v9 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v9, "cgminer.c", "zero_stats", 6169);
    goto LABEL_19;
  }
  return result;
}
