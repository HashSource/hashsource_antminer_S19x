int __fastcall sub_61AEC(unsigned __int8 a1, int *a2, int a3)
{
  char v8[4]; // [sp+18h] [bp-824h] BYREF
  unsigned __int8 v9[8]; // [sp+818h] [bp-24h] BYREF
  unsigned __int8 v10[4]; // [sp+820h] [bp-1Ch] BYREF
  _DWORD v11[2]; // [sp+824h] [bp-18h]
  int v12; // [sp+82Ch] [bp-10h]
  int i; // [sp+830h] [bp-Ch]
  int v14; // [sp+834h] [bp-8h]

  v14 = -2147483136;
  i = 0;
  v12 = 3;
  if ( a1 <= 0xFu )
  {
    if ( dword_9C8A88[2 * a1 + 1] || (v14 = sub_5E4DC(a1), v14 >= 0) )
    {
      if ( a3 == 3 )
      {
        pthread_mutex_lock(&stru_531508);
        *(_DWORD *)v10 = 0;
        v11[0] = 0;
        *(_DWORD *)((char *)v11 + 3) = 0;
        v14 = sub_5FA00(dword_9C8A88[2 * a1], v10, 11);
        if ( v14 == 11 )
        {
          for ( i = 0; i < 3; ++i )
          {
            a2[i] = (v10[v12] << 8) | v10[v12 + 1];
            v12 += 2;
          }
        }
        pthread_mutex_unlock(&stru_531508);
      }
      else if ( a3 == 1 )
      {
        pthread_mutex_lock(&stru_531508);
        memset(v9, 0, 7);
        v14 = sub_5FD54(dword_9C8A88[2 * a1], v9, 7);
        if ( v14 == 7 )
        {
          *a2 = (v9[v12] << 8) | v9[v12 + 1];
          v12 += 2;
        }
        pthread_mutex_unlock(&stru_531508);
      }
      else
      {
        snprintf(v8, 0x800u, "%s failed: parameters error!\n", "pic_get_voltage");
        sub_3AF5C(0, v8, 0, (int)v8);
        return -2147483135;
      }
      return v14;
    }
    else
    {
      snprintf(v8, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_get_voltage", a1);
      sub_3AF5C(0, v8, 0, (int)v8);
      return v14;
    }
  }
  else
  {
    snprintf(v8, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_get_voltage", a1);
    sub_3AF5C(0, v8, 0, (int)v8);
    return -2147483135;
  }
}
