int __fastcall sub_38DD8(int a1, int a2)
{
  int result; // r0
  int v4; // r8
  int v5; // r5
  int v6; // r1
  int v7; // r10
  int v8; // r5
  int v9; // r3
  int *v10; // r1
  int v11; // r0
  int v12; // r3
  unsigned int v13; // r1
  bool v14; // zf
  int v15; // r5
  int v16; // r10
  int v17; // r10
  int v18; // r3
  int v19; // [sp+0h] [bp-80Ch]
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  result = sub_26C0C(a1);
  if ( result )
  {
    if ( !a2 )
      sub_26FB0(a1, 0);
    pthread_mutex_lock(&stru_B7050);
    sub_38AC8();
    v4 = 0;
    sub_27E80((unsigned __int8)a1, 1, 0, (unsigned __int8)a2);
    v5 = 0;
    do
    {
LABEL_7:
      sub_3E0F0(300);
      pthread_mutex_lock(&stru_B7038);
      v6 = dword_5C30B8;
      v4 += dword_5C30B8;
      v7 = dword_5C30B8;
      if ( dword_5C30B8 > 0 )
      {
        v8 = 0;
        while ( 1 )
        {
          dword_5C30B8 = v6 - 1;
          ++v8;
          v9 = dword_5C30B4 + 1;
          v10 = &dword_5C30B0[2 * dword_5C30B4 + 2];
          if ( (unsigned int)(dword_5C30B4 + 1) > 0x1FE )
            v9 = 0;
          dword_5C30B4 = v9;
          v11 = *((unsigned __int8 *)v10 + 11);
          v12 = *((unsigned __int8 *)v10 + 10);
          v13 = v10[1];
          v14 = a1 == v11;
          if ( a1 == v11 )
            v14 = v12 == 0;
          if ( v14 && sub_26A64() == HIWORD(v13) )
          {
            sub_26F38(a1);
            if ( v7 == v8 )
            {
LABEL_19:
              v15 = sub_26A44();
              if ( v4 <= 5 * sub_26BFC() * v15 )
              {
                v5 = 0;
                pthread_mutex_unlock(&stru_B7038);
                goto LABEL_7;
              }
LABEL_22:
              pthread_mutex_unlock(&stru_B7038);
              goto LABEL_23;
            }
          }
          else if ( v7 == v8 )
          {
            goto LABEL_19;
          }
          v6 = dword_5C30B8;
        }
      }
      v19 = dword_5C30B8;
      v17 = sub_26A44();
      if ( v4 > 5 * sub_26BFC() * v17 )
        goto LABEL_22;
      if ( v19 )
      {
        if ( !a2 )
        {
          v16 = sub_26A44();
          if ( v16 == sub_27024(a1) )
            goto LABEL_22;
        }
      }
      else
      {
        ++v5;
        sub_3E0F0(100);
      }
      pthread_mutex_unlock(&stru_B7038);
    }
    while ( v5 != 4 );
LABEL_23:
    pthread_mutex_unlock(&stru_B7050);
    return 1;
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "Chain %d is not exist.\n", a1);
    sub_3B6AC(3, s, 0, v18);
    return 0;
  }
  return result;
}
