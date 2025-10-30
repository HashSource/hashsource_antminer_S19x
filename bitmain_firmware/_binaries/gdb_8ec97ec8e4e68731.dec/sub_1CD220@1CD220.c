int __fastcall sub_1CD220(int a1)
{
  _DWORD *v2; // r0
  int v3; // r3
  int v4; // r5
  int *v5; // r2

  v2 = sub_93094(1u, 0x48u);
  v3 = dword_487D3C;
  v4 = (int)v2;
  v2[5] = a1;
  dword_487D3C = v3 + 1;
  v2[1] = v3 + 1;
  sub_1E0B10(&unk_487D30, v2 + 16);
  v5 = (int *)dword_487D28;
  if ( dword_487D28 )
  {
    while ( *v5 )
      v5 = (int *)*v5;
    *v5 = v4;
  }
  else
  {
    dword_487D28 = v4;
  }
  return v4;
}
