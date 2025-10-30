bool __fastcall sub_A0AB8(int a1)
{
  int v2; // r0
  int v3; // r3
  int v5; // r0
  int v6; // r3

  v2 = sub_A0A60(a1);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 24);
    v2 = *(_DWORD *)(v3 + 8);
    if ( !v2 )
      v2 = *(_DWORD *)(v3 + 12);
  }
  if ( sub_9A698((const char *)v2, "___XUT") )
    return 1;
  v5 = sub_A0A60(a1);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 24);
    v5 = *(_DWORD *)(v6 + 8);
    if ( !v5 )
      v5 = *(_DWORD *)(v6 + 12);
  }
  return sub_9A698((const char *)v5, "___XUT___XVE");
}
