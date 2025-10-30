int __fastcall sub_38788(int a1, int a2)
{
  int result; // r0
  int v4; // r7
  int v5; // r10
  int v6; // r1
  int v7; // r11
  int v8; // r10
  int v9; // r3
  int *v10; // r12
  int v11; // r1
  int v12; // r0
  bool v13; // zf
  int v14; // r10
  int v15; // r11
  int v16; // r3
  int v17; // r11
  unsigned int v18; // [sp+0h] [bp-80Ch]
  int v19; // [sp+0h] [bp-80Ch]
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  result = sub_266F0(a1);
  if ( !result )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "Chain %d is not exist.\n", a1);
      sub_3AF5C(3, s, 0, v16);
      return 0;
    }
    return result;
  }
  if ( !a2 )
    sub_26A7C(a1, 0);
  v4 = 0;
  pthread_mutex_lock(&stru_B42D4);
  sub_3848C();
  v5 = 0;
  sub_27938((unsigned __int8)a1, 1, 0, (unsigned __int8)a2);
LABEL_7:
  while ( 2 )
  {
    sub_3D9D4(300);
    pthread_mutex_lock(&stru_B42BC);
    v6 = dword_5BE200;
    v4 += dword_5BE200;
    v7 = dword_5BE200;
    if ( dword_5BE200 > 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        dword_5BE200 = v6 - 1;
        ++v8;
        v9 = dword_5BE1FC + 1;
        v10 = &dword_5BE1F8[2 * dword_5BE1FC + 2];
        if ( (unsigned int)(dword_5BE1FC + 1) > 0x1FE )
          v9 = 0;
        v11 = *((unsigned __int8 *)v10 + 10);
        v12 = *((unsigned __int8 *)v10 + 11);
        dword_5BE1FC = v9;
        v13 = v12 == a1;
        if ( v12 == a1 )
          v13 = v11 == 0;
        if ( v13 && (v18 = v10[1], sub_26560() == HIWORD(v18)) )
        {
          sub_26A08(a1);
          if ( v7 == v8 )
          {
LABEL_19:
            v14 = sub_26540();
            if ( v4 > 5 * sub_266E0() * v14 )
              goto LABEL_20;
            v5 = 0;
            pthread_mutex_unlock(&stru_B42BC);
            goto LABEL_7;
          }
        }
        else if ( v7 == v8 )
        {
          goto LABEL_19;
        }
        v6 = dword_5BE200;
      }
    }
    v19 = dword_5BE200;
    v15 = sub_26540();
    if ( v4 > 5 * sub_266E0() * v15 )
      goto LABEL_20;
    if ( v19 )
    {
      if ( a2 || (v17 = sub_26540(), v17 != sub_26AEC(a1)) )
      {
        pthread_mutex_unlock(&stru_B42BC);
        continue;
      }
LABEL_20:
      pthread_mutex_unlock(&stru_B42BC);
    }
    else
    {
      ++v5;
      sub_3D9D4(100);
      pthread_mutex_unlock(&stru_B42BC);
      if ( v5 != 4 )
        continue;
    }
    break;
  }
  pthread_mutex_unlock(&stru_B42D4);
  return 1;
}
