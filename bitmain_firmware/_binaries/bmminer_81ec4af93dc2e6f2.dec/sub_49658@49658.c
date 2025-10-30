int __fastcall sub_49658(int result)
{
  char *v1; // r6
  int v2; // r8
  int v3; // r4
  int i; // r4
  _DWORD v5[4]; // [sp+0h] [bp-814h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( dword_530F08 && *(_DWORD *)(dword_530F08 + 4) )
  {
    v1 = s;
    v2 = result;
    v3 = 0;
    memset(v5, 0, sizeof(v5));
    memset(s, 0, 0x30u);
    do
    {
      if ( sub_266F0(v3) && *(_DWORD *)(dword_530F08 + 4 * (v3 + 2)) == 1 )
      {
        *(_DWORD *)v1 = v3;
        *((_DWORD *)v1 + 1) = 0;
        *((_DWORD *)v1 + 2) = v2;
        pthread_create(&v5[v3], 0, (void *(*)(void *))sub_494A4, v1);
        pthread_detach(v5[v3]);
      }
      ++v3;
      v1 += 12;
    }
    while ( v3 != 4 );
    for ( i = 0; i != 4; ++i )
    {
      while ( 1 )
      {
        result = sub_266F0(i);
        if ( !result || !v5[i] || *(_DWORD *)&s[12 * i + 4] )
          break;
        i = 0;
        usleep((__useconds_t)&off_186A0);
      }
    }
  }
  else if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "Handle is NULL.\n");
    return sub_3AF5C(3, s, 0, *(int *)"LL.\n");
  }
  return result;
}
