int __fastcall sub_61420(unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 *v9; // [sp+81Ch] [bp-10h]
  int v10; // [sp+820h] [bp-Ch]
  unsigned __int8 i; // [sp+826h] [bp-6h]
  unsigned __int8 j; // [sp+827h] [bp-5h]
  unsigned __int8 k; // [sp+827h] [bp-5h]

  v10 = 0;
  pthread_mutex_lock(&stru_536330);
  for ( i = 0; i <= 2u; ++i )
  {
    for ( j = 0; j < a2; sub_6E668(16, 0, 1, 17, a1[j++]) )
      ;
    usleep(0x61A80u);
    v9 = a3;
    for ( k = 0; k < a4; ++k )
      *v9++ = sub_6E668(16, 1, 0, 17, 0);
    usleep(0x186A0u);
    v10 = sub_61024(a1, a3, a4);
    if ( !v10 )
      break;
  }
  pthread_mutex_unlock(&stru_536330);
  return v10;
}
