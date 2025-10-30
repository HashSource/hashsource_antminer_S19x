int __fastcall sub_3014C(int a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r12
  int v5; // r2
  int v6; // r4
  _DWORD *v7; // r12
  int v8; // r2
  int v9; // t1

  if ( *a2 >= a1 )
    return 0;
  v4 = a3 + 0x3FFFFFFF;
  v5 = a3 - 1;
  if ( a2[v4] <= a1 )
    return v5;
  if ( v5 <= 0 || a1 <= a2[1] )
  {
    v8 = 0;
  }
  else
  {
    v6 = v5;
    v7 = a2 + 1;
    v8 = 0;
    do
    {
      if ( ++v8 == v6 )
        break;
      v9 = v7[1];
      ++v7;
    }
    while ( a1 > v9 );
  }
  if ( a4 || a2[v8 + 1] + a2[v8] <= 2 * a1 )
    ++v8;
  return v8;
}
