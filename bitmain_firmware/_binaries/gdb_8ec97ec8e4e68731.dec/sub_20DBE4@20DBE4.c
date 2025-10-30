_DWORD *__fastcall sub_20DBE4(_DWORD *a1)
{
  int v2; // r1
  __int64 v3; // r2

  memset(a1, 0, 0x28u);
  if ( dword_489674 )
  {
    v2 = dword_48967C;
    v3 = *(_QWORD *)&dword_489680;
    *a1 = dword_489678;
    a1[5] = v2;
    a1[1] = v3;
    a1[4] = HIDWORD(v3);
  }
  return a1;
}
