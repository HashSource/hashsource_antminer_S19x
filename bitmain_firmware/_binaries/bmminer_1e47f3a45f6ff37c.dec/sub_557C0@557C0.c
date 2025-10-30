int __fastcall sub_557C0(unsigned int a1, int a2)
{
  char v5[2048]; // [sp+8h] [bp-80Ch] BYREF
  int v6; // [sp+808h] [bp-Ch]
  int v7; // [sp+80Ch] [bp-8h]

  v7 = -1;
  v6 = sub_55088(a1);
  if ( v6 )
  {
    if ( pthread_mutex_lock(&stru_535EE0) )
    {
      strcpy(v5, "failed to api lock\n");
      sub_3B6AC(0, v5, 0, (int)v5);
      return -1;
    }
    else
    {
      if ( a2 == 1 )
      {
        sub_555BC(v6, dword_535EF8);
        v7 = sub_5763C(v6, 0);
      }
      else if ( a2 )
      {
        if ( a2 == 2 )
        {
          sub_5562C(v6, 200, dword_535EF8);
        }
        else
        {
          strcpy(v5, "unsuported led status\n");
          sub_3B6AC(0, v5, 0, (int)v5);
          v7 = -2;
        }
      }
      else
      {
        sub_555BC(v6, dword_535EF8);
        v7 = sub_5763C(v6, 1);
      }
      pthread_mutex_unlock(&stru_535EE0);
      return v7;
    }
  }
  else
  {
    strcpy(v5, "unsuported gpio port\n");
    sub_3B6AC(0, v5, 0, (int)v5);
    return -1;
  }
}
