void __fastcall sub_254E48(int a1, int a2, int a3, int a4, int a5, int a6, void *s, int a8)
{
  int v11; // r0
  int v12; // r0
  float v13; // s15
  double v14; // r0
  float v15; // s0
  int *v16; // r4
  int v17; // r2
  int v18; // r0
  bool v19; // zf
  char *v20; // r0
  float v21; // s15
  float v22; // [sp+4h] [bp-Ch] BYREF
  float v23; // [sp+8h] [bp-8h] BYREF
  float v24; // [sp+Ch] [bp-4h] BYREF

  v24 = 0.0;
  v11 = ((int (__fastcall *)(int))loc_173460)(a4);
  ((void (__fastcall *)(int, int, int, float *))loc_2545E4)(a1, v11, a3, &v22);
  v12 = ((int (__fastcall *)(int))loc_173460)(a6);
  ((void (__fastcall *)(int, int, int, float *))loc_2545E4)(a1, v12, a5, &v23);
  switch ( a2 )
  {
    case 1:
      v24 = v22 + v23;
      break;
    case 2:
      v24 = v22 - v23;
      break;
    case 3:
      v24 = v22 * v23;
      break;
    case 4:
      v24 = v22 / v23;
      break;
    case 24:
      LODWORD(v14) = _errno_location();
      v15 = v22;
      v16 = (int *)LODWORD(v14);
      *(_DWORD *)LODWORD(v14) = 0;
      pow(v14, COERCE_DOUBLE((unsigned __int64)v17));
      v18 = *v16;
      v19 = *v16 == 0;
      v24 = v15;
      if ( !v19 )
      {
        v20 = sub_6FF98(v18);
        sub_946E0("Cannot perform exponentiation: %s", v20);
      }
      return;
    case 25:
      v21 = v22;
      if ( v22 >= v23 )
        v21 = v23;
      v24 = v21;
      break;
    case 26:
      v13 = v22;
      if ( v22 <= v23 )
        v13 = v23;
      v24 = v13;
      break;
    default:
      sub_946E0("Integer-only operation on floating point number.");
  }
  sub_254E04(a1, a8, (int)&v24, s);
}
