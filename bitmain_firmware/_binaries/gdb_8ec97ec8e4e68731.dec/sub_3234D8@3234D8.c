char *sub_3234D8()
{
  int v0; // r4
  int *v2; // r0
  int v3; // r3
  int *v4; // r6
  char *v5; // r0
  char *v6; // r4
  size_t v7; // r7
  int v8; // r4
  char *v9; // r8
  char *v10; // r0
  _QWORD v11[13]; // [sp+0h] [bp-D0h] BYREF
  _QWORD v12[13]; // [sp+68h] [bp-68h] BYREF

  v0 = dword_48FEAC;
  if ( dword_48FEAC )
    return (char *)v0;
  v2 = _errno_location();
  v3 = dword_48FEB0;
  v4 = v2;
  *v2 = dword_48FEB0;
  if ( v3 )
    return (char *)v0;
  v5 = getenv((const char *)&off_4381A4);
  v6 = v5;
  if ( !v5 || *v5 != 47 || _xstat64(3, v5, v12) || _xstat64(3, ".", v11) || v11[12] != v12[12] || v11[0] != v12[0] )
  {
    v7 = 4097;
    while ( 1 )
    {
      v6 = (char *)sub_93028(v7);
      v9 = getcwd(v6, v7);
      v7 *= 2;
      v10 = v6;
      if ( v9 )
        break;
      v8 = *v4;
      free(v10);
      if ( v8 != 34 )
      {
        dword_48FEB0 = v8;
        v6 = 0;
        dword_48FEAC = 0;
        return v6;
      }
    }
  }
  dword_48FEAC = (int)v6;
  return v6;
}
