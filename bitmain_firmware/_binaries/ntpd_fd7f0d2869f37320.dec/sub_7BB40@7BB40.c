int __fastcall sub_7BB40(const char *a1)
{
  __pid_t v2; // r4
  size_t v3; // r0
  char *v4; // r5
  bool v5; // r3
  char v7; // r3
  int v8; // r3
  int v9; // t1
  bool v10; // zf
  int v11; // r4
  int v12; // r7
  int *v13; // r11
  int v14; // r4
  const unsigned __int16 **v15; // r0
  _BYTE *v16; // r3

  if ( !a1 )
    sub_6FC54((int)"./../lib/isc/unix/dir.c", 197, 0, "templet != ((void *)0)");
  v2 = getpid();
  v3 = strlen(a1) - 1;
  v4 = (char *)&a1[v3];
  v5 = !__CFADD__(a1, v3);
  if ( a1[v3] == 88 && v5 )
  {
    do
    {
      v7 = v2 % 10;
      v2 /= 10;
      *v4 = v7 + 48;
      v9 = (unsigned __int8)*--v4;
      v8 = v9;
      v10 = a1 == v4;
      if ( a1 <= v4 )
        v10 = v8 == 88;
    }
    while ( v10 );
  }
  do
  {
LABEL_14:
    v12 = mkdir(a1, 0x1C0u);
    if ( !v12 )
      return 0;
    v13 = _errno_location();
    if ( *v13 != 17 )
      goto LABEL_22;
    v14 = (unsigned __int8)v4[1];
    if ( !v4[1] )
      break;
    v15 = _ctype_b_loc();
    v16 = v4 + 1;
    while ( 1 )
    {
      if ( ((*v15)[v14] & 0x800) != 0 )
      {
        *v16 = 97;
        goto LABEL_14;
      }
      if ( v14 != 122 )
        break;
      *v16++ = 97;
      v14 = (unsigned __int8)*v16;
      if ( !*v16 )
        goto LABEL_21;
    }
    v11 = (unsigned __int8)(v14 + 1);
    *v16 = v11;
  }
  while ( v11 );
LABEL_21:
  *v13 = 17;
LABEL_22:
  if ( v12 != -1 )
    return 0;
  return sub_7BCF8(*v13, "./../lib/isc/unix/dir.c", 251);
}
