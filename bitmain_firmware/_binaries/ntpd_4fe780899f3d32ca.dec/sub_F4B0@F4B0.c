int __fastcall sub_F4B0(int a1, int a2, int **a3)
{
  int v6; // r6
  int *v7; // r4
  int v8; // r7
  _DWORD *v9; // r0
  int *v10; // r3
  bool v11; // zf
  int v12; // r0
  const char *v13; // r0
  unsigned int v15; // r3
  int v16; // r2
  unsigned int v17; // r3
  unsigned int v18; // r2
  int v19; // r3
  void *v20; // r0

  v6 = sub_63BA4(0, 36, 0, 1);
  *(_DWORD *)(v6 + 4) = a1;
  *(_DWORD *)(v6 + 8) = a2;
  *(_BYTE *)(v6 + 24) = 4;
  if ( !a3 )
    return v6;
  v7 = *a3;
  if ( !*a3 )
  {
    free(a3);
    return v6;
  }
  v8 = 0;
  do
  {
    while ( 1 )
    {
      v10 = (int *)*v7;
      v11 = *v7 == 0;
      *a3 = (int *)*v7;
      if ( v11 )
      {
        a3[1] = v10;
      }
      else if ( a3[1] == v7 )
      {
        a3[1] = (int *)a3;
      }
      v12 = v7[1];
      if ( v12 == 359 )
      {
        v16 = v7[4];
        if ( (unsigned int)(v16 - 3) > 0xFC )
        {
          sub_64E00(6, "minpoll: provided value (%d) is out of range [%d-%d])", v16, 3, 255);
          *(_BYTE *)(v6 + 16) = 3;
        }
        else
        {
          *(_BYTE *)(v6 + 16) = v16;
        }
        goto LABEL_19;
      }
      if ( v12 < 360 )
      {
        switch ( v12 )
        {
          case 329:
            v19 = v7[4];
            if ( v19 == -1 )
            {
              v8 = 1;
              sub_64E00(3, "key: invalid argument");
            }
            else
            {
              *(_DWORD *)(v6 + 28) = v19;
            }
            break;
          case 351:
            v18 = v7[4];
            if ( v18 > 0x11 )
            {
              sub_64E00(6, "maxpoll: provided value (%d) is out of range [0-%d])", v18, 17);
              *(_BYTE *)(v6 + 17) = 17;
            }
            else
            {
              *(_BYTE *)(v6 + 17) = v18;
            }
            break;
          case 312:
            *(_DWORD *)(v6 + 32) = v7[4];
            break;
          default:
            goto LABEL_18;
        }
        goto LABEL_19;
      }
      if ( v12 == 432 )
      {
        if ( sub_C8E0(a2) )
        {
          v8 = 1;
          sub_64E00(3, "'ttl' does not apply for refclocks");
        }
        else
        {
          v15 = v7[4];
          if ( v15 <= 7 )
            goto LABEL_35;
          sub_64E00(3, "ttl: invalid argument");
          v8 = 1;
        }
        goto LABEL_19;
      }
      if ( v12 <= 432 )
        break;
      if ( v12 == 440 )
      {
        v17 = v7[4];
        if ( v17 > 0xFE )
        {
          sub_64E00(3, "version: invalid argument");
          v8 = 1;
        }
        else
        {
          *(_BYTE *)(v6 + 24) = v17;
        }
        goto LABEL_19;
      }
      if ( v12 != 446 )
        goto LABEL_18;
      v9 = sub_EDB0(*(_DWORD **)(v6 + 12), v7);
      v7 = *a3;
      *(_DWORD *)(v6 + 12) = v9;
      if ( !v7 )
        goto LABEL_20;
    }
    if ( v12 != 361 )
    {
LABEL_18:
      v13 = (const char *)sub_1BBB4();
      v8 = 1;
      sub_64E00(3, "Unknown peer/server option token %s", v13);
      goto LABEL_19;
    }
    if ( sub_C8E0(a2) )
    {
      v15 = v7[4];
LABEL_35:
      *(_DWORD *)(v6 + 20) = v15;
      goto LABEL_19;
    }
    sub_64E00(3, "'mode' does not apply for network peers");
    v8 = 1;
LABEL_19:
    free(v7);
    v7 = *a3;
  }
  while ( *a3 );
LABEL_20:
  free(a3);
  if ( v8 )
  {
    v20 = (void *)v6;
    v6 = (int)v7;
    free(v20);
  }
  return v6;
}
