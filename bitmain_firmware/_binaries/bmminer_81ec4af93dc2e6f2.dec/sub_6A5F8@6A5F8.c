int __fastcall sub_6A5F8(int a1)
{
  char v4[2048]; // [sp+8h] [bp-80Ch] BYREF
  int v5; // [sp+808h] [bp-Ch]
  int v6; // [sp+80Ch] [bp-8h]

  v6 = -1;
  v5 = 0;
  if ( pthread_mutex_lock(&stru_531AEC) )
  {
    strcpy(v4, "failed to iic lock\n");
    sub_3AF5C(0, v4, 0, (int)v4);
    return -4;
  }
  else
  {
    if ( a1 )
    {
      v5 = sub_6AC5C(0);
      if ( v5 >= 0 )
      {
        if ( sub_6BEC8(v5, *(unsigned __int16 *)(a1 + 4)) )
        {
          strcpy(v4, "failed to i2c_select\n");
          sub_3AF5C(0, v4, 0, (int)v4);
          v6 = -1;
        }
        else
        {
          if ( !sub_6BD28(v5, 1795, (16 * *(unsigned __int8 *)(a1 + 6)) | (2 * *(unsigned __int8 *)(a1 + 7))) )
          {
            pthread_mutex_unlock(&stru_531AEC);
            return v5;
          }
          strcpy(v4, "failed to i2c_ioctl\n");
          sub_3AF5C(0, v4, 0, (int)v4);
          v6 = -1;
        }
      }
      else
      {
        strcpy(v4, "failed to i2c_init\n");
        sub_3AF5C(0, v4, 0, (int)v4);
        v6 = -1;
      }
    }
    else
    {
      strcpy(v4, "bad param\n");
      sub_3AF5C(0, v4, 0, (int)v4);
      v6 = -3;
    }
    if ( v5 > 0 )
      sub_6AD98(v5);
    pthread_mutex_unlock(&stru_531AEC);
    return v6;
  }
}
