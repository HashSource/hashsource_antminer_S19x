void __fastcall sub_6492C(int a1, _DWORD *a2, int a3)
{
  int *v5; // r0
  bool v6; // zf
  int v7; // r4
  int v8; // r5
  void *ptr; // [sp+Ch] [bp-70h] BYREF
  _DWORD v10[3]; // [sp+10h] [bp-6Ch] BYREF
  char v11; // [sp+1Ch] [bp-60h] BYREF
  _BYTE v12[52]; // [sp+2Ch] [bp-50h] BYREF
  int v13; // [sp+60h] [bp-1Ch]

  v5 = (int *)sub_242FDC(a1);
  v6 = a3 == 1;
  v7 = *v5;
  if ( !v6 )
    sub_946E0("-data-evaluate-expression: Usage: -data-evaluate-expression expression");
  sub_1C42A8(&ptr, *a2);
  v8 = sub_14CD3C(ptr);
  sub_256760(v10);
  v10[1] = &v11;
  v10[0] = &off_3F2924;
  v10[2] = 0;
  v11 = 0;
  sub_2665F0(v12);
  v13 = 0;
  sub_266BC4(v8, v10, 0, v12, off_46D5A4[0]);
  sub_25765C(v7, "value", v10);
  sub_256478(v10);
  if ( ptr )
    free(ptr);
}
