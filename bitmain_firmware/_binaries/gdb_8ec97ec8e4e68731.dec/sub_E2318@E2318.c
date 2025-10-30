int __fastcall sub_E2318(_DWORD *a1, int a2, int a3)
{
  int v3; // r5
  int v4; // r0
  __int64 v5; // r2
  int v6; // r4

  v3 = -991146299 * ((a1[7] - a1[6]) >> 2);
  v4 = sub_E21EC(a1, a2, a3);
  v5 = *(_QWORD *)(v4 + 44);
  v6 = v4;
  *(_DWORD *)(v4 + 16) = v3;
  LODWORD(v5) = v5 + 1;
  HIDWORD(v5) |= 2u;
  *(_QWORD *)(v4 + 44) = v5;
  sub_E0D88((int *)v4, "new tail call");
  return v6;
}
