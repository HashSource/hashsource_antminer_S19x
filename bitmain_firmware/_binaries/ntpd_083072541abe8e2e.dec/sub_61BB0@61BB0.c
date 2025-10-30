int __fastcall sub_61BB0(int a1)
{
  int v1; // r4
  int v2; // r1
  int result; // r0
  int v4; // r3
  int v5; // r2
  int v6; // r1

  v1 = a1;
  if ( a1 > 0 )
    v2 = a1;
  else
    v2 = 16;
  if ( a1 <= 0 )
    v1 = v2;
  result = sub_63C68(0, v2, 40);
  v4 = result;
  v5 = v1;
  authnumfreekeys += v1;
  v6 = authfreekeys;
  while ( 1 )
  {
    --v5;
    *(_DWORD *)(v4 + 8) = v6;
    v6 = v4;
    if ( !v5 )
      break;
    v4 += 40;
  }
  authfreekeys = result + 40 * (v1 - 1);
  return result;
}
