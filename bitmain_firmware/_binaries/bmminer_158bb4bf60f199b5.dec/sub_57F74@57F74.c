void sub_57F74()
{
  int i; // r4
  int v1; // r0
  int v2; // r5
  pthread_t v3; // r0
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    strcpy(v4, "Killing off mining threads");
    sub_47AB4(7, v4, 1);
  }
  if ( dword_245108 > 0 )
  {
    for ( i = 0; dword_245108 > i; ++i )
    {
      while ( 1 )
      {
        v1 = sub_57BAC(i);
        v2 = v1;
        if ( v1 )
        {
          if ( *(_DWORD *)(v1 + 12) )
            break;
        }
        sub_4A1F0(v1);
LABEL_8:
        if ( dword_245108 <= ++i )
          return;
      }
      sub_4A1F0(v1);
      v3 = *(_DWORD *)(v2 + 12);
      if ( !v3 )
        goto LABEL_8;
      pthread_join(v3, 0);
    }
  }
}
