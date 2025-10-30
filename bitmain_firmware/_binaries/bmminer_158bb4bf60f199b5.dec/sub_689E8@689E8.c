int __fastcall sub_689E8(unsigned int a1, int a2)
{
  int v3; // r6
  int v4; // r4
  int v5; // r5
  int v7; // [sp+Ch] [bp-808h] BYREF
  _DWORD v8[513]; // [sp+10h] [bp-804h] BYREF

  v3 = sub_68848(a1);
  if ( v3 )
  {
    if ( pthread_mutex_lock(&stru_1B11C0) )
    {
      v5 = -1;
      strcpy((char *)v8, "failed to api lock\n");
      sub_47AB4(0, (const char *)v8, 0);
    }
    else
    {
      v4 = dword_1B11D8;
      if ( a2 == 1 )
      {
        sub_68640(v3, dword_1B11D8);
        v5 = sub_6739C(v3, 0);
      }
      else if ( a2 == 2 )
      {
        v7 = v3;
        if ( dword_1B11D8 && !sub_69F3C(dword_1B11D8, &v7) )
        {
          v8[1] = 0;
          v5 = -1;
          v8[0] = 200;
          v8[2] = 1;
          sub_69F24(v4, &v7, 4, v8, 12);
        }
        else
        {
          v5 = -1;
        }
      }
      else
      {
        sub_68640(v3, dword_1B11D8);
        v5 = sub_6739C(v3, 1);
      }
      pthread_mutex_unlock(&stru_1B11C0);
    }
  }
  else
  {
    v5 = -1;
    strcpy((char *)v8, "unsuported gpio port\n");
    sub_47AB4(0, (const char *)v8, 0);
  }
  return v5;
}
