void sub_31EE4()
{
  int i; // r4
  int v1; // r0
  int v2; // r5
  pthread_t v3; // r0
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    strcpy(v4, "Killing off mining threads");
    sub_20F58(7, v4, 1);
  }
  if ( dword_75588 > 0 )
  {
    for ( i = 0; dword_75588 > i; ++i )
    {
      while ( 1 )
      {
        v1 = sub_31B04(i);
        v2 = v1;
        if ( v1 )
        {
          if ( *(_DWORD *)(v1 + 12) )
            break;
        }
        sub_23588(v1);
LABEL_8:
        if ( dword_75588 <= ++i )
          return;
      }
      sub_23588(v1);
      v3 = *(_DWORD *)(v2 + 12);
      if ( !v3 )
        goto LABEL_8;
      pthread_join(v3, 0);
    }
  }
}
