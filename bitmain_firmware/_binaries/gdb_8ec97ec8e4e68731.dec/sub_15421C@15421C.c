int __fastcall sub_15421C(unsigned __int8 *a1)
{
  int v2; // r4
  int v3; // r3
  bool v4; // zf
  unsigned __int8 *v5; // r2
  int v6; // t1
  bool v7; // zf
  _BYTE v9[44]; // [sp+0h] [bp-2Ch] BYREF

  v2 = dword_487668;
  if ( *(_DWORD *)(dword_487668 + 48) == *(_DWORD *)(dword_487668 + 44) )
    sub_2592C8();
  sub_1A69E0((int)v9, 1);
  v3 = *a1;
  v4 = v3 == 9;
  if ( v3 != 9 )
    v4 = v3 == 32;
  if ( v4 )
  {
    v5 = a1;
    do
    {
      v6 = *++v5;
      v3 = v6;
      v7 = v6 == 9;
      if ( v6 != 9 )
        v7 = v3 == 32;
    }
    while ( v7 );
  }
  if ( v3 != 35 )
  {
    sub_2435B0(a1, *(_DWORD *)(v2 + 48) == *(_DWORD *)(v2 + 44));
    sub_D4120();
  }
  return sub_1A6790(v9);
}
