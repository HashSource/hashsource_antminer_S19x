int __fastcall sub_161D3C(int *a1, int a2, int a3, _DWORD *a4, _DWORD *a5, int a6, int a7)
{
  int v9; // r0
  int **v10; // r5
  int v11; // r0
  int v12; // r11
  int v13; // r9
  int v14; // r10
  int v15; // r0
  int v16; // r4
  int v18; // [sp+8h] [bp-6Ch]
  _BYTE src[16]; // [sp+20h] [bp-54h] BYREF
  _BYTE v21[68]; // [sp+30h] [bp-44h] BYREF

  if ( !a5 )
    return 0;
  v9 = sub_AD8B0((int)&PBEPARAM_it, a4);
  v10 = (int **)v9;
  if ( !v9 )
  {
    v16 = 0;
    sub_D0048(35, 120, 101, (int)"crypto/pkcs12/p12_crpt.c", 43);
    return v16;
  }
  v11 = *(_DWORD *)(v9 + 4);
  v12 = 1;
  if ( v11 )
    v12 = sub_126F04(v11);
  v13 = (*v10)[2];
  v14 = **v10;
  v15 = sub_D8AD0((int)a5);
  if ( sub_162418(a2, a3, v13, v14, 1, v12, v15, v21, a6) )
  {
    v18 = sub_D8940((int)a5);
    if ( sub_162418(a2, a3, v13, v14, 2, v12, v18, src, a6) )
    {
      sub_173170(v10);
      v16 = sub_D8440(a1, a5, 0, (int)v21, src, a7);
      sub_E07F8(v21, 0x40u);
      sub_E07F8(src, 0x10u);
      return v16;
    }
    sub_D0048(35, 120, 106, (int)"crypto/pkcs12/p12_crpt.c", 61);
  }
  else
  {
    sub_D0048(35, 120, 107, (int)"crypto/pkcs12/p12_crpt.c", 55);
  }
  sub_173170(v10);
  return 0;
}
