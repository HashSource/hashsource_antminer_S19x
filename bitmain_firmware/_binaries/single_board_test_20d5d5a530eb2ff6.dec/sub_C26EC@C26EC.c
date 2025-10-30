int __fastcall sub_C26EC(int a1, int a2)
{
  int v3; // r0
  int v4; // r4
  int v5; // r0

  v3 = sub_C59B8(*(_DWORD *)(a2 + 24));
  v4 = sub_C6784(v3);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(a1 + 24);
  if ( !v5 && (v5 = EC_KEY_new(), (*(_DWORD *)(a1 + 24) = v5) == 0) || !sub_C59BC(v5, v4) )
  {
    sub_C64B8(v4);
    return 0;
  }
  sub_C64B8(v4);
  return 1;
}
