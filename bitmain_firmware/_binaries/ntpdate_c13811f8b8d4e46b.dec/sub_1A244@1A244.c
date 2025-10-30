int __fastcall sub_1A244(const char *a1)
{
  __pid_t v2; // r4
  size_t v3; // r0
  char *v4; // r5
  bool v5; // r3
  char v7; // r3
  int v8; // r3
  int v9; // t1
  bool v10; // zf
  int v11; // r7
  int *v12; // r11
  int v13; // r4
  const unsigned __int16 **v14; // r0
  _BYTE *v15; // r3
  int v16; // r4

  if ( !a1 )
    sub_1073C();
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
LABEL_12:
  while ( 2 )
  {
    v11 = mkdir(a1, 0x1C0u);
    if ( !v11 )
      return 0;
    v12 = _errno_location();
    if ( *v12 == 17 )
    {
      v13 = (unsigned __int8)v4[1];
      if ( v4[1] )
      {
        v14 = _ctype_b_loc();
        v15 = v4 + 1;
        while ( 1 )
        {
          if ( ((*v14)[v13] & 0x800) != 0 )
          {
            *v15 = 97;
            goto LABEL_12;
          }
          if ( v13 != 122 )
            break;
          *v15++ = 97;
          v13 = (unsigned __int8)*v15;
          if ( !*v15 )
            goto LABEL_19;
        }
        v16 = (unsigned __int8)(v13 + 1);
        *v15 = v16;
        if ( v16 )
          continue;
      }
LABEL_19:
      *v12 = 17;
    }
    break;
  }
  if ( v11 == -1 )
    return sub_1A3F8(*v12, "./../lib/isc/unix/dir.c", 251);
  else
    return 0;
}
