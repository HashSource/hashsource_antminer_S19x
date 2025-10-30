int __fastcall sub_3C638(int a1, int a2, int a3, int a4)
{
  int v8; // r8
  int v9; // r6
  int v10; // r5
  _DWORD v12[3]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v13[16]; // [sp+1Ch] [bp-10h] BYREF

  v8 = sub_22F158();
  v9 = sub_9253C(nullsub_39, 0);
  if ( !v8 )
  {
    sub_231B78(a1);
    sub_258998(a1);
  }
  v10 = sub_3DCF8(a2, a3, a4, sub_3C704, 0, 0, 0, 0);
  sub_98F50(v12, v10);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))loc_23FA8C)(v12[0], v12[1], v12[2]);
  sub_92640(v9);
  sub_3D28C(v13, v10, 1);
  return off_489A68();
}
