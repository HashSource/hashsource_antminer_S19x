int __fastcall sub_C8B2C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v11; // [sp+40h] [bp-8h] BYREF
  _BYTE v12[4]; // [sp+44h] [bp-4h] BYREF
  int varg_r0; // [sp+58h] [bp+10h]
  int varg_r1; // [sp+5Ch] [bp+14h]
  int varg_r2; // [sp+60h] [bp+18h]
  int varg_r3; // [sp+64h] [bp+1Ch]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  if ( (_BYTE)a8 )
    return a6;
  if ( !sub_21E5C4(varg_r0, varg_r1, varg_r2, varg_r3, a5, a6, a7, a8, a9, a10, v12, &v11) )
    sub_946E0("Could not find location of the end of the range.");
  return v11 - 1;
}
