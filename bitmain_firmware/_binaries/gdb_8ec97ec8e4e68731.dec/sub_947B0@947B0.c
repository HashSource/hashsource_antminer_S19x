int __fastcall sub_947B0(int a1, int a2)
{
  int v3; // r4
  void *v4; // r0
  int v5; // r4
  int v6; // r1
  int v8; // r6
  __int64 v9; // r0

  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(void **)a1;
  v5 = (v3 - (int)v4) >> 4;
  v6 = v5 + a2;
  if ( v6 )
  {
    v8 = 16 * v6;
    LODWORD(v9) = sub_93050(v4, 16 * v6);
    HIDWORD(v9) = v9 + v8;
    *(_QWORD *)a1 = v9;
    return v5;
  }
  else
  {
    if ( v4 )
      free(v4);
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
    return v5;
  }
}
