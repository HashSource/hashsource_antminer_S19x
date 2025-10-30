int __fastcall sub_56D7C(unsigned int a1, int a2)
{
  char v5[2048]; // [sp+8h] [bp-80Ch] BYREF
  int v6; // [sp+808h] [bp-Ch]
  int v7; // [sp+80Ch] [bp-8h]

  v7 = -1;
  v6 = sub_56644(a1);
  if ( v6 )
  {
    if ( pthread_mutex_lock(&stru_5313A4) )
    {
      strcpy(v5, "failed to api lock\n");
      sub_3AF5C(0, v5, 0, (int)v5);
      return -1;
    }
    else
    {
      if ( a2 == 1 )
      {
        sub_56B5C(v6, dword_5313BC);
        v7 = sub_53F6C(v6, 0);
      }
      else if ( a2 )
      {
        if ( a2 == 2 )
        {
          sub_56BD8(v6, 200, dword_5313BC);
        }
        else
        {
          strcpy(v5, "unsuported led status\n");
          sub_3AF5C(0, v5, 0, (int)v5);
          v7 = -2;
        }
      }
      else
      {
        sub_56B5C(v6, dword_5313BC);
        v7 = sub_53F6C(v6, 1);
      }
      pthread_mutex_unlock(&stru_5313A4);
      return v7;
    }
  }
  else
  {
    strcpy(v5, "unsuported gpio port\n");
    sub_3AF5C(0, v5, 0, (int)v5);
    return -1;
  }
}
