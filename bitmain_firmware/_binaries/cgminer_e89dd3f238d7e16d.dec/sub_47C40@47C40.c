int *__fastcall sub_47C40(int *result)
{
  int v1; // r6
  int *v2; // r0
  char *v3; // r0
  int *v4; // [sp+Ch] [bp-890h]
  struct sysinfo v5; // [sp+10h] [bp-88Ch] BYREF
  char v6[12]; // [sp+50h] [bp-84Ch] BYREF
  int v7; // [sp+850h] [bp-4Ch]
  int v8; // [sp+854h] [bp-48h]
  __time_t v9; // [sp+858h] [bp-44h] BYREF
  int v10; // [sp+85Ch] [bp-40h]
  int v11; // [sp+860h] [bp-3Ch] BYREF
  int v12; // [sp+864h] [bp-38h]
  __int64 v13; // [sp+868h] [bp-34h]
  int v14; // [sp+874h] [bp-28h]
  int v15; // [sp+878h] [bp-24h]
  _DWORD *v16; // [sp+87Ch] [bp-20h]
  __int64 v17; // [sp+880h] [bp-1Ch]

  v4 = result;
  v11 = 0;
  v12 = 0;
  v16 = (_DWORD *)result[9];
  v15 = v16[1];
  v14 = *result;
  v17 = 0;
  while ( *((_BYTE *)v16 + 364) != 1 )
  {
    *((_BYTE *)v4 + 63) = 0;
    v13 = ((__int64 (__fastcall *)(int *))*(_DWORD *)(v15 + 68))(v4);
    *((_BYTE *)v4 + 62) = 0;
    if ( v13 == -1 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v6, 0x800u, "%s %d failure, disabling!", *(const char **)(v15 + 8), v16[2]);
        sub_1DB6C(3, v6, 0);
      }
      v16[8] = 1;
      result = (int *)sub_2A5A0(v16, 1);
      break;
    }
    v17 += v13;
    sub_21AC0(&v9);
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
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
      {
        v1 = *_errno_location();
        v2 = _errno_location();
        v3 = strerror(*v2);
        snprintf(v6, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v1, v3);
        sub_1DB6C(6, v6, 0);
      }
      result = (int *)time(0);
      dword_94204 = (int)result;
    }
    else
    {
      dword_94204 = v5.uptime;
    }
    dbl_862E0 = (double)dword_94204 - (double)dword_941C4;
    if ( v13 )
    {
      sub_3BB74(v14, v13);
      result = (int *)sub_21430((int)&v11, (int)&v9);
    }
    if ( *((_BYTE *)v4 + 60) || v16[8] )
      result = (int *)sub_452C0((int)v4, v14, v15);
    if ( *((_BYTE *)v4 + 63) )
    {
      sub_2D2FC(&stru_94048, "cgminer.c", "hash_driver_work", 9861);
      (*(void (__fastcall **)(_DWORD *))(v15 + 80))(v16);
      result = (int *)sub_2D434(&stru_94048, "cgminer.c", "hash_driver_work", 9863);
    }
  }
  v16[8] = 1;
  return result;
}
