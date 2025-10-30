int __fastcall sub_124020(int a1, int a2, int *a3, int a4, int (__fastcall **a5)(int, int))
{
  int v5; // r1
  int v6; // r7
  int v7; // r4
  int v10; // r6
  int v11; // r11
  int v12; // r8
  int v13; // r0

  v5 = a2 - a1;
  v6 = a1;
  if ( v5 > 0 )
  {
    v7 = v5 >> 3;
    do
    {
      v10 = v7 >> 1;
      v11 = *a3;
      v12 = v6 + 8 * (v7 >> 1);
      v7 = v7 - (v7 >> 1) - 1;
      v13 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a4 + 4))(a4, *(_DWORD *)(v12 + 4));
      if ( (*a5)(v13 + *(_DWORD *)(v6 + 8 * v10), v11) >= 0 )
        v7 = v10;
      else
        v6 = v12 + 8;
    }
    while ( v7 > 0 );
  }
  return v6;
}
