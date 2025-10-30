int __fastcall sub_2A9594(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r4
  int v10; // r3
  _BOOL4 v11; // r2
  int v12; // r0
  int v13; // r2
  int v14; // r0
  bool v15; // zf
  int result; // r0
  int v17; // [sp+0h] [bp-3Ch] BYREF
  int v18; // [sp+4h] [bp-38h]
  _DWORD s[12]; // [sp+8h] [bp-34h] BYREF

  memset(s, 0, sizeof(s));
  v17 = a1;
  v18 = a2;
  s[2] = a4;
  v8 = sub_307648(&v17, "1.2.11", 56);
  v9 = v8;
  if ( v18 )
  {
    v10 = s[2];
    v11 = s[2] == 0;
    if ( v8 )
      v11 = 1;
    if ( !v11 )
    {
      do
      {
        s[1] = a3 + a4 - v10;
        v9 = sub_3076EC(&v17, 4);
        if ( v9 != 1 )
          break;
        v12 = sub_307428(&v17);
        v9 = v12;
        if ( !v18 )
          break;
        v10 = s[2];
        v13 = v12;
        if ( v12 )
          v13 = 1;
        if ( !s[2] )
          v13 = 1;
      }
      while ( !v13 );
    }
  }
  v14 = sub_3091A4(&v17);
  v15 = (v9 | v14) == 0;
  if ( v9 | v14 )
    result = 0;
  else
    result = s[2];
  if ( v15 )
    return result == 0;
  return result;
}
