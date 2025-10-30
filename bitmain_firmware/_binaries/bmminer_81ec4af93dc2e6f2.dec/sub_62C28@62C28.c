int __fastcall sub_62C28(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  char v10; // [sp+1Fh] [bp-Dh] BYREF
  int v11; // [sp+20h] [bp-Ch]
  unsigned __int8 i; // [sp+26h] [bp-6h]
  unsigned __int8 j; // [sp+27h] [bp-5h]

  j = 0;
  v11 = 0;
  v10 = 0;
  pthread_mutex_lock(&stru_531520);
  for ( i = 0; i <= 2u; ++i )
  {
    for ( j = 0; a3 > j; sub_6AB5C(a1, &v10, 1, &a2[j++], 1, 1) )
      ;
    usleep(0x61A80u);
    for ( j = 0; a5 > j; sub_6AA94(a1, &v10, 1, &a4[j++], 1, 1) )
      ;
    usleep((__useconds_t)&off_186A0);
    v11 = sub_6282C(a2, a4, a5);
    if ( !v11 )
      break;
  }
  pthread_mutex_unlock(&stru_531520);
  return v11;
}
