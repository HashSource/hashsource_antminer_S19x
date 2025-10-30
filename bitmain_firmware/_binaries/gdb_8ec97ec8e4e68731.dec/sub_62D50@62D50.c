int __fastcall sub_62D50(int a1, int a2, int a3, int a4)
{
  int *v8; // r0
  int v9; // r1
  int v10; // r5
  int v11; // r7
  int result; // r0
  int v13; // r4
  __int64 v14; // r0
  _DWORD v15[3]; // [sp+18h] [bp-68h] BYREF
  char v16; // [sp+24h] [bp-5Ch] BYREF
  _BYTE src[52]; // [sp+34h] [bp-4Ch] BYREF
  int v18; // [sp+68h] [bp-18h]

  v8 = (int *)sub_242FDC(a1);
  v9 = a1;
  v10 = *v8;
  v11 = sub_15B1AC(a2, v9);
  if ( !a4 || (result = sub_26E65C()) != 0 )
  {
    sub_2578AC(v10, 0);
    sub_257504(v10, "number", a2);
    if ( a3 == 78 )
    {
      LOBYTE(a3) = 0;
    }
    else if ( a3 == 114 )
    {
      LOBYTE(a3) = 122;
    }
    sub_256760(v15);
    v15[0] = &off_3F2924;
    v15[1] = &v16;
    v15[2] = 0;
    v16 = 0;
    sub_266628(src, (unsigned __int8)a3);
    v18 = 1;
    v13 = sub_26BC70(v11);
    v14 = sub_26BFE0(v11);
    sub_2669E8(v13, 0, v14, SHIDWORD(v14), 0, (int)v15, 0, v11, src, (int)off_46D5A4[0]);
    sub_25765C(v10, "value", v15);
    sub_256478(v15);
    return sub_25734C(v10, 0);
  }
  return result;
}
