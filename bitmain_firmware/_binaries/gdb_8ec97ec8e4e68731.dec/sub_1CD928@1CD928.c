int __fastcall sub_1CD928(int a1, int a2, __int64 a3, int a4, unsigned int a5, unsigned int a6)
{
  __int64 v8; // kr00_8
  int v9; // r3
  unsigned int v10; // r2
  int v11; // [sp+4h] [bp-10h] BYREF
  __int64 v12; // [sp+8h] [bp-Ch]

  v11 = a2;
  v12 = a3;
  if ( a2 != 1 )
    HIDWORD(a3) = a2;
  LODWORD(a3) = a4;
  if ( a2 != 1 )
    goto LABEL_4;
  if ( a4 == 1 )
  {
LABEL_12:
    v9 = HIDWORD(v12);
    v10 = a6;
    *(_QWORD *)a1 = 0xFFFFFFFF00000001LL;
    *(_DWORD *)(a1 + 8) = v9 & v10;
    return a1;
  }
  sub_1CD6BC(&v11, &a4);
  HIDWORD(a3) = v11;
  if ( v11 == 1 )
  {
    if ( a4 != 1 )
      goto LABEL_6;
    goto LABEL_12;
  }
  LODWORD(a3) = a4;
LABEL_4:
  if ( (_DWORD)a3 != 1 )
  {
    if ( a3 == 0x200000002LL && v12 == __PAIR64__(a6, a5) )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( a6 )
  {
    if ( a6 == -1 )
    {
LABEL_10:
      v8 = v12;
      *(_DWORD *)a1 = v11;
      *(_QWORD *)(a1 + 4) = v8;
      return a1;
    }
LABEL_6:
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    return a1;
  }
  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = 0;
  return a1;
}
