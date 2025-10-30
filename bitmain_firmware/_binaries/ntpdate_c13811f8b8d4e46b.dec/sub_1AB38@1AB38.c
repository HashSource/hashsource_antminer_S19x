int __fastcall sub_1AB38(const char *a1, char *to)
{
  char *i; // r4
  char *v5; // r5
  int v6; // t1
  int v7; // r0
  int v8; // r1
  char *v9; // r4
  char *v10; // r0
  int v12; // r0
  unsigned int v13; // [sp+0h] [bp-Ch] BYREF

  if ( !a1 )
    sub_1073C();
  if ( !to )
    sub_1073C();
  if ( !*to )
    return 25;
  for ( i = to; ; ++i )
  {
    v5 = i + 1;
    if ( !i[1] )
      break;
  }
  if ( to == v5 )
    return 25;
  if ( to <= i && *i == 88 )
  {
    do
    {
      v5 = i;
      sub_1BC1C(&v13);
      *i = aAbcdefghijklmn[v13 % 0x3E];
      if ( i == to )
        break;
      v6 = (unsigned __int8)*--i;
    }
    while ( v6 == 88 );
  }
  while ( link(a1, to) == -1 )
  {
    v7 = *_errno_location();
    if ( v7 != 17 )
      return sub_1A3F8(v7, "./../lib/isc/unix/file.c", 227);
    v8 = (unsigned __int8)*v5;
    if ( !*v5 )
      return 25;
    v9 = v5;
    while ( 1 )
    {
      v10 = strchr(aAbcdefghijklmn, v8);
      if ( v10 )
      {
        if ( v10[1] )
          break;
      }
      *v9++ = aAbcdefghijklmn[0];
      v8 = (unsigned __int8)*v9;
      if ( !*v9 )
        return 25;
    }
    *v9 = v10[1];
  }
  if ( unlink(a1) >= 0 )
    return 0;
  v12 = *_errno_location();
  if ( v12 == 2 )
    return 0;
  else
    return sub_1A3F8(v12, "./../lib/isc/unix/file.c", 243);
}
