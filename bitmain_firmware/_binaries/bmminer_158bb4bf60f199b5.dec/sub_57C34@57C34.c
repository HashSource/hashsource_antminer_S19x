bool sub_57C34()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r3
  char v5[2052]; // [sp+0h] [bp-804h] BYREF

  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 5 )
  {
    if ( !byte_1AECC5 )
      goto LABEL_7;
    goto LABEL_28;
  }
  strcpy(v5, "Received kill message");
  sub_47AB4(6, v5, 1);
  if ( byte_1AECC5 )
  {
    if ( byte_244080 || byte_1AECC4 )
    {
LABEL_6:
      strcpy(v5, "Killing off watchpool thread");
      sub_47AB4(7, v5, 1);
      goto LABEL_7;
    }
LABEL_28:
    if ( dword_9E320 <= 6 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_7:
  sub_4C084((int)sub_4A1F0, dword_245118, 1000);
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    strcpy(v5, "Killing off watchdog thread");
    sub_47AB4(7, v5, 1);
  }
  sub_4C084((int)sub_4A1F0, dword_245118, 1000);
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    strcpy(v5, "Shutting down mining threads");
    sub_47AB4(7, v5, 1);
  }
  if ( dword_245108 > 0 )
  {
    v0 = 0;
    do
    {
      v1 = v0++;
      v2 = sub_57BAC(v1);
      if ( v2 )
      {
        v3 = *(_DWORD *)(v2 + 36);
        if ( v3 )
          *(_BYTE *)(v3 + 364) = 1;
      }
    }
    while ( v0 < dword_245108 );
  }
  sleep(1u);
  sub_4C084((int)sub_57F74, 0, 3000);
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    strcpy(v5, "Killing off API thread");
    sub_47AB4(7, v5, 1);
  }
  return sub_4C084((int)sub_4A1F0, dword_245118, 1000);
}
