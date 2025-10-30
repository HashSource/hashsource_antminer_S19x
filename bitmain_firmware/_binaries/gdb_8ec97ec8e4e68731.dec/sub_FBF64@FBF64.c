int __fastcall sub_FBF64(int a1, int a2, int a3)
{
  const char *v4; // r4
  __int64 v6; // r0
  char v7; // r6
  int v8; // r9
  int v9; // r0
  int v10; // r8
  int v11; // r0
  int v12; // r4
  int v13; // r3
  int v15; // [sp+4h] [bp-10h] BYREF
  int v16; // [sp+8h] [bp-Ch]
  int v17; // [sp+Ch] [bp-8h]

  v4 = *(const char **)a2;
  LODWORD(v6) = strncmp(*(const char **)a2, aReg_1, 5u);
  v7 = v6;
  if ( !(_DWORD)v6 )
  {
    v8 = strtol(v4 + 5, 0, 10);
    v9 = sub_2A9FD8(dword_47ACB8);
    v10 = v9;
    if ( !v9 )
    {
      v7 = 1;
      v10 = 1;
    }
    v11 = sub_183688(v9);
    v12 = v11;
    if ( !*(_DWORD *)(v11 + 12) )
    {
      sub_183998(v11, v10);
      *(_BYTE *)(v12 + 16) = v7;
    }
    sub_98F48(&v15, v10, v8, 0);
    LODWORD(v6) = sub_23FC70(v15, v16, v17, v13);
    if ( a3 )
    {
      v6 = *(_QWORD *)(a2 + 80);
      if ( v6 == *(_QWORD *)(a3 + 80) )
      {
        dword_4878EC = v15;
        dword_4878F0 = v16;
        dword_4878F4 = v17;
        LODWORD(v6) = v15;
      }
    }
  }
  return v6;
}
