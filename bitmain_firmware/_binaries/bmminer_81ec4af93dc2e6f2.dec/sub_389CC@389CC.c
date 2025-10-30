int __fastcall sub_389CC(int a1, int a2, int a3)
{
  int v6; // r2
  int v7; // r9
  int v8; // r5
  unsigned int v9; // r3
  int *v10; // r1
  int v11; // r4
  int v13; // r3
  int v14; // r3
  int *v15; // [sp+1Ch] [bp-820h]
  int v16; // [sp+24h] [bp-818h]
  int v17; // [sp+28h] [bp-814h]
  int v18; // [sp+2Ch] [bp-810h]
  int v19; // [sp+30h] [bp-80Ch]
  int v20; // [sp+34h] [bp-808h]
  char s[2052]; // [sp+38h] [bp-804h] BYREF

  v16 = (unsigned __int8)a1;
  v17 = (unsigned __int8)a2;
  v18 = (unsigned __int8)a3;
  v20 = 5;
  pthread_mutex_lock(&stru_B42D4);
  while ( 2 )
  {
    v19 = 8;
    sub_3848C();
    sub_27938(v18, 0, v17, v16);
    do
    {
      sub_3D9D4(10);
      pthread_mutex_lock(&stru_B42BC);
      v6 = dword_5BE200;
      if ( dword_5BE200 )
      {
        v7 = dword_5BE200;
        v8 = 0;
        while ( 1 )
        {
          ++v8;
          dword_5BE200 = v6 - 1;
          v9 = dword_5BE1FC + 1;
          if ( (unsigned int)(dword_5BE1FC + 1) > 0x1FE )
            dword_5BE1FC = 0;
          v10 = &dword_5BE1F8[2 * v9];
          if ( v9 <= 0x1FE )
            dword_5BE1FC = v9;
          if ( *((unsigned __int8 *)v10 + 11) == a3
            && *((unsigned __int8 *)v10 + 9) == a2
            && *((unsigned __int8 *)v10 + 10) == a1 )
          {
            break;
          }
          if ( (unsigned int)off_AFC24 > 3 )
          {
            snprintf(
              s,
              0x800u,
              "read asic reg error: expect chain = %d, chip = %d, reg = %d, got chain = %d, chip = %d, reg = %d\n",
              a3,
              a2,
              a1,
              *((unsigned __int8 *)v10 + 11),
              BYTE1(dword_5BE1F8[2 * v9 + 2]),
              BYTE2(dword_5BE1F8[2 * v9 + 2]));
            sub_3AF5C(3, s, 0, v13);
            if ( v7 == v8 )
              goto LABEL_20;
          }
          else if ( v7 == v8 )
          {
            goto LABEL_20;
          }
          v6 = dword_5BE200;
        }
        if ( a1 == 28 )
        {
          v11 = v10[1];
          if ( (v11 & 0xE0000000) != 0 )
            v11 = 0;
          pthread_mutex_unlock(&stru_B42BC);
          sub_3848C();
          pthread_mutex_unlock(&stru_B42D4);
          return v11;
        }
        else
        {
          v15 = &dword_5BE1F8[2 * v9];
          pthread_mutex_unlock(&stru_B42BC);
          sub_3848C();
          pthread_mutex_unlock(&stru_B42D4);
          return v15[1];
        }
      }
LABEL_20:
      pthread_mutex_unlock(&stru_B42BC);
      --v19;
    }
    while ( v19 );
    if ( --v20 )
      continue;
    break;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "read asic reg timeout: expect chain = %d, chip = %d, reg = %d\n", a3, a2, a1);
    sub_3AF5C(3, s, 0, v14);
  }
  sub_3848C();
  pthread_mutex_unlock(&stru_B42D4);
  return 0;
}
