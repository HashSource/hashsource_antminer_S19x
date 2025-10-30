int __fastcall sub_62DA0(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  char v11[2051]; // [sp+18h] [bp-814h] BYREF
  char v12; // [sp+81Bh] [bp-11h] BYREF
  unsigned __int8 *v13; // [sp+81Ch] [bp-10h]
  int v14; // [sp+820h] [bp-Ch]
  unsigned __int8 i; // [sp+826h] [bp-6h]
  unsigned __int8 j; // [sp+827h] [bp-5h]

  j = 0;
  i = 0;
  v14 = 0;
  v12 = 17;
  if ( (a3 & 1) != 0 || (a5 & 1) != 0 )
  {
    strcpy(v11, "WARNING: exec_power_cmd_v2 only support even len\n");
    sub_3AF5C(3, v11, 0, (int)v11);
    return -1;
  }
  else
  {
    pthread_mutex_lock(&stru_531520);
    for ( i = 0; i <= 3u; ++i )
    {
      for ( j = 0; a3 > j; sub_6AB5C(a1, &v12, 1, &a2[j++], 1, 0) )
        ;
      usleep(0x7A120u);
      v13 = a4;
      for ( j = 0; a5 > j; sub_6AA94(a1, &v12, 1, &v13[j++], 1, 0) )
        ;
      usleep((__useconds_t)&off_186A0);
      v14 = sub_62A14(a2, a4, a5);
      if ( !v14 )
        break;
    }
    pthread_mutex_unlock(&stru_531520);
    return v14;
  }
}
