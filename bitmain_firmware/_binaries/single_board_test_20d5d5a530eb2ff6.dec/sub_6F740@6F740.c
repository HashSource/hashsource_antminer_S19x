int __fastcall sub_6F740(unsigned int a1, int a2)
{
  int v3; // r5
  int v4; // r4
  int v5; // r4
  int v7; // r0
  int v8; // [sp+Ch] [bp-808h] BYREF
  _DWORD v9[513]; // [sp+10h] [bp-804h] BYREF

  v3 = sub_6F620(a1);
  if ( v3 )
  {
    if ( pthread_mutex_lock(&stru_65E2CC) )
    {
      strcpy((char *)v9, "failed to api lock\n");
      nullsub_8();
      return -1;
    }
    else
    {
      if ( a2 == 1 )
      {
        sub_6F4C4(v3, dword_65E2E4);
        v5 = sub_6E854(v3, 0);
      }
      else if ( a2 )
      {
        if ( a2 == 2 )
        {
          v4 = dword_65E2E4;
          v8 = v3;
          if ( dword_65E2E4 && !sub_700FC(dword_65E2E4, &v8) )
          {
            v7 = v4;
            v9[0] = 200;
            v5 = -1;
            v9[1] = 0;
            v9[2] = 1;
            sub_700E4(v7, &v8, 4, v9, 12);
          }
          else
          {
            v5 = -1;
          }
        }
        else
        {
          v5 = -2;
          strcpy((char *)v9, "unsuported led status\n");
          nullsub_8();
        }
      }
      else
      {
        sub_6F4C4(v3, dword_65E2E4);
        v5 = sub_6E854(v3, 1);
      }
      pthread_mutex_unlock(&stru_65E2CC);
      return v5;
    }
  }
  else
  {
    strcpy((char *)v9, "unsuported gpio port\n");
    nullsub_8();
    return -1;
  }
}
