void __fastcall sub_7D71C(_DWORD *a1)
{
  _DWORD **v1; // r6
  int v3; // r4
  _DWORD *v4; // r5
  _DWORD *v5; // t1

  v1 = (_DWORD **)(a1 + 2);
  v3 = *a1 - 1;
  if ( (int)*a1 > 0 )
  {
    do
    {
      v5 = *v1++;
      v4 = v5;
      if ( *v5 == 6 )
        sub_7D71C(v4[2]);
      --v3;
      free(v4);
    }
    while ( v3 != -1 );
  }
  free(a1);
}
