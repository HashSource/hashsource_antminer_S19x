int __fastcall sub_7B2F0(const char *a1, int a2, FILE **a3)
{
  const char *i; // r3
  const char *v6; // r4
  char *v7; // r10
  int v8; // t1
  int v9; // r0
  int v10; // r11
  int v11; // r0
  int v12; // r1
  char *v13; // r11
  char *v14; // r0
  int v15; // r4
  FILE *v17; // r0
  int *v18; // r0
  unsigned int v19; // [sp+10h] [bp-Ch] BYREF

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 268, 0, "templet != ((void *)0)");
  if ( !a3 || *a3 )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 269, 0, "fp != ((void *)0) && *fp == ((void *)0)");
  if ( !*a1 )
    return 25;
  for ( i = a1; ; ++i )
  {
    v6 = i + 1;
    if ( !i[1] )
      break;
  }
  if ( a1 == v6 )
    return 25;
  if ( a1 <= i && *i == 88 )
  {
    v7 = (char *)i;
    do
    {
      v6 = v7;
      sub_7C1B4(&v19);
      *v7 = aAbcdefghijklmn[v19 % 0x3E];
      if ( a1 == v7 )
        break;
      v8 = (unsigned __int8)*--v7;
    }
    while ( v8 == 88 );
  }
  while ( 1 )
  {
    v9 = open64(a1, 194);
    v10 = v9;
    if ( v9 != -1 )
      break;
    v11 = *_errno_location();
    if ( v11 != 17 )
      return sub_7A990(v11, "./../lib/isc/unix/file.c", 287);
    v12 = *(unsigned __int8 *)v6;
    if ( !*v6 )
      return 25;
    v13 = (char *)v6;
    while ( 1 )
    {
      v14 = strchr(aAbcdefghijklmn, v12);
      if ( v14 )
      {
        if ( v14[1] )
          break;
      }
      *v13++ = aAbcdefghijklmn[0];
      v12 = (unsigned __int8)*v13;
      if ( !*v13 )
        return 25;
    }
    *v13 = v14[1];
  }
  v17 = fdopen(v9, "w+");
  if ( v17 )
  {
    v15 = 0;
    *a3 = v17;
  }
  else
  {
    v18 = _errno_location();
    v15 = sub_7A990(*v18, "./../lib/isc/unix/file.c", 303);
    if ( remove(a1) < 0 )
      sub_73300(isc_lctx, (int)&off_B7DC4, (int)&off_B7DAC, -4, "remove '%s': failed", a1);
    close(v10);
  }
  return v15;
}
