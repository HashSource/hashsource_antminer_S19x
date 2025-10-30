int __fastcall sub_10ACD0(int a1, int a2)
{
  int v3; // r4
  __int64 v5; // r0
  int v6; // r4

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 12);
  v6 = v3 + 1;
  *(_DWORD *)(a1 + 8) = v6;
  if ( v6 > SHIDWORD(v5) )
  {
    *(_DWORD *)(a1 + 16) = 2 * HIDWORD(v5);
    LODWORD(v5) = sub_93050((void *)v5, 8 * HIDWORD(v5));
    *(_DWORD *)(a1 + 12) = v5;
  }
  *(_DWORD *)(v5 + 4 * (v6 + 0x3FFFFFFF)) = a2;
  return v5;
}
