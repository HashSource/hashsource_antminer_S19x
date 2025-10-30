int sub_D0CF4(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        ...)
{
  int v14; // r9
  int v15; // r8
  int v16; // r6
  _BOOL4 v17; // r6
  int v18; // r3
  int v19; // r0
  int result; // r0
  int v21; // r1
  int v22; // r3
  int v23; // r0
  _DWORD var4[9]; // [sp+2Ch] [bp-4h] BYREF
  int varg_r2; // [sp+50h] [bp+20h]
  int varg_r3; // [sp+54h] [bp+24h]
  int v27; // [sp+78h] [bp+48h] BYREF
  va_list va; // [sp+78h] [bp+48h]
  int v29; // [sp+7Ch] [bp+4Ch]
  int v30; // [sp+80h] [bp+50h]
  int v31; // [sp+84h] [bp+54h]
  int v32; // [sp+88h] [bp+58h]
  va_list va1; // [sp+8Ch] [bp+5Ch] BYREF

  va_start(va1, a12);
  va_start(va, a12);
  v27 = va_arg(va1, _DWORD);
  v29 = va_arg(va1, _DWORD);
  v30 = va_arg(va1, _DWORD);
  v31 = va_arg(va1, _DWORD);
  v32 = va_arg(va1, _DWORD);
  varg_r2 = a3;
  varg_r3 = a4;
  v14 = v29;
  v15 = v30;
  v16 = v31;
  if ( v32 )
  {
    v23 = sub_CFD40(varg_r2, varg_r3, a5, a6);
    if ( !v23 )
      v23 = a2;
    sub_C879C(v23, varg_r2, a8, a6, -1);
  }
  ((void (__fastcall *)(_DWORD *, int, int, int, int, int, int, int, int, int, int, int, int, int))loc_D017C)(
    a1,
    a2,
    varg_r2,
    varg_r3,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    1,
    v14);
  v17 = v16 != 0;
  if ( v15 )
    v18 = 0;
  else
    v18 = 3;
  a1[5] = v18;
  a1[4] = v17;
  v19 = sub_194438(14);
  result = sub_19DBE0(var4, (int *)va, v19, 0);
  v21 = a1[19];
  v22 = var4[0];
  var4[0] = 0;
  a1[19] = v22;
  if ( v21 )
  {
    result = ((int (__fastcall *)(_DWORD *))loc_19D154)(a1 + 19);
    if ( var4[0] )
      result = ((int (__fastcall *)(_DWORD *))loc_19D154)(var4);
  }
  a1[23] = 14;
  return result;
}
