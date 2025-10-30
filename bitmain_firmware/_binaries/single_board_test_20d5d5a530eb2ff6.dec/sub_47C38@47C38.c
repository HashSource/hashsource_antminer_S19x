int __fastcall sub_47C38(int a1, int a2, int a3, int a4, int a5)
{
  signed int v9; // r4
  float *v10; // r0
  int v11; // r3
  int v12; // r5
  float v14; // s15
  float v15; // s12
  int v16; // [sp+14h] [bp-20Ch] BYREF
  char v17[48]; // [sp+18h] [bp-208h] BYREF
  float v18[2]; // [sp+48h] [bp-1D8h] BYREF
  float v19; // [sp+50h] [bp-1D0h]
  float v20; // [sp+54h] [bp-1CCh]
  int v21; // [sp+68h] [bp-1B8h]
  _DWORD s[93]; // [sp+ACh] [bp-174h] BYREF

  sub_479CC((int)v18, *(unsigned __int8 *)(a3 + 284));
  memset(s, 0, sizeof(s));
  sub_47A74(a2, &v16);
  if ( v16 )
  {
    if ( (*(int (__fastcall **)(int))(v16 + 156))(v16) == 1 )
    {
      sub_47B68(v16, v18, *(_DWORD *)(a3 + 64));
      v14 = (float)*(int *)(a3 + 644);
      v19 = v19 + v14;
      v20 = v20 + v14;
    }
    sub_472E4((float *)a3, v18, a4, a5, a2, s, v16 == 0);
    if ( v21 != 1 || strncmp((const char *)a3, "SWEEP", 5u) || v16 && (*(int (**)(void))(v16 + 156))() == 1 )
    {
      v9 = s[3] * s[2];
      sub_1E938(v17, 0x30u);
      printf("%s ", v17);
      printf("%s : matrix len:%d\n", "sweep_setup", v9);
      snprintf(byte_646FE4, 0x100u, "matrix len:%d", v9);
      sub_3CC5C((int)byte_646FE4, v17);
      v10 = (float *)malloc(4 * v9);
      dword_6470E4 = (int)v10;
      if ( v9 > 0 )
      {
        v11 = 0;
        *v10 = v19;
        while ( v9 != ++v11 )
        {
          *(float *)(dword_6470E4 + 4 * v11) = v19;
          if ( (unsigned int)(v11 - 19) <= 1 )
          {
            if ( v11 == 20 )
              v15 = 20.0;
            else
              v15 = 10.0;
            *(float *)(4 * v11 + dword_6470E4) = *(float *)(4 * v11 + dword_6470E4) - v15;
          }
        }
      }
      if ( v16 )
      {
        (*(void (**)(void))(v16 + 296))();
        v16 = 0;
      }
      dword_6470E8 = (int)malloc(v9);
      memset((void *)dword_6470E8, 1, v9);
      if ( s[0] > 2 )
      {
        sub_1E938(v17, 0x30u);
        printf("%s ", v17);
        printf("%s : conf chain id error:%d\n", "sweep_setup", s[0]);
        snprintf(byte_6470EC, 0x100u, "conf chain id error:%d", s[0]);
        sub_3CC5C((int)byte_6470EC, v17);
        byte_70558C = 0;
        dword_705588 = 3;
        return 3;
      }
      else
      {
        dword_6471EC = a1;
        if ( a1 == 1 )
        {
          dword_705590 = (int)sub_46FE0;
          off_705594 = (int (__fastcall *)(_DWORD, _DWORD))sub_471E0;
          off_705598 = sub_45BB0;
          off_70559C = sub_46824;
          dword_7055A4 = (int)sub_46844;
          off_7055A0 = sub_46854;
          sub_1E938(v17, 0x30u);
          printf("%s ", v17);
          printf("%s : ops init\n", "sweep_setup");
          strcpy(byte_6471F0, "ops init");
          sub_3CC5C((int)byte_6471F0, v17);
          return off_705594(s, v18);
        }
        else
        {
          sub_1E938(v17, 0x30u);
          printf("%s ", v17);
          v12 = -1;
          printf("%s : not support\n\n", "sweep_setup");
          strcpy(byte_6472F0, "not support\n");
          sub_3CCE0((int)byte_6472F0);
        }
        return v12;
      }
    }
    else
    {
      sub_1E938(v17, 0x30u);
      printf("%s ", v17);
      printf("%s : pt2 result is fail,can not start sweep\n", "sweep_setup");
      strcpy(byte_646EE4, "pt2 result is fail,can not start sweep");
      sub_3CC5C((int)byte_646EE4, v17);
      if ( v16 )
        (*(void (**)(void))(v16 + 296))();
      dword_705588 = 1;
      byte_70558C = 0;
      return 1;
    }
  }
  else
  {
    sub_1E938(v17, 0x30u);
    printf("%s ", v17);
    printf("%s : eeprom data read ERR!\n", "sweep_setup");
    strcpy(byte_646DE4, "eeprom data read ERR!");
    sub_3CC5C((int)byte_646DE4, v17);
    byte_70558C = 0;
    dword_705588 = 2;
    return 2;
  }
}
