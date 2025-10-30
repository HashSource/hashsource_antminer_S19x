int __fastcall sub_FB380(int a1, const char **a2, int a3)
{
  int v3; // r12
  const char *v5; // r0
  int v6; // r9
  unsigned __int64 v7; // r0
  unsigned __int64 v8; // r2
  unsigned __int64 v9; // r4
  int v10; // r0
  int v11; // r2
  int v13; // [sp+8h] [bp-Ch] BYREF
  int v14; // [sp+Ch] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 4);
  v5 = *a2;
  v14 = 0;
  v6 = *(_DWORD *)(v3 + 8);
  LODWORD(v7) = sscanf(v5, "SPU/%d/regs%n", &v13, &v14);
  if ( v14 )
  {
    v7 = *(_QWORD *)(a3 + 24);
    v8 = *(_QWORD *)(a3 + 8);
    v9 = v7 + 4;
    if ( v7 >= v8 && v8 + *(_QWORD *)(a3 + 16) >= v9 )
    {
      v10 = v7 - v8;
      v11 = v6;
      if ( v6 )
        v11 = 1;
      sub_15C34C(*(_DWORD *)a3 + v10, 4, v11, *(_DWORD *)a3, v13, v13 >> 31);
      HIDWORD(v7) = *(_DWORD *)(a3 + 24);
      LODWORD(v7) = *(_DWORD *)(a3 + 28);
      *(_QWORD *)(a3 + 32) += 4LL;
      v9 = __PAIR64__(v7, HIDWORD(v7)) + 4;
    }
    *(_QWORD *)(a3 + 24) = v9;
  }
  return v7;
}
