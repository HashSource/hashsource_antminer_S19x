int __fastcall sub_4B484(int result)
{
  char *v1; // r5
  int v2; // r8
  int v3; // r4
  pthread_t *v4; // r6
  char *v5; // r5
  int v6; // r4
  _DWORD v7[4]; // [sp+0h] [bp-814h] BYREF
  char v8[2052]; // [sp+10h] [bp-804h] BYREF

  if ( dword_535D94 && *(_DWORD *)(dword_535D94 + 4) )
  {
    v1 = v8;
    v2 = result;
    v3 = 0;
    v4 = v7;
    memset(v8, 0, 48);
    memset(v7, 0, sizeof(v7));
    do
    {
      if ( sub_26C0C(v3) && *(_DWORD *)(dword_535D94 + 4 * (v3 + 2)) == 1 )
      {
        *(_DWORD *)v1 = v3;
        *((_DWORD *)v1 + 1) = 0;
        *((_DWORD *)v1 + 2) = v2;
        pthread_create(v4, 0, (void *(*)(void *))sub_4B2C8, v1);
        pthread_detach(*v4);
      }
      ++v3;
      v1 += 12;
      ++v4;
    }
    while ( v3 != 4 );
    while ( 1 )
    {
      v5 = v8;
      v6 = 0;
      while ( 1 )
      {
        result = sub_26C0C(v6);
        if ( result )
        {
          if ( v7[v6] && !*((_DWORD *)v5 + 1) )
            break;
        }
        ++v6;
        v5 += 12;
        if ( v6 == 4 )
          return result;
      }
      usleep(0x186A0u);
    }
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v8, "Handle is NULL.\n");
    return sub_3B6AC(3, v8, 0, *(int *)"LL.\n");
  }
  return result;
}
