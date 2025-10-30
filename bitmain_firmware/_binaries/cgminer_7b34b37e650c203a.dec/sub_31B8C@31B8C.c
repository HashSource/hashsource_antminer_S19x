bool sub_31B8C()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 5 )
  {
    if ( !byte_68BD5 )
      goto LABEL_7;
    goto LABEL_28;
  }
  strcpy(v5, "Received kill message");
  sub_20F58(6, v5, 1);
  if ( byte_68BD5 )
  {
    if ( byte_74500 || byte_68BD4 )
    {
LABEL_6:
      strcpy(v5, "Killing off watchpool thread");
      sub_20F58(7, v5, 1);
      goto LABEL_7;
    }
LABEL_28:
    if ( dword_67DB4 <= 6 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_7:
  sub_2541C((int)sub_23588, dword_75598 + (dword_69058 << 6), 1000);
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    strcpy(v5, "Killing off watchdog thread");
    sub_20F58(7, v5, 1);
  }
  sub_2541C((int)sub_23588, dword_75598 + (dword_6905C << 6), 1000);
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    strcpy(v5, "Shutting down mining threads");
    sub_20F58(7, v5, 1);
  }
  if ( dword_75588 > 0 )
  {
    v0 = 0;
    do
    {
      v1 = v0++;
      v2 = sub_31B04(v1);
      if ( v2 )
      {
        v3 = *(_DWORD *)(v2 + 36);
        if ( v3 )
          *(_BYTE *)(v3 + 364) = 1;
      }
    }
    while ( v0 < dword_75588 );
  }
  sleep(1u);
  sub_2541C((int)sub_31EE4, 0, 3000);
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    strcpy(v5, "Killing off API thread");
    sub_20F58(7, v5, 1);
  }
  return sub_2541C((int)sub_23588, dword_75598 + (dword_68FCC << 6), 1000);
}
