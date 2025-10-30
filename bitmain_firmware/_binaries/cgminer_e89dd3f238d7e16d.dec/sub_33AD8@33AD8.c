void sub_33AD8()
{
  char v0[2048]; // [sp+4h] [bp-810h] BYREF
  int v1; // [sp+804h] [bp-10h]
  pthread_t *v2; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    strcpy(v0, "Killing off mining threads");
    sub_1DB6C(7, v0, 1);
  }
  for ( i = 0; i < dword_94258; ++i )
  {
    v2 = 0;
    v1 = sub_2DEEC(i);
    if ( v1 && *(_DWORD *)(v1 + 12) )
      v2 = (pthread_t *)(v1 + 12);
    sub_21190(v1);
    if ( v2 )
    {
      if ( *v2 )
        pthread_join(*v2, 0);
    }
  }
}
