int __fastcall sub_39018(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r2
  int v8; // r5
  int v9; // r2
  unsigned int v10; // r3
  int *v11; // r1
  int v12; // r3
  int v14; // r4
  int v15; // r3
  int v16; // [sp+1Ch] [bp-818h]
  int *v17; // [sp+1Ch] [bp-818h]
  int v18; // [sp+2Ch] [bp-808h]
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  pthread_mutex_lock(&stru_B7050);
  v18 = 5;
  while ( 2 )
  {
    sub_38AC8();
    sub_27E80((unsigned __int8)a3, 0, (unsigned __int8)a2, (unsigned __int8)a1);
    v16 = 8;
    do
    {
      sub_3E0F0(10);
      pthread_mutex_lock(&stru_B7038);
      v6 = dword_5C30B8;
      if ( dword_5C30B8 )
      {
        v7 = dword_5C30B8;
        v8 = 0;
        while ( 1 )
        {
          v9 = v7 - 1;
          v10 = dword_5C30B4 + 1;
          ++v8;
          if ( (unsigned int)(dword_5C30B4 + 1) > 0x1FE )
            dword_5C30B4 = 0;
          v11 = &dword_5C30B0[2 * v10];
          if ( v10 <= 0x1FE )
            dword_5C30B4 = v10;
          dword_5C30B8 = v9;
          if ( *((unsigned __int8 *)v11 + 11) == a3
            && *((unsigned __int8 *)v11 + 9) == a2
            && *((unsigned __int8 *)v11 + 10) == a1 )
          {
            break;
          }
          if ( (unsigned int)dword_B308C <= 3 )
          {
            if ( v8 == v6 )
              goto LABEL_14;
          }
          else
          {
            snprintf(
              s,
              0x800u,
              "read asic reg error: expect chain = %d, chip = %d, reg = %d, got chain = %d, chip = %d, reg = %d\n",
              a3,
              a2,
              a1,
              *((unsigned __int8 *)v11 + 11),
              BYTE1(dword_5C30B0[2 * v10 + 2]),
              BYTE2(dword_5C30B0[2 * v10 + 2]));
            sub_3B6AC(3, s, 0, v12);
            if ( v8 == v6 )
              goto LABEL_14;
          }
          v7 = dword_5C30B8;
        }
        if ( a1 == 28 )
        {
          v14 = v11[1];
          if ( (v14 & 0xE0000000) != 0 )
            v14 = 0;
          pthread_mutex_unlock(&stru_B7038);
          sub_38AC8();
          pthread_mutex_unlock(&stru_B7050);
          return v14;
        }
        else
        {
          v17 = &dword_5C30B0[2 * v10];
          pthread_mutex_unlock(&stru_B7038);
          sub_38AC8();
          pthread_mutex_unlock(&stru_B7050);
          return v17[1];
        }
      }
LABEL_14:
      pthread_mutex_unlock(&stru_B7038);
      --v16;
    }
    while ( v16 );
    if ( --v18 )
      continue;
    break;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "read asic reg timeout: expect chain = %d, chip = %d, reg = %d\n", a3, a2, a1);
    sub_3B6AC(3, s, 0, v15);
  }
  sub_38AC8();
  pthread_mutex_unlock(&stru_B7050);
  return 0;
}
