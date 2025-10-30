void __fastcall sub_F1338(int a1, int a2, _QWORD *a3)
{
  int v3; // r3
  __int64 v4; // r6
  _BOOL4 v5; // lr
  int v6; // r3

  v3 = *(_DWORD *)(a2 + 116);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a2 + 96);
    v5 = v4 < *a3;
    v6 = dword_4789AC * v3;
    if ( !*a3 )
      v5 = 1;
    if ( v5 )
      *a3 = v4;
    if ( a3[1] < v4 + v6 )
      a3[1] = v4 + v6;
  }
}
