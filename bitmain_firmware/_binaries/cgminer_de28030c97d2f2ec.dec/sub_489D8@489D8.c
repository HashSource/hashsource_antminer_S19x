int *__fastcall sub_489D8(int *result)
{
  int v1; // r4
  int *v2; // r0
  char *v3; // r0
  int *v4; // [sp+Ch] [bp-888h]
  struct sysinfo v5; // [sp+10h] [bp-884h] BYREF
  char v6[20]; // [sp+50h] [bp-844h] BYREF
  int v7; // [sp+850h] [bp-44h]
  int v8; // [sp+854h] [bp-40h]
  __time_t v9; // [sp+858h] [bp-3Ch] BYREF
  int v10; // [sp+85Ch] [bp-38h]
  int v11; // [sp+860h] [bp-34h] BYREF
  int v12; // [sp+864h] [bp-30h]
  __int64 v13; // [sp+868h] [bp-2Ch]
  int v14; // [sp+874h] [bp-20h]
  int v15; // [sp+878h] [bp-1Ch]
  _DWORD *v16; // [sp+87Ch] [bp-18h]
  double v17; // [sp+880h] [bp-14h]

  v4 = result;
  v11 = 0;
  v12 = 0;
  v16 = (_DWORD *)result[9];
  v15 = v16[1];
  v14 = *result;
  v17 = 0.0;
  while ( *((_BYTE *)v16 + 364) != 1 )
  {
    *((_BYTE *)v4 + 63) = 0;
    v13 = ((__int64 (__fastcall *)(int *))*(_DWORD *)(v15 + 68))(v4);
    *((_BYTE *)v4 + 62) = 0;
    if ( v13 == -1 )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        snprintf(v6, 0x800u, "%s %d failure, disabling!", *(const char **)(v15 + 8), v16[2]);
        sub_1E4EC(3, v6, 0);
      }
      v16[8] = 1;
      result = (int *)sub_2B5B0(v16, 1);
      break;
    }
    *(_QWORD *)&v17 += v13;
    sub_22308(&v9);
    v7 = v9 - v11;
    v8 = v10 - v12;
    if ( v10 - v12 < 0 )
    {
      --v7;
      v8 += 1000000;
    }
    result = (int *)sysinfo(&v5);
    if ( result )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
      {
        v1 = *_errno_location();
        v2 = _errno_location();
        v3 = strerror(*v2);
        snprintf(v6, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v1, v3);
        sub_1E4EC(6, v6, 0);
      }
      result = (int *)time(0);
      dword_9539C = (int)result;
    }
    else
    {
      dword_9539C = v5.uptime;
    }
    dbl_87478 = (double)dword_9539C - (double)dword_9535C;
    if ( v13 )
    {
      sub_3CA5C(v14, v13);
      result = (int *)sub_21CA0((int)&v11, (int)&v9);
    }
    if ( *((_BYTE *)v4 + 60) || v16[8] )
      result = (int *)sub_460E4((int)v4, v14, v15);
    if ( *((_BYTE *)v4 + 63) )
    {
      sub_2E354(&stru_951E0, "cgminer.c", "hash_driver_work", 9861);
      (*(void (__fastcall **)(_DWORD *))(v15 + 80))(v16);
      result = (int *)sub_2E484(&stru_951E0, "cgminer.c", "hash_driver_work", 9863);
    }
  }
  v16[8] = 1;
  return result;
}
