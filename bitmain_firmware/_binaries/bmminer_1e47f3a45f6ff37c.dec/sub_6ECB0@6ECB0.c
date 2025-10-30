int __fastcall sub_6ECB0(int a1)
{
  char v4[2048]; // [sp+8h] [bp-80Ch] BYREF
  int v5; // [sp+808h] [bp-Ch]
  int v6; // [sp+80Ch] [bp-8h]

  v6 = 0;
  v5 = 0;
  if ( pthread_mutex_lock(&stru_5369C8) )
  {
    strcpy(v4, "failed to iic lock\n");
    sub_3B6AC(0, v4, 0, (int)v4);
    return -4;
  }
  else if ( a1 )
  {
    if ( *(_DWORD *)a1 || *(_WORD *)(a1 + 4) != 1 || *(_BYTE *)(a1 + 6) != 2 || *(_BYTE *)(a1 + 7) )
    {
      v5 = sub_6C8A8("/dev/i2c-0");
      if ( v5 >= 0 )
      {
        if ( sub_6D2D8(v5, 1795, (16 * *(unsigned __int8 *)(a1 + 6)) | (2 * *(unsigned __int8 *)(a1 + 7))) )
        {
          strcpy(v4, "failed to i2c_ioctl\n");
          sub_3B6AC(0, v4, 0, (int)v4);
          v6 = -1;
        }
        else
        {
          v6 = v5;
        }
      }
      else
      {
        strcpy(v4, "failed to i2c_init\n");
        sub_3B6AC(0, v4, 0, (int)v4);
        v6 = -1;
      }
    }
    else
    {
      v5 = sub_6D8B4();
      if ( v5 < 0 )
      {
        strcpy(v4, "failed to i2c_sim_init\n");
        sub_3B6AC(0, v4, 0, (int)v4);
        v6 = -1;
      }
      v6 = v5;
    }
    pthread_mutex_unlock(&stru_5369C8);
    return v6;
  }
  else
  {
    pthread_mutex_unlock(&stru_5369C8);
    strcpy(v4, "bad param\n");
    sub_3B6AC(0, v4, 0, (int)v4);
    v6 = -3;
    return -3;
  }
}
