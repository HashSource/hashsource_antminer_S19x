int __fastcall sub_45330(int a1, int a2)
{
  int v2; // r3
  int v4; // r2
  int v5; // r4
  int v6; // r1
  int result; // r0
  int v8; // r5

  v2 = a1 + 20 * a2;
  v4 = *(_DWORD *)(v2 + 8);
  v5 = *(_DWORD *)(v2 + 20);
  if ( v4 == 1 )
  {
    v5 *= 2;
  }
  else if ( v4 != 2 )
  {
    result = *(_DWORD *)(a1 + 4);
    v6 = a2 + 1;
    goto LABEL_11;
  }
  v6 = a2 + 1;
  if ( v5 )
  {
    v8 = *(_DWORD *)(a1 + 4);
    do
    {
      if ( v6 >= 0 && v8 > v6 )
        v6 = sub_45330(a1);
      --v5;
    }
    while ( v5 );
    result = v8;
  }
  else
  {
    result = *(_DWORD *)(a1 + 4);
  }
LABEL_11:
  if ( v6 >= 0 && result >= v6 )
    return v6;
  return result;
}
