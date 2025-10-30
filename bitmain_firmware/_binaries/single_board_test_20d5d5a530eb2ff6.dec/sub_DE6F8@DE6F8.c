bool __fastcall sub_DE6F8(int a1, void *a2, unsigned int *a3)
{
  int *v3; // r4
  _DWORD *v4; // r6
  int v5; // r5
  int v9; // r3
  int v10; // r11
  size_t v11; // r2
  _DWORD *v12; // r0
  const void *v13; // r1
  int v14; // r4
  unsigned int v15; // r9
  _BOOL4 v16; // r5
  size_t v17; // [sp+14h] [bp-48h] BYREF
  _DWORD v18[17]; // [sp+18h] [bp-44h] BYREF

  v3 = *(int **)(a1 + 20);
  v4 = (_DWORD *)v3[1];
  if ( !v4 )
  {
    v5 = 0;
    sub_D0048(52, 102, 105, (int)"crypto/kdf/hkdf.c", 196);
    return v5;
  }
  if ( !v3[4] )
  {
    v5 = 0;
    sub_D0048(52, 102, 104, (int)"crypto/kdf/hkdf.c", 200);
    return v5;
  }
  v5 = *v3;
  if ( *v3 == 1 )
  {
    if ( !a2 )
    {
      *a3 = sub_D8C78(v3[1]);
      return v5;
    }
    if ( !sub_DCC0C(v4, (const void *)v3[2], v3[3], v3[4], v3[5], a2, v18) )
      return 0;
    *a3 = v18[0];
    return 1;
  }
  else if ( v5 == 2 )
  {
    return sub_DE5E4(v4, (const void *)v3[4], v3[5], (int)(v3 + 6), v3[262], (int)a2, *a3) != 0;
  }
  else
  {
    if ( v5 )
      return 0;
    v9 = v3[4];
    v10 = v3[262];
    v11 = v3[3];
    v12 = (_DWORD *)v3[1];
    v13 = (const void *)v3[2];
    v14 = (int)(v3 + 6);
    v15 = *a3;
    if ( !sub_DCC0C(v12, v13, v11, v9, *(_DWORD *)(v14 - 4), v18, &v17) )
      return v5;
    v16 = sub_DE5E4(v4, v18, v17, v14, v10, (int)a2, v15) != 0;
    sub_E07F8((int)v18, 0x40u);
    return v16;
  }
}
