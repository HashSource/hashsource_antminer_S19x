int __fastcall sub_73660(int a1)
{
  int v2; // r5
  int v3; // r0
  char v5[2052]; // [sp+0h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_1B14B4) )
  {
    v2 = -4;
    strcpy(v5, "failed to iic lock\n");
    sub_47AB4(0, v5, 0);
    return v2;
  }
  if ( a1 )
  {
    v2 = sub_73B94();
    if ( v2 < 0 )
    {
      v2 = -1;
      strcpy(v5, "failed to i2c_init\n");
      sub_47AB4(0, v5, 0);
    }
    else
    {
      if ( sub_7467C() )
      {
        strcpy(v5, "failed to i2c_select\n");
        sub_47AB4(0, v5, 0);
        goto LABEL_6;
      }
      if ( sub_74568(v2, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      {
        strcpy(v5, "failed to i2c_ioctl\n");
        sub_47AB4(0, v5, 0);
LABEL_6:
        if ( v2 )
        {
          v3 = v2;
          v2 = -1;
          sub_73C78(v3);
        }
        else
        {
          v2 = -1;
        }
      }
    }
  }
  else
  {
    v2 = -3;
    strcpy(v5, "bad param\n");
    sub_47AB4(0, v5, 0);
  }
  pthread_mutex_unlock(&stru_1B14B4);
  return v2;
}
