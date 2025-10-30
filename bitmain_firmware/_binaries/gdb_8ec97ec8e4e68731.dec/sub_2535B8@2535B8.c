void __fastcall sub_2535B8(int a1, int a2, int a3, int a4, int a5, int a6, void *s, int a8)
{
  int v11; // r0
  int v12; // r0
  double v13; // d7
  double v14; // r0
  int *v15; // r4
  double v16; // d0
  int v17; // r2
  int v18; // r0
  char *v19; // r0
  double v20; // d7
  double v21; // [sp+0h] [bp-18h] BYREF
  double v22; // [sp+8h] [bp-10h] BYREF
  double v23; // [sp+10h] [bp-8h] BYREF

  v23 = 0.0;
  v11 = ((int (__fastcall *)(int))loc_173460)(a4);
  ((void (__fastcall *)(int, int, int, double *))loc_252D68)(a1, v11, a3, &v21);
  v12 = ((int (__fastcall *)(int))loc_173460)(a6);
  ((void (__fastcall *)(int, int, int, double *))loc_252D68)(a1, v12, a5, &v22);
  switch ( a2 )
  {
    case 1:
      v23 = v21 + v22;
      break;
    case 2:
      v23 = v21 - v22;
      break;
    case 3:
      v23 = v21 * v22;
      break;
    case 4:
      v23 = v21 / v22;
      break;
    case 24:
      LODWORD(v14) = _errno_location();
      v15 = (int *)LODWORD(v14);
      *(_DWORD *)LODWORD(v14) = 0;
      v16 = v21;
      pow(v14, COERCE_DOUBLE((unsigned __int64)v17));
      v18 = *v15;
      v23 = v16;
      if ( v18 )
      {
        v19 = sub_6FF98(v18);
        sub_946E0("Cannot perform exponentiation: %s", v19);
      }
      return;
    case 25:
      v20 = v21;
      if ( v21 >= v22 )
        v20 = v22;
      v23 = v20;
      break;
    case 26:
      v13 = v21;
      if ( v21 <= v22 )
        v13 = v22;
      v23 = v13;
      break;
    default:
      sub_946E0("Integer-only operation on floating point number.");
  }
  sub_253574(a1, a8, (int)&v23, s);
}
