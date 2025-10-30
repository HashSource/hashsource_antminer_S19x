void __fastcall sub_7C38C(_DWORD *a1)
{
  int v2; // r4
  _DWORD **v3; // r6
  _DWORD *v4; // r5
  _DWORD *v5; // t1

  if ( (int)*a1 > 0 )
  {
    v2 = *a1 - 1;
    v3 = (_DWORD **)(a1 + 2);
    do
    {
      v5 = *v3++;
      v4 = v5;
      if ( *v5 == 6 )
        sub_7C38C(v4[2]);
      --v2;
      free(v4);
    }
    while ( v2 != -1 );
  }
  free(a1);
}
