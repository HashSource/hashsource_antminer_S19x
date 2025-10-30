int __fastcall sub_615B0(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  char v10; // [sp+1Fh] [bp-Dh] BYREF
  int v11; // [sp+20h] [bp-Ch]
  unsigned __int8 i; // [sp+26h] [bp-6h]
  unsigned __int8 j; // [sp+27h] [bp-5h]

  j = 0;
  v11 = 0;
  v10 = 0;
  pthread_mutex_lock(&stru_536330);
  for ( i = 0; i <= 2u; ++i )
  {
    for ( j = 0; j < a3; sub_6F30C(a1, (int)&v10, 1, (int)&a2[j++], 1u) )
      ;
    usleep(0x61A80u);
    for ( j = 0; j < a5; sub_6F188(a1, &v10, 1, &a4[j++], 1, 1) )
      ;
    usleep(0x186A0u);
    v11 = sub_61024(a2, a4, a5);
    if ( !v11 )
      break;
  }
  pthread_mutex_unlock(&stru_536330);
  return v11;
}
