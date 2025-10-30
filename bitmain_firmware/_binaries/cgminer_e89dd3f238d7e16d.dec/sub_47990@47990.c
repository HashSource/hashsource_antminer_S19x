int *__fastcall sub_47990(int *result)
{
  int *v1; // [sp+Ch] [bp-848h]
  char v2[20]; // [sp+10h] [bp-844h] BYREF
  int v3; // [sp+810h] [bp-44h]
  int v4; // [sp+814h] [bp-40h]
  __time_t v5; // [sp+818h] [bp-3Ch] BYREF
  int v6; // [sp+81Ch] [bp-38h]
  int v7; // [sp+820h] [bp-34h] BYREF
  int v8; // [sp+824h] [bp-30h]
  __int64 v9; // [sp+828h] [bp-2Ch]
  int v10; // [sp+834h] [bp-20h]
  unsigned int nr_readers; // [sp+838h] [bp-1Ch]
  pthread_rwlock_t *v12; // [sp+83Ch] [bp-18h]
  __int64 v13; // [sp+840h] [bp-14h]

  v1 = result;
  v7 = 0;
  v8 = 0;
  v12 = (pthread_rwlock_t *)result[9];
  nr_readers = v12->__nr_readers;
  v10 = *result;
  v13 = 0;
  while ( v12[11].__size[12] != 1 )
  {
    *((_BYTE *)v1 + 63) = 0;
    sub_45E50((int)v1, v12, nr_readers, v10);
    v9 = ((__int64 (__fastcall *)(int *))*(_DWORD *)(nr_readers + 68))(v1);
    *((_BYTE *)v1 + 62) = 0;
    if ( v9 == -1 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v2, 0x800u, "%s %d failure, disabling!", *(const char **)(nr_readers + 8), v12->__readers_wakeup);
        sub_1DB6C(3, v2, 0);
      }
      v12[1].__lock = 1;
      result = (int *)sub_2A5A0(v12, 1);
      break;
    }
    v13 += v9;
    result = (int *)sub_21AC0(&v5);
    v3 = v5 - v7;
    v4 = v6 - v8;
    if ( v6 - v8 < 0 )
    {
      --v3;
      v4 += 1000000;
    }
    if ( v13 && (v3 > 0 || v4 > 200000) || v3 >= dword_85A88 )
    {
      sub_3BB74(v10, v13);
      v13 = 0;
      result = (int *)sub_21430((int)&v7, (int)&v5);
    }
    if ( *((_BYTE *)v1 + 60) || v12[1].__lock )
      result = (int *)sub_452C0((int)v1, v10, nr_readers);
    if ( *((_BYTE *)v1 + 63) )
      result = (int *)(*(int (__fastcall **)(pthread_rwlock_t *))(nr_readers + 80))(v12);
  }
  v12[1].__lock = 1;
  return result;
}
