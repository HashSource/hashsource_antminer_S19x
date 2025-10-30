char *__fastcall sub_3702C(char *result)
{
  char *v1; // r9
  int v2; // r4
  _DWORD *v3; // r5
  int v4; // r2
  void *v5; // r3
  pthread_t v6; // r0
  int i; // r3
  pthread_t v8[16]; // [sp+0h] [bp-840h] BYREF
  _DWORD s[512]; // [sp+40h] [bp-800h] BYREF
  char vars0; // [sp+840h] [bp+0h] BYREF

  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
  {
    v1 = result;
    memset(v8, 0, sizeof(v8));
    v2 = 0;
    v3 = s;
    memset(s, 0, 0xC0u);
    v4 = dword_A0D68;
    do
    {
      while ( *(_DWORD *)(v4 + 4 * v2 + 4) != 1 || *(_DWORD *)(dword_1AEA78 + 4 * (v2 + 2)) != 1 )
      {
        ++v2;
        v3 += 3;
        if ( v2 == 16 )
          goto LABEL_8;
      }
      v5 = v3;
      *v3 = v2;
      v3[1] = 0;
      v3 += 3;
      *(v3 - 1) = v1;
      pthread_create(&v8[v2], 0, (void *(*)(void *))sub_36E78, v5);
      v6 = v8[v2++];
      pthread_detach(v6);
      v4 = dword_A0D68;
    }
    while ( v2 != 16 );
LABEL_8:
    for ( i = 0; i != 16; ++i )
    {
LABEL_9:
      while ( 1 )
      {
        result = *(char **)(v4 + 4 * i + 4);
        if ( result != (char *)1 )
          break;
        result = &vars0;
        if ( !v8[i] || s[3 * i + 1] )
          break;
        while ( 1 )
        {
          usleep((__useconds_t)&loc_186A0);
          v4 = dword_A0D68;
          i = *(_DWORD *)(dword_A0D68 + 4);
          if ( i != 1 )
            break;
          if ( !v8[0] || s[1] )
            goto LABEL_9;
        }
        i = 1;
      }
    }
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy((char *)s, "Handle is NULL.\n");
    return (char *)sub_47AB4(3, s, 0);
  }
  return result;
}
