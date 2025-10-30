void sub_33C3C()
{
  char v0[2048]; // [sp+4h] [bp-810h] BYREF
  int v1; // [sp+804h] [bp-10h]
  int v2; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  if ( byte_866FC == 1 )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      strcpy(v0, "Received kill message");
      sub_1DB6C(6, v0, 1);
    }
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v0, "Killing off watchpool thread");
      sub_1DB6C(7, v0, 1);
    }
    v2 = dword_90DF0 + (dword_86E34 << 6);
    sub_33AA8(v2);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v0, "Killing off watchdog thread");
      sub_1DB6C(7, v0, 1);
    }
    v2 = dword_90DF0 + (dword_86E38 << 6);
    sub_33AA8(v2);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v0, "Shutting down mining threads");
      sub_1DB6C(7, v0, 1);
    }
    for ( i = 0; i < dword_94258; ++i )
    {
      v2 = sub_2DEEC(i);
      if ( v2 )
      {
        v1 = *(_DWORD *)(v2 + 36);
        if ( v1 )
          *(_BYTE *)(v1 + 364) = 1;
      }
    }
    sleep(1u);
    sub_2ADD8((int)sub_33AD8, 0, 3000);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v0, "Killing off API thread");
      sub_1DB6C(7, v0, 1);
    }
    v2 = dword_90DF0 + (dword_86E3C << 6);
    sub_33AA8(v2);
  }
}
