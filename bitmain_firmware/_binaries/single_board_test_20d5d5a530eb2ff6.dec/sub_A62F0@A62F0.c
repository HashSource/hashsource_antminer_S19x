bool __fastcall sub_A62F0(_DWORD *a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, int a8)
{
  int v12; // r6
  int v13; // r4
  _BOOL4 v15; // r5
  int v17; // [sp+20h] [bp-CCh] BYREF
  int v18; // [sp+24h] [bp-C8h] BYREF
  _BYTE v19[64]; // [sp+28h] [bp-C4h] BYREF
  _BYTE v20[64]; // [sp+68h] [bp-84h] BYREF
  _BYTE v21[68]; // [sp+A8h] [bp-44h] BYREF
  int v22; // [sp+118h] [bp+2Ch]

  v12 = sub_86508((int)a1);
  v13 = sub_D14F4(v12);
  if ( !v13 || !sub_95EA8((int)a1) )
    goto LABEL_12;
  if ( !a8 )
    a7 = 0;
  v22 = a7;
  if ( sub_D1520(v13, v12, 0) > 0
    && sub_D16D8(v13, a6, v22) > 0
    && sub_D16E4(v13, v20, &v17) > 0
    && sub_D1520(v13, v12, 0) > 0
    && sub_D16E4(v13, v21, &v18) > 0
    && sub_A5334(a1, v12, (int)(a1 + 211), a4, a5, (int)v21, v18, (int)v19, v17, 0) )
  {
    v15 = sub_A5334(a1, v12, (int)v19, (int)"exporter", 8u, (int)v20, v17, a2, a3, 0) != 0;
  }
  else
  {
LABEL_12:
    v15 = 0;
  }
  sub_D1504(v13);
  return v15;
}
