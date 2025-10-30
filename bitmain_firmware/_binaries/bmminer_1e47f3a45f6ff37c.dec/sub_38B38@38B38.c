int __fastcall sub_38B38(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // r5
  int v6; // r6
  int v7; // r8
  int v8; // r5
  int v9; // r2
  int *v10; // r6
  int v11; // r11
  int v12; // r6
  int v13; // r4
  int v14; // r5
  int v15; // r3
  int v16; // r7
  int v17; // [sp+4h] [bp-820h]
  int v18; // [sp+4h] [bp-820h]
  int v19; // [sp+8h] [bp-81Ch]
  int v20; // [sp+Ch] [bp-818h]
  int v22; // [sp+14h] [bp-810h]
  int v24; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  result = sub_26C0C(a1);
  if ( result )
  {
    pthread_mutex_lock(&stru_B7050);
    sub_38AC8();
    sub_27E80((unsigned __int8)a1, 1, 0, (unsigned __int8)a2);
    v5 = 0;
    v24 = 0;
    v20 = 0;
    v22 = a1;
    while ( 2 )
    {
      while ( 1 )
      {
        sub_3E0F0(30);
        pthread_mutex_lock(&stru_B7038);
        v6 = dword_5C30B8;
        v7 = dword_5C30B8;
        v20 += dword_5C30B8;
        if ( dword_5C30B8 > 0 )
          break;
        v16 = sub_26A44();
        if ( v20 > 5 * sub_26BFC() * v16 )
        {
          v13 = 0;
          pthread_mutex_unlock(&stru_B7038);
          goto LABEL_20;
        }
        if ( !v6 )
        {
          ++v5;
          sub_3E0F0(30);
        }
        pthread_mutex_unlock(&stru_B7038);
        if ( v5 > 59 )
        {
          v13 = 0;
          goto LABEL_20;
        }
      }
      v8 = 0;
      while ( 1 )
      {
        dword_5C30B8 = v6 - 1;
        v9 = dword_5C30B4 + 1;
        ++v8;
        v10 = &dword_5C30B0[2 * dword_5C30B4 + 2];
        if ( (unsigned int)(dword_5C30B4 + 1) > 0x1FE )
          v9 = 0;
        dword_5C30B4 = v9;
        v11 = *((unsigned __int8 *)v10 + 10);
        if ( *((unsigned __int8 *)v10 + 11) == v22 )
        {
          v19 = v10[1];
          v17 = *((unsigned __int8 *)v10 + 9);
          sub_26AB4();
          v18 = sub_8F800(v17);
          if ( v18 < sub_26A44() && v11 == a2 )
          {
            v12 = *((unsigned __int8 *)v10 + 9);
            ++v24;
            sub_26AB4();
            *(_DWORD *)(a3 + 4 * sub_8F800(v12)) = v19;
            if ( sub_26A44() == v24 )
            {
              v13 = 1;
              goto LABEL_19;
            }
          }
        }
        if ( v7 == v8 )
          break;
        v6 = dword_5C30B8;
      }
      v14 = sub_26A44();
      if ( v20 <= 5 * sub_26BFC() * v14 )
      {
        v5 = 0;
        pthread_mutex_unlock(&stru_B7038);
        continue;
      }
      break;
    }
    v13 = 0;
LABEL_19:
    pthread_mutex_unlock(&stru_B7038);
LABEL_20:
    pthread_mutex_unlock(&stru_B7050);
    return v13;
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "Chain %d is not exist.\n", a1);
    sub_3B6AC(3, s, 0, v15);
    return 0;
  }
  return result;
}
