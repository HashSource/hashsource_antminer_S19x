int __fastcall sub_26A738(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  int v7; // r0
  int v8; // r0
  int v9; // r8
  int v10; // r4
  int v11; // r5
  unsigned int v12; // r9
  unsigned int v13; // r1
  unsigned int v14; // r10
  int v15; // r0
  bool v16; // cc
  __int64 v17; // r0
  char v18; // lr
  __int64 v19; // r2
  unsigned __int64 v20; // r8
  unsigned int v22; // [sp+Ch] [bp-10h]

  v7 = sub_170040((int)a1);
  v22 = ((int (__fastcall *)(int))loc_165BB8)(v7);
  v8 = sub_171258(a1);
  v9 = v8;
  v10 = a3 % 8;
  if ( a4 )
    v11 = (a4 + a3 % 8 + 7) / 8;
  else
    v11 = *(_DWORD *)(v8 + 20);
  v12 = sub_15C250((unsigned __int8 *)(a2 + a3 / 8), v11, v22);
  v14 = v13;
  v15 = sub_170040(v9);
  if ( ((int (__fastcall *)(int))loc_165D78)(v15) )
    LOBYTE(v10) = 8 * v11 - v10 - a4;
  v16 = (_DWORD)a4 != 1;
  if ( (_DWORD)a4 == 1 )
    v16 = 0;
  LODWORD(v17) = __PAIR64__(v14, v12) >> v10;
  if ( !v16 )
  {
    v18 = *(_BYTE *)(*(_DWORD *)(v9 + 24) + 1);
    LODWORD(v20) = (1 << a4) - 1;
    HIDWORD(v20) = v20;
    LODWORD(v17) = v17 & v20;
    HIDWORD(v17) = (v14 >> v10) & v20;
    if ( (v18 & 1) == 0 && (((v20 >> 1) ^ v20) & v17) != 0 )
    {
      HIDWORD(v19) = (1 << (a4 - 32)) | (1u >> (32 - a4));
      LODWORD(v19) = 1 << a4;
      return v17 | -v19;
    }
  }
  return v17;
}
