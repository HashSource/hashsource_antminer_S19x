int __fastcall sub_2EC38(int a1, int a2, int a3)
{
  int v6; // r11
  int v7; // r10
  int v8; // r2
  int v9; // r7
  int v10; // r5
  int v11; // r1
  unsigned int v12; // r3
  int *v13; // r1
  int v15; // r4
  int v16; // [sp+18h] [bp-814h]
  int *v17; // [sp+18h] [bp-814h]
  int v18; // [sp+1Ch] [bp-810h]
  int v19; // [sp+20h] [bp-80Ch]
  int v20; // [sp+24h] [bp-808h]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v16 = (unsigned __int8)a3;
  v18 = (unsigned __int8)a2;
  v6 = ((_BYTE)a1 + 76) & 0xFB;
  v19 = (unsigned __int8)a1;
  v20 = 5;
LABEL_2:
  sub_2E9B8();
  v7 = 8;
  sub_1AD6C(v16, 0, v18, v19);
  while ( 1 )
  {
    sub_4A804(10);
    pthread_mutex_lock(&stru_138630);
    v8 = dword_241D70;
    if ( dword_241D70 )
      break;
LABEL_19:
    pthread_mutex_unlock(&stru_138630);
    if ( !--v7 )
    {
      if ( !--v20 )
      {
        if ( (unsigned int)dword_9E31C > 4 )
        {
          snprintf(s, 0x800u, "read asic reg timeout: expect chain = %d, chip = %d, reg = %d\n", a3, a2, a1);
          sub_47AB4(4, s, 0);
        }
        sub_2E9B8();
        return 0;
      }
      goto LABEL_2;
    }
  }
  v9 = dword_241D70;
  v10 = 0;
  while ( 1 )
  {
    v11 = 510;
    dword_241D70 = v8 - 1;
    v12 = dword_241D6C + 1;
    if ( (unsigned int)(dword_241D6C + 1) <= 0x1FE )
      ++dword_241D6C;
    else
      v11 = 0;
    if ( v12 > 0x1FE )
      dword_241D6C = v11;
    v13 = &dword_241D68[2 * v12];
    if ( *((unsigned __int8 *)v13 + 11) == a3
      && *((unsigned __int8 *)v13 + 9) == a2
      && *((unsigned __int8 *)v13 + 10) == a1 )
    {
      break;
    }
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_9;
    ++v10;
    snprintf(
      s,
      0x800u,
      "read asic reg error: expect chain = %d, chip = %d, reg = %d, got chain = %d, chip = %d, reg = %d\n",
      a3,
      a2,
      a1,
      *((unsigned __int8 *)v13 + 11),
      BYTE1(dword_241D68[2 * v12 + 2]),
      BYTE2(dword_241D68[2 * v12 + 2]));
    sub_47AB4(3, s, 0);
    if ( v9 == v10 )
      goto LABEL_19;
LABEL_10:
    v8 = dword_241D70;
  }
  if ( a1 != 28 )
  {
    if ( !v6 )
    {
      v17 = &dword_241D68[2 * v12];
      pthread_mutex_unlock(&stru_138630);
      sub_2E9B8();
      return v17[1];
    }
LABEL_9:
    if ( v9 == ++v10 )
      goto LABEL_19;
    goto LABEL_10;
  }
  v15 = v13[1];
  if ( (v15 & 0xE0000000) != 0 )
    v15 = 0;
  pthread_mutex_unlock(&stru_138630);
  sub_2E9B8();
  return v15;
}
