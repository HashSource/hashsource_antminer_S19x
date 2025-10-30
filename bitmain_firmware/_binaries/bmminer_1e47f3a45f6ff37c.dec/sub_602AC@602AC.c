int __fastcall sub_602AC(unsigned __int8 a1, int *a2, int a3)
{
  char v8[4]; // [sp+18h] [bp-824h] BYREF
  unsigned __int8 v9[4]; // [sp+818h] [bp-24h] BYREF
  __int16 v10; // [sp+81Ch] [bp-20h]
  char v11; // [sp+81Eh] [bp-1Eh]
  _DWORD v12[2]; // [sp+820h] [bp-1Ch] BYREF
  __int16 v13; // [sp+828h] [bp-14h]
  char v14; // [sp+82Ah] [bp-12h]
  int v15; // [sp+82Ch] [bp-10h]
  int i; // [sp+830h] [bp-Ch]
  int v17; // [sp+834h] [bp-8h]

  v17 = -2147483136;
  i = 0;
  v15 = 3;
  if ( a1 <= 0xFu )
  {
    if ( dword_9CD940[2 * a1 + 1] || (v17 = sub_5CAFC(a1), v17 >= 0) )
    {
      if ( a3 == 3 )
      {
        pthread_mutex_lock(&stru_536318);
        v12[0] = 0;
        v12[1] = 0;
        v13 = 0;
        v14 = 0;
        v17 = sub_5E080(dword_9CD940[2 * a1], (unsigned __int8 *)v12, 11);
        if ( v17 == 11 )
        {
          for ( i = 0; i < 3; ++i )
          {
            a2[i] = (*((unsigned __int8 *)v12 + v15) << 8) | *((unsigned __int8 *)v12 + v15 + 1);
            v15 += 2;
          }
        }
        pthread_mutex_unlock(&stru_536318);
      }
      else if ( a3 == 1 )
      {
        pthread_mutex_lock(&stru_536318);
        *(_DWORD *)v9 = 0;
        v10 = 0;
        v11 = 0;
        v17 = sub_5E3D8(dword_9CD940[2 * a1], v9, 7);
        if ( v17 == 7 )
        {
          *a2 = (v9[v15] << 8) | v9[v15 + 1];
          v15 += 2;
        }
        pthread_mutex_unlock(&stru_536318);
      }
      else
      {
        snprintf(v8, 0x800u, "%s failed: parameters error!\n", "pic_get_voltage");
        sub_3B6AC(0, v8, 0, (int)v8);
        return -2147483135;
      }
      return v17;
    }
    else
    {
      snprintf(v8, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_get_voltage", a1);
      sub_3B6AC(0, v8, 0, (int)v8);
      return v17;
    }
  }
  else
  {
    snprintf(v8, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_get_voltage", a1);
    sub_3B6AC(0, v8, 0, (int)v8);
    return -2147483135;
  }
}
