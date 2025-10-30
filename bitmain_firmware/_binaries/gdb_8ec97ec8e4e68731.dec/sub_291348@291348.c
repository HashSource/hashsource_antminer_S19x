int sub_291348()
{
  int v0; // r6
  int v1; // r4
  int v2; // r5
  int v3; // r0
  bool v4; // zf
  int v5; // r1
  int v6; // r3
  int v7; // t1
  bool v8; // zf
  char v9; // r3
  int v10; // r3
  int v11; // r2
  int i; // r8
  int v13; // r3
  int v14; // t1
  bool v15; // zf
  bool v16; // r3
  int v19; // r5
  char *v20; // r9
  int v21; // r4

  v0 = dword_4900DC;
  v1 = dword_4900D8 - 1;
  v2 = dword_4900D8 - 1;
  if ( dword_4900DC == dword_4900D8 && *(_BYTE *)(dword_48AAD4 + dword_4900DC) == 126 )
  {
    v19 = sub_29B910("~");
    sub_29509C(v19, v1, v0);
    sub_297758(v19);
    return 0;
  }
  v3 = *(unsigned __int8 *)(dword_48AAD4 + v1);
  if ( v3 != 126 )
  {
    v4 = v3 == 9;
    if ( v3 != 9 )
      v4 = v3 == 32;
    LOBYTE(v3) = !v4;
    if ( v1 < 0 )
      v3 = 0;
    if ( v3 )
    {
      v5 = dword_48AAD4 + v1;
      do
      {
        v7 = *(unsigned __int8 *)--v5;
        v6 = v7;
        --v2;
        v8 = v7 == 32;
        if ( v7 != 32 )
          v8 = v6 == 9;
        v9 = !v8;
        if ( v2 >= 0 )
          v10 = v9 & 1;
        else
          v10 = 0;
      }
      while ( v10 );
    }
    ++v2;
    v3 = *(unsigned __int8 *)(dword_48AAD4 + v2);
  }
  v11 = dword_48AAD4 + v2;
  for ( i = v2; ; ++i )
  {
    v14 = *(unsigned __int8 *)++v11;
    v13 = v14;
    v15 = v14 == 9;
    if ( v14 != 9 )
      v15 = v13 == 32;
    v16 = v15;
    if ( dword_4900DC <= i + 1 || v16 )
      break;
  }
  if ( v3 != 126 )
    return 0;
  v20 = (char *)sub_93028(i - v2 + 2);
  strncpy(v20, (const char *)(dword_48AAD4 + v2), i - v2 + 1);
  v20[i - v2 + 1] = 0;
  v21 = sub_29B910(v20);
  sub_297758(v20);
  sub_29509C(v21, v2, i);
  sub_297758(v21);
  return 0;
}
