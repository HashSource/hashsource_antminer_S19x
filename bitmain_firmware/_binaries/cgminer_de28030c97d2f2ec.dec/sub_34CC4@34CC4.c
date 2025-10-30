void sub_34CC4()
{
  char v0[2048]; // [sp+4h] [bp-810h] BYREF
  int v1; // [sp+804h] [bp-10h]
  int v2; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  if ( byte_87894 == 1 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      strcpy(v0, "Received kill message");
      sub_1E4EC(6, v0, 1);
    }
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v0, "Killing off watchpool thread");
      sub_1E4EC(7, v0, 1);
    }
    v2 = dword_91F88 + (dword_87FCC << 6);
    sub_34B38(v2);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v0, "Killing off watchdog thread");
      sub_1E4EC(7, v0, 1);
    }
    v2 = dword_91F88 + (dword_87FD0 << 6);
    sub_34B38(v2);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v0, "Shutting down mining threads");
      sub_1E4EC(7, v0, 1);
    }
    for ( i = 0; i < dword_953F0; ++i )
    {
      v2 = sub_2EEF8(i);
      if ( v2 )
      {
        v1 = *(_DWORD *)(v2 + 36);
        if ( v1 )
          *(_BYTE *)(v1 + 364) = 1;
      }
    }
    sleep(1u);
    sub_2BDCC((int)sub_34B64, 0, 3000);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v0, "Killing off API thread");
      sub_1E4EC(7, v0, 1);
    }
    v2 = dword_91F88 + (dword_87FD4 << 6);
    sub_34B38(v2);
  }
}
