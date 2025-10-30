int __fastcall sub_7DE0(int a1)
{
  int v1; // r4
  int v2; // r1
  int v3; // r0
  int v4; // r2
  int v5; // r1
  int i; // r3
  int result; // r0

  v1 = a1;
  if ( a1 > 0 )
    v2 = a1;
  else
    v2 = 16;
  if ( a1 <= 0 )
    v1 = v2;
  v3 = sub_9B30(0, v2, 40);
  v4 = v1;
  authnumfreekeys += v1;
  v5 = authfreekeys;
  for ( i = v3; ; i += 40 )
  {
    --v4;
    *(_DWORD *)(i + 8) = v5;
    v5 = i;
    if ( !v4 )
      break;
  }
  result = v3 + 40 * (v1 - 1);
  authfreekeys = result;
  return result;
}
