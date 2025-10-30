int __fastcall sub_57214(int (__fastcall *a1)(int, bool))
{
  int v2; // r0
  int v3; // r0
  char v6[2048]; // [sp+8h] [bp-80Ch] BYREF
  int v7; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  i = 0;
  v7 = 0;
  if ( pthread_mutex_lock(&stru_5313A4) )
  {
    strcpy(v6, "failed to api lock\n");
    sub_3AF5C(0, v6, 0, (int)v6);
    return -1;
  }
  else
  {
    if ( !dword_5313E0 )
    {
      v2 = sub_56644(0x100u);
      sub_53344(v2, (int)sub_567F0);
      v3 = sub_56644(0x101u);
      sub_53344(v3, (int)sub_567F0);
      dword_5313E0 = 1;
    }
    for ( i = 0; i <= 4; ++i )
    {
      if ( !dword_5313CC[i] )
      {
        dword_5313CC[i] = a1;
        break;
      }
    }
    if ( i > 4 )
    {
      v7 = -2;
      strcpy(v6, "no more listener available\n");
      sub_3AF5C(0, v6, 0, (int)v6);
    }
    pthread_mutex_unlock(&stru_5313A4);
    return v7;
  }
}
