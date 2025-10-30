int __fastcall sub_384FC(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // r3
  int v6; // r5
  int v7; // r0
  int v8; // r6
  int v9; // r5
  int v10; // r3
  int *v11; // r6
  int v12; // r1
  int v13; // r7
  int v14; // r8
  int v15; // r6
  int v16; // r4
  int v17; // r5
  int v18; // r7
  int v19; // [sp+4h] [bp-820h]
  int v20; // [sp+4h] [bp-820h]
  int v21; // [sp+8h] [bp-81Ch]
  int v23; // [sp+10h] [bp-814h]
  int v24; // [sp+18h] [bp-80Ch]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  result = sub_266F0(a1);
  if ( result )
  {
    v6 = 0;
    v24 = 0;
    v23 = 0;
    pthread_mutex_lock(&stru_B42D4);
    sub_3848C();
    sub_27938((unsigned __int8)a1, 1, 0, (unsigned __int8)a2);
    while ( 2 )
    {
      while ( 1 )
      {
        sub_3D9D4(30);
        v7 = pthread_mutex_lock(&stru_B42BC);
        v8 = dword_5BE200;
        v23 += dword_5BE200;
        if ( dword_5BE200 > 0 )
          break;
        v18 = sub_26540();
        if ( 5 * sub_266E0() * v18 < v23 )
        {
          v16 = 0;
          pthread_mutex_unlock(&stru_B42BC);
          goto LABEL_22;
        }
        if ( !v8 )
        {
          ++v6;
          sub_3D9D4(30);
        }
        pthread_mutex_unlock(&stru_B42BC);
        if ( v6 == 60 )
        {
          v16 = 0;
          goto LABEL_22;
        }
      }
      v9 = 0;
      v10 = dword_5BE200;
      while ( 1 )
      {
        dword_5BE200 = v8 - 1;
        ++v9;
        v11 = &dword_5BE1F8[2 * dword_5BE1FC + 2];
        if ( (unsigned int)(dword_5BE1FC + 1) > 0x1FE )
          v7 = 0;
        v12 = *((unsigned __int8 *)v11 + 11);
        if ( (unsigned int)(dword_5BE1FC + 1) <= 0x1FE )
          v7 = dword_5BE1FC + 1;
        dword_5BE1FC = v7;
        v13 = *((unsigned __int8 *)v11 + 10);
        v14 = v11[1];
        if ( v12 == a1 )
        {
          v21 = v10;
          v19 = *((unsigned __int8 *)v11 + 9);
          sub_265B0();
          v20 = sub_8C490(v19);
          v7 = sub_26540();
          v10 = v21;
          if ( v20 < v7 && v13 == a2 )
          {
            v15 = *((unsigned __int8 *)v11 + 9);
            ++v24;
            sub_265B0();
            *(_DWORD *)(a3 + 4 * sub_8C490(v15)) = v14;
            v7 = sub_26540();
            v10 = v21;
            if ( v7 == v24 )
            {
              v16 = 1;
              goto LABEL_21;
            }
          }
        }
        if ( v10 == v9 )
          break;
        v8 = dword_5BE200;
      }
      v17 = sub_26540();
      if ( 5 * sub_266E0() * v17 >= v23 )
      {
        v6 = 0;
        pthread_mutex_unlock(&stru_B42BC);
        continue;
      }
      break;
    }
    v16 = 0;
LABEL_21:
    pthread_mutex_unlock(&stru_B42BC);
LABEL_22:
    pthread_mutex_unlock(&stru_B42D4);
    return v16;
  }
  else if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "Chain %d is not exist.\n", a1);
    sub_3AF5C(3, s, 0, v5);
    return 0;
  }
  return result;
}
