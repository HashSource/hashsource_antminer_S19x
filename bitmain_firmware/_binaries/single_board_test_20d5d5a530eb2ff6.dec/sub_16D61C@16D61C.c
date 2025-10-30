int __fastcall sub_16D61C(_DWORD *a1, int a2)
{
  int v3; // r3
  int v5; // r1

  v3 = a1[4];
  v5 = a1[2];
  if ( (v3 & 2) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 28))(a1, v5, v3 << 30);
    v3 = a1[4];
    v5 = 0;
  }
  a1[2] = a2;
  a1[4] = v3 & 0xFFFFFFFD;
  return v5;
}
