void sub_34B64()
{
  char v0[2048]; // [sp+4h] [bp-810h] BYREF
  int v1; // [sp+804h] [bp-10h]
  pthread_t *v2; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    strcpy(v0, "Killing off mining threads");
    sub_1E4EC(7, v0, 1);
  }
  for ( i = 0; i < dword_953F0; ++i )
  {
    v2 = 0;
    v1 = sub_2EEF8(i);
    if ( v1 && *(_DWORD *)(v1 + 12) )
      v2 = (pthread_t *)(v1 + 12);
    sub_21A0C(v1);
    if ( v2 )
    {
      if ( *v2 )
        pthread_join(*v2, 0);
    }
  }
}
