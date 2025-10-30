int __fastcall sub_61724(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  char v10[2051]; // [sp+18h] [bp-814h] BYREF
  unsigned __int8 v11; // [sp+81Bh] [bp-11h]
  unsigned __int8 *v12; // [sp+81Ch] [bp-10h]
  int v13; // [sp+820h] [bp-Ch]
  unsigned __int8 i; // [sp+826h] [bp-6h]
  unsigned __int8 j; // [sp+827h] [bp-5h]

  j = 0;
  i = 0;
  v13 = 0;
  v11 = 17;
  if ( (a3 & 1) != 0 || (a5 & 1) != 0 )
  {
    strcpy(v10, "WARNING: exec_power_cmd_v2 only support even len\n");
    sub_3B6AC(3, v10, 0, (int)v10);
    return -1;
  }
  else
  {
    pthread_mutex_lock(&stru_536330);
    for ( i = 0; i <= 3u; ++i )
    {
      for ( j = 0; j < a3; sub_6E668(16, 0, 0, v11, a2[j++]) )
        ;
      usleep(0x7A120u);
      v12 = a4;
      for ( j = 0; j < a5; ++j )
        *v12++ = sub_6E668(16, 1, 0, v11, 0);
      usleep(0x186A0u);
      v13 = sub_6120C(a2, a4, a5);
      if ( !v13 )
        break;
    }
    pthread_mutex_unlock(&stru_536330);
    return v13;
  }
}
