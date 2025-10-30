int __fastcall sub_2AD64C(_DWORD *a1, int a2)
{
  int v2; // r3
  int v5; // r12
  int v6; // r2
  int (*v7)(void); // r3
  __int64 v8; // r0
  int v9; // r3

  v2 = a1[1];
  v5 = a1[27];
  v6 = dword_4707F8;
  *(_DWORD *)(a2 + 148) = a1;
  v7 = *(int (**)(void))(v2 + 156);
  *(_DWORD *)(a2 + 4) = v6;
  *(_DWORD *)(a2 + 8) = v5;
  LODWORD(v8) = v7();
  if ( (_DWORD)v8 )
  {
    HIDWORD(v8) = a1[26];
    LODWORD(v8) = 0;
    v9 = dword_4707F8 + 1;
    ++a1[27];
    dword_4707F8 = v9;
    *(_QWORD *)(a2 + 12) = v8;
    LODWORD(v8) = a2;
    if ( HIDWORD(v8) )
      *(_DWORD *)(HIDWORD(v8) + 12) = a2;
    else
      a1[25] = a2;
    a1[26] = a2;
  }
  return v8;
}
