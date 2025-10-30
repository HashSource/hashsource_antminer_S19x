int __fastcall sub_576AC(char a1, int a2, int a3)
{
  char v8[2048]; // [sp+14h] [bp-808h] BYREF
  int v9; // [sp+814h] [bp-8h]

  v9 = -1;
  if ( pthread_mutex_lock(&stru_5313A4) )
  {
    strcpy(v8, "failed to api lock\n");
    sub_3AF5C(0, v8, 0, (int)v8);
    return -4;
  }
  else
  {
    if ( dword_B097C < 0 )
    {
      dword_B097C = sub_578D0(off_B0980);
      sub_57C1C(dword_B097C);
    }
    if ( dword_B097C <= 0 )
    {
      snprintf(v8, 0x800u, "failed to init %s\n", off_B0980);
      sub_3AF5C(0, v8, 0, (int)v8);
      v9 = -1;
    }
    else
    {
      v9 = sub_579F4(dword_B097C, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_5313A4);
    return v9;
  }
}
