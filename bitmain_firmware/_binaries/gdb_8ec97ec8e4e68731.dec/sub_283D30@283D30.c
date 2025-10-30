bool __fastcall sub_283D30(int a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r3
  _DWORD *v6; // r4
  int v7; // r0
  const char *v8; // r7
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r5

  v4 = (_DWORD *)sub_28B528(2, 0);
  v4[18] = a1;
  if ( a1 == -1 )
    v5 = v4[1];
  v6 = v4;
  if ( a1 == -1 )
    v4[1] = v5 | 1;
  v4[17] = v4[11];
  sub_2972FC();
  dword_48B6E0 = 0;
  if ( a2 )
    v7 = a2;
  else
    v7 = 58;
  *(_BYTE *)dword_48AAD4 = 0;
  dword_4900DC = 0;
  dword_4900D8 = 0;
  v8 = (const char *)sub_28D558(v7);
  sub_28D3C4("%s", v8);
  sub_297758(v8);
  v9 = dword_48AAA0;
  dword_48ABE4 = (int)v6;
  dword_48AAA0 |= 0x100u;
  if ( (v9 & 0x80000) != 0 )
    return 0;
  do
  {
    v11 = sub_28B738(v6);
    if ( !v11 )
      break;
    v10 = sub_283BD0((int)v6, v11);
    if ( v10 < 0 )
      return 1;
  }
  while ( v10 );
  v12 = sub_2838F0(v6);
  if ( v12 >= 0 )
  {
    sub_28B5D4(v6, 0);
    dword_48ABE4 = 0;
    dword_48AAA0 &= ~0x100u;
    return v12 != 1;
  }
  return 1;
}
