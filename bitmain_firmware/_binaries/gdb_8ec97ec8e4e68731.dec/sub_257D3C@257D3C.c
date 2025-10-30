int __fastcall sub_257D3C(int a1)
{
  _DWORD *v2; // r5
  int *v3; // r4
  int v4; // r9
  int v5; // r6
  int v6; // r10
  _DWORD *v7; // r0
  _DWORD *v8; // r2
  int v10; // r0
  int v11; // r1
  int v12; // r2

  v2 = sub_163938(a1, 8u);
  v2[1] = v2;
  v3 = (int *)dword_46DD44;
  if ( !dword_46DD44 )
    return (int)v2;
  while ( 1 )
  {
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = sub_163938(a1, 0x10u);
    if ( !v7 )
      break;
    v7[2] = v6;
    v8 = (_DWORD *)v2[1];
    v7[3] = 0;
    *v7 = v4;
    v7[1] = v5;
    *v8 = v7;
    v3 = (int *)v3[3];
    v2[1] = v7 + 3;
    if ( !v3 )
      return (int)v2;
  }
  v10 = sub_257D08();
  return sub_257DC0(v10, v11, v12);
}
