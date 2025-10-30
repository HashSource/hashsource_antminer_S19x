int __fastcall sub_243E28(const char *a1)
{
  int v2; // r5
  int v3; // r3
  _BOOL4 v4; // r2
  int v5; // r0
  int v6; // r4
  const char **v7; // r0
  int v9; // r0
  int v10; // r0

  v2 = dword_48A528;
  v3 = ++dword_48A524;
  if ( dword_48A528 )
  {
    v4 = dword_48A528 == -1;
    if ( v3 < dword_48A528 )
      v4 = 1;
    if ( v4 )
      v2 = v3;
    v5 = sub_297824();
    if ( v2 > 0 )
    {
      v6 = 0;
      do
      {
        v7 = (const char **)sub_297958(v5);
        ++v6;
        if ( !v7 )
          break;
        v5 = strcmp(*v7, a1);
        if ( !v5 )
        {
          v9 = sub_2978A8();
          v10 = sub_297E78(v9);
          --dword_48A524;
          sub_297B08(v10);
          break;
        }
      }
      while ( v2 != v6 );
    }
    sub_297824();
  }
  return sub_297B48(a1);
}
