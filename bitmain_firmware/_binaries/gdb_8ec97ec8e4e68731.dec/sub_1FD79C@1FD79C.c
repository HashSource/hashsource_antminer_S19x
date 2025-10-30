void __fastcall sub_1FD79C(char *ptr, int a2)
{
  char *v4; // r3
  _DWORD *v5; // r3
  char *v6; // r2

  if ( dword_489374 )
  {
    sub_256850("\nEnd of log\n", dword_489374);
    dword_489378 = 0;
    if ( dword_489374 )
      (*(void (__fastcall **)(int))(*(_DWORD *)dword_489374 + 4))(dword_489374);
    dword_489374 = 0;
  }
  if ( *((_DWORD *)ptr + 2060) )
  {
    *((_DWORD *)ptr + 2060) = 0;
    *((_DWORD *)ptr + 2059) = 0;
    (*(void (__fastcall **)(char *, _DWORD))(*((_DWORD *)ptr + 3) + 72))(ptr, 0);
  }
  if ( a2 )
    (*(void (__fastcall **)(char *))(*((_DWORD *)ptr + 3) + 8))(ptr);
  v4 = (char *)dword_489370;
  *((_DWORD *)ptr + 7) = 0;
  if ( v4 == ptr )
  {
    dword_489370 = *((_DWORD *)ptr + 2056);
  }
  else if ( v4 )
  {
    v5 = v4 + 0x2000;
    v6 = (char *)v5[8];
    if ( v6 == ptr )
    {
LABEL_14:
      v5[8] = *((_DWORD *)ptr + 2056);
    }
    else
    {
      while ( 1 )
      {
        v5 = v6 + 0x2000;
        if ( !v6 )
          break;
        v6 = (char *)*((_DWORD *)v6 + 2056);
        if ( v6 == ptr )
          goto LABEL_14;
      }
    }
  }
  if ( *(_DWORD *)ptr == 1 )
    free(ptr);
  else
    --*(_DWORD *)ptr;
}
