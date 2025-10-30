int __fastcall sub_73C90(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int v9; // r4
  unsigned int v10; // r4
  bool v11; // zf
  int v12; // r3
  unsigned int v13; // r4
  unsigned __int8 *v14; // r0
  unsigned int v15; // r1
  __int16 v16; // lr
  __int16 v17; // t1
  int v18; // r4
  int v20; // [sp+8h] [bp-814h]
  char v21; // [sp+17h] [bp-805h] BYREF
  char v22[2052]; // [sp+18h] [bp-804h] BYREF

  v21 = 17;
  if ( (a3 & 1) != 0 || (a5 & 1) != 0 )
  {
    strcpy(v22, "WARNING: exec_power_cmd_v2 only support even len\n");
    nullsub_8();
    return -1;
  }
  pthread_mutex_lock(&stru_65E448);
  LOBYTE(v20) = 4;
  while ( 1 )
  {
    LOBYTE(v9) = 0;
    if ( a3 )
    {
      do
      {
        v9 = (unsigned __int8)(v9 + 1);
        sub_76814(a1, &v21);
      }
      while ( a3 > v9 );
    }
    usleep((__useconds_t)&loc_7A120);
    if ( !a5 )
    {
      v18 = -2147482879;
      usleep((__useconds_t)&loc_186A0);
      goto LABEL_21;
    }
    LOBYTE(v10) = 0;
    do
    {
      v10 = (unsigned __int8)(v10 + 1);
      sub_767A0(a1, &v21);
    }
    while ( a5 > v10 );
    usleep(0x186A0u);
    v11 = a4 == 0;
    if ( a4 )
      v11 = a2 == 0;
    v12 = v11;
    if ( v11 )
    {
      v18 = -2147482879;
      goto LABEL_21;
    }
    v13 = a5 - 2;
    if ( a5 - 2 > 2 )
    {
      v14 = a4;
      v15 = 2;
      do
      {
        v16 = v14[3];
        v15 += 2;
        v17 = v14[2];
        v14 += 2;
        v12 = (unsigned __int16)(v12 + v17 + (v16 << 8));
      }
      while ( v15 < v13 );
    }
    if ( (unsigned __int16)(a4[v13] + (a4[a5 - 1] << 8)) == v12
      && *a2 == *a4
      && a2[1] == a4[1]
      && a2[3] == a4[3]
      && a5 == a4[2] + 2 )
    {
      break;
    }
    v18 = -2147482880;
LABEL_21:
    v20 = (unsigned __int8)(v20 - 1);
    if ( !v20 )
      goto LABEL_22;
  }
  v18 = 0;
LABEL_22:
  pthread_mutex_unlock(&stru_65E448);
  return v18;
}
