int __fastcall sub_3091A4(_DWORD *a1)
{
  void (__fastcall *v2)(int, int); // r5
  _BOOL4 v3; // r6
  int v4; // r1
  int v5; // r0

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  v2 = (void (__fastcall *)(int, int))a1[9];
  if ( !v2 )
    return -2;
  v3 = sub_307334((int)a1);
  if ( v3 )
    return -2;
  v4 = a1[7];
  v5 = a1[10];
  if ( *(_DWORD *)(v4 + 56) )
  {
    v2(v5, *(_DWORD *)(v4 + 56));
    v2 = (void (__fastcall *)(int, int))a1[9];
    v5 = a1[10];
    v4 = a1[7];
  }
  v2(v5, v4);
  a1[7] = 0;
  return v3;
}
