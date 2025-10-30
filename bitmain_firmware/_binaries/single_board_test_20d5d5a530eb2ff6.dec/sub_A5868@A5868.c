int __fastcall sub_A5868(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r9
  int v8; // r5
  int v9; // r0
  int v10; // r3
  int v11; // r7
  bool v12; // zf
  int v13; // r3
  int v14; // r4
  _DWORD *v15; // r0
  int v17; // r0
  int v18; // [sp+Ch] [bp-88h] BYREF
  _BYTE v19[64]; // [sp+10h] [bp-84h] BYREF
  _BYTE v20[68]; // [sp+50h] [bp-44h] BYREF

  v7 = sub_86508((int)a1);
  v8 = sub_D14F4(v7);
  v9 = sub_8B6E8((int)a1, (int)v19, 0x40u, (unsigned int *)&v18);
  if ( !v9 )
    goto LABEL_19;
  if ( *(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 32) == a2 )
  {
    v11 = sub_DA2B8(855, 0, a1 + 131, v18);
    goto LABEL_6;
  }
  v10 = a1[31];
  if ( *(_DWORD *)(v10 + 384) && *(_DWORD *)(v10 + 516) )
  {
    v17 = sub_86508((int)a1);
    v9 = sub_A55D0(a1, v17, (int)(a1 + 179), (int)v20, v18);
    if ( v9 )
    {
      v11 = sub_DA2B8(855, 0, v20, v18);
      sub_E07F8((int)v20, 0x40u);
      goto LABEL_6;
    }
LABEL_19:
    v11 = v9;
    v14 = v9;
    goto LABEL_17;
  }
  v11 = sub_DA2B8(855, 0, a1 + 115, v18);
LABEL_6:
  v12 = v8 == 0;
  if ( v8 )
    v12 = v11 == 0;
  v13 = v12;
  if ( v12 || sub_D9454(v8, v13, v7) <= 0 || sub_D16D8(v8, v19, v18) <= 0 || sub_D9644(v8, a4, &v18) <= 0 )
  {
    v15 = a1;
    v14 = 0;
    sub_95494(v15, 80, 605, 68, (int)"ssl/tls13_enc.c", 328);
  }
  else
  {
    v14 = v18;
  }
LABEL_17:
  sub_DA240(v11);
  sub_D1504(v8);
  return v14;
}
