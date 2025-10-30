int __fastcall sub_589B4(int a1, int a2, const char *a3)
{
  int v6; // r8
  const char *i; // r0
  unsigned int v8; // r3
  bool v9; // cc
  char *v10; // r0
  char *v11; // r4
  size_t v12; // r0
  int *v14; // r4
  unsigned int v15; // r0
  __int64 v16; // r2
  int v17; // r1
  unsigned int v18; // r2
  char *endptr[2]; // [sp+10h] [bp-1Ch] BYREF
  char v20; // [sp+18h] [bp-14h] BYREF

  v6 = 0;
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
LABEL_2:
  for ( i = a3; ; i = v11 + 1 )
  {
    v10 = strchr(i, 36);
    v11 = v10;
    if ( !v10 )
      break;
    if ( !strncmp(v10, "$arg", 4u) )
    {
      v8 = (unsigned __int8)v11[4];
      v9 = v8 > 0x63;
      if ( v8 != 99 )
        v9 = v8 - 48 > 9;
      if ( !v9 )
      {
        if ( 0x7FFFFFFF - v6 < (unsigned int)(v11 - a3) )
          sub_33D184("basic_string::append");
        sub_33C320(a1, a3, v11 - a3);
        if ( v11[4] == 99 )
        {
          sub_59640(endptr, vsnprintf, 16, "%u", (*(_DWORD *)(a2 + 28) - *(_DWORD *)(a2 + 24)) >> 3);
          sub_33C320(a1, endptr[0], endptr[1]);
          if ( endptr[0] != &v20 )
            sub_339E64(endptr[0]);
          a3 = v11 + 5;
        }
        else
        {
          a3 = v11 + 4;
          v14 = _errno_location();
          *v14 = 0;
          v15 = strtoul(a3, endptr, 10);
          if ( (v15 || a3 != endptr[0]) && !*v14 )
          {
            v16 = *(_QWORD *)(a2 + 24);
            if ( v15 >= (HIDWORD(v16) - (int)v16) >> 3 )
              sub_946E0("Missing argument %ld in user function.", v15);
            v17 = *(_DWORD *)(v16 + 8 * v15);
            v18 = *(_DWORD *)(v16 + 8 * v15 + 4);
            if ( 0x7FFFFFFF - *(_DWORD *)(a1 + 4) < v18 )
              sub_33D184("basic_string::append");
            sub_33C320(a1, v17, v18);
            a3 = endptr[0];
          }
        }
        v6 = *(_DWORD *)(a1 + 4);
        goto LABEL_2;
      }
    }
  }
  v12 = strlen(a3);
  if ( 0x7FFFFFFF - v6 < v12 )
    sub_33D184("basic_string::append");
  sub_33C320(a1, a3, v12);
  return a1;
}
