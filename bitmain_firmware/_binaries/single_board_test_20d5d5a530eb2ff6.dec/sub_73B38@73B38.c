int __fastcall sub_73B38(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int v9; // r4
  unsigned int v10; // r4
  bool v11; // zf
  int v12; // r3
  unsigned __int8 *v13; // r1
  __int16 v14; // t1
  int v15; // r4
  int v17; // [sp+8h] [bp-14h]
  _BYTE v18[5]; // [sp+17h] [bp-5h] BYREF

  v18[0] = 0;
  LOBYTE(v17) = 3;
  pthread_mutex_lock(&stru_65E448);
  while ( 1 )
  {
    LOBYTE(v9) = 0;
    if ( a3 )
    {
      do
      {
        v9 = (unsigned __int8)(v9 + 1);
        sub_76814(a1, v18);
      }
      while ( v9 < a3 );
    }
    usleep((__useconds_t)&loc_61A80);
    if ( !a5 )
    {
      v15 = -2147482879;
      usleep((__useconds_t)&loc_186A0);
      goto LABEL_18;
    }
    LOBYTE(v10) = 0;
    do
    {
      v10 = (unsigned __int8)(v10 + 1);
      sub_767A0(a1, v18);
    }
    while ( v10 < a5 );
    usleep(0x186A0u);
    v11 = a4 == 0;
    if ( a4 )
      v11 = a2 == 0;
    v12 = v11;
    if ( v11 )
    {
      v15 = -2147482879;
      goto LABEL_18;
    }
    if ( a5 - 2 > 2 )
    {
      v13 = a4 + 1;
      do
      {
        v14 = *++v13;
        v12 = (unsigned __int16)(v12 + v14);
      }
      while ( &a4[a5 - 3] != v13 );
    }
    if ( (unsigned __int16)(a4[a5 - 2] + (a4[a5 - 1] << 8)) == v12
      && *a2 == *a4
      && a2[1] == a4[1]
      && a2[3] == a4[3]
      && a5 == a4[2] + 2 )
    {
      break;
    }
    v15 = -2147482880;
LABEL_18:
    v17 = (unsigned __int8)(v17 - 1);
    if ( !v17 )
      goto LABEL_19;
  }
  v15 = 0;
LABEL_19:
  pthread_mutex_unlock(&stru_65E448);
  return v15;
}
