_DWORD *__fastcall sub_286C1C(const char *a1, int (__fastcall *a2)(const char *, signed int))
{
  _DWORD *v4; // r0
  int v5; // r3
  int v6; // r5
  _DWORD *v7; // r10
  signed int v8; // r4
  int v9; // r11
  int v10; // r3
  _DWORD *v12; // r0

  v4 = sub_93028(0x2Cu);
  v5 = dword_48B6BC;
  v6 = 10;
  v7 = v4;
  v8 = 0;
  v4[1] = 0;
  dword_48B6BC = v5 + 1;
  while ( 1 )
  {
    v9 = a2(a1, v8);
    if ( !v9 )
      break;
    if ( ++v8 == v6 )
    {
      v6 = v8 + 10;
      v7 = sub_93050(v7, 4 * (v8 + 11));
    }
    v7[v8] = v9;
    v7[v8 + 1] = 0;
  }
  if ( dword_48B6BC > 0 )
    --dword_48B6BC;
  if ( !v8 )
  {
    v12 = v7;
    v7 = 0;
    sub_297758(v12);
    return v7;
  }
  if ( v8 == 1 )
  {
    v10 = v7[1];
    v7[1] = 0;
    *v7 = v10;
    return v7;
  }
  sub_2857A8((char **)v7, v8, a1);
  return v7;
}
