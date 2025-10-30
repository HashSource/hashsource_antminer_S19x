int __fastcall sub_2466C8(int a1, int a2, _QWORD *a3)
{
  int v3; // r9
  int i; // r1
  int v7; // r4
  ssize_t v8; // r0
  int v9; // r0
  int v10; // r0
  ssize_t v11; // r0
  int v12; // r0
  int v13; // r0
  __int64 v14; // r0
  char v16; // [sp+3h] [bp-9h] BYREF
  unsigned __int8 v17[8]; // [sp+4h] [bp-8h] BYREF

  v3 = 0;
  for ( i = 0; ; i = v7 + 12 )
  {
    v16 = 86;
    v7 = sub_246544((int (__fastcall *)(_DWORD, int))sub_245D38, i, (int)&v16);
    if ( v7 < 0 )
      break;
    v8 = sub_2464F8(v17, 4);
    v9 = sub_16F654(v8);
    v10 = ((int (__fastcall *)(int))loc_165BB8)(v9);
    *(_DWORD *)v17 = sub_15C190(v17, 4, v10);
    if ( *(_DWORD *)v17 == a2 )
    {
      v11 = sub_2464F8(a3, 8);
      v12 = sub_16F654(v11);
      v13 = ((int (__fastcall *)(int))loc_165BB8)(v12);
      v3 = 1;
      LODWORD(v14) = sub_15C190((unsigned __int8 *)a3, 8, v13);
      *a3 = v14;
    }
  }
  return v3;
}
