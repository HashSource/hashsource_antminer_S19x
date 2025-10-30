int __fastcall sub_39278(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r2
  int v9; // r6
  int v10; // r5
  int v11; // r3
  int *v12; // r8
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r1
  int v17; // r3
  int v18; // r0
  int v19; // r3
  int v20; // [sp+8h] [bp-82Ch]
  int v21; // [sp+8h] [bp-82Ch]
  int v22; // [sp+8h] [bp-82Ch]
  int v23; // [sp+8h] [bp-82Ch]
  int v26; // [sp+14h] [bp-820h]
  int v27; // [sp+18h] [bp-81Ch]
  _BYTE v28[8]; // [sp+20h] [bp-814h] BYREF
  char v29[8]; // [sp+28h] [bp-80Ch] BYREF
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  if ( sub_26C0C(a3) )
  {
    pthread_mutex_lock(&stru_B7050);
    sub_18AF8();
    byte_B7068 = 1;
    sub_38AC8();
    if ( a1 == 4 )
    {
      sub_26AB4();
      sub_79C74((unsigned __int8)a3);
    }
    else
    {
      v7 = sub_26AB4();
      if ( a1 == 16 )
        sub_79C90((unsigned __int8)a3, a2 * v7, 2);
      else
        sub_7A4E4((unsigned __int8)a3, a2 * v7, (unsigned __int8)a1);
    }
    usleep((__useconds_t)&loc_186A0);
    v27 = 0;
    v26 = 0;
    do
    {
      pthread_mutex_lock(&stru_B7038);
      v8 = dword_5C30B8;
      v9 = dword_5C30B8;
      if ( dword_5C30B8 <= 0 )
      {
        v23 = dword_5C30B8;
        pthread_mutex_unlock(&stru_B7038);
        if ( !v23 )
          usleep(0x3E8u);
      }
      else
      {
        v10 = 0;
        while ( 1 )
        {
          ++v10;
          dword_5C30B8 = v8 - 1;
          v11 = dword_5C30B4 + 1;
          v12 = &dword_5C30B0[2 * dword_5C30B4 + 2];
          if ( (unsigned int)(dword_5C30B4 + 1) > 0x1FE )
            v11 = 0;
          dword_5C30B4 = v11;
          if ( *((unsigned __int8 *)v12 + 11) == a3 && *((_BYTE *)v12 + 10) == 64 )
          {
            v20 = *((unsigned __int8 *)v12 + 9);
            sub_26AB4();
            if ( sub_8F800(v20) == a2 )
            {
              v21 = *((unsigned __int16 *)v12 + 3);
              ++v27;
              v13 = sub_26A74();
              sub_8F7E4(v21, v13);
              if ( !*(_DWORD *)(a4 + 4 * v14) )
              {
                v22 = *((unsigned __int16 *)v12 + 3);
                ++v26;
                v15 = sub_26A74();
                sub_8F7E4(v22, v15);
                *(_DWORD *)(a4 + 4 * v16) = *((unsigned __int16 *)v12 + 2);
              }
            }
          }
          if ( v9 == v10 )
            break;
          v8 = dword_5C30B8;
        }
        pthread_mutex_unlock(&stru_B7038);
      }
      sub_3DFCC(v29);
    }
    while ( sub_3E190(v29, v28) <= 199 );
    if ( v26 != sub_26A74() && (unsigned int)dword_B308C > 3 )
    {
      v18 = sub_26A74();
      snprintf(s, 0x800u, "recv core response not enough!!!, total recv::%d, valid::%d, need::%d.\n", v27, v26, v18);
      sub_3B6AC(3, s, 0, v19);
    }
    byte_B7068 = 0;
    sub_18B0C();
    pthread_mutex_unlock(&stru_B7050);
    return 0;
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "chain::%d don't exist!!!\n", a3);
      sub_3B6AC(3, s, 0, v17);
    }
    return -1;
  }
}
