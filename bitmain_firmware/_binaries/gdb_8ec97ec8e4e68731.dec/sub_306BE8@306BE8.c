int __fastcall sub_306BE8(_DWORD *a1)
{
  void (__fastcall *v2)(int); // r5
  int v3; // r6
  _DWORD *v4; // r3
  int v5; // r0
  int v6; // r7

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  v2 = (void (__fastcall *)(int))a1[9];
  if ( !v2 )
    return -2;
  v3 = sub_305068((int)a1);
  if ( v3 )
    return -2;
  v4 = (_DWORD *)a1[7];
  v5 = a1[10];
  v6 = v4[1];
  if ( v4[2] )
  {
    v2(v5);
    v4 = (_DWORD *)a1[7];
    v2 = (void (__fastcall *)(int))a1[9];
    v5 = a1[10];
  }
  if ( v4[17] )
  {
    v2(v5);
    v4 = (_DWORD *)a1[7];
    v2 = (void (__fastcall *)(int))a1[9];
    v5 = a1[10];
  }
  if ( v4[16] )
  {
    v2(v5);
    v4 = (_DWORD *)a1[7];
    v2 = (void (__fastcall *)(int))a1[9];
    v5 = a1[10];
  }
  if ( v4[14] )
  {
    v2(v5);
    v2 = (void (__fastcall *)(int))a1[9];
    v5 = a1[10];
    v4 = (_DWORD *)a1[7];
  }
  ((void (__fastcall *)(int, _DWORD *))v2)(v5, v4);
  if ( v6 == 113 )
    v3 = -3;
  a1[7] = 0;
  return v3;
}
