int __fastcall sub_10ADB0(char *a1, void *a2, signed int a3)
{
  int v6; // r4
  int v7; // r8
  int v8; // r9
  int v9; // r8
  char *v10; // r1
  int v11; // r2
  int v12; // r5
  _BYTE src[4]; // [sp+Ch] [bp-Ch] BYREF
  int v15; // [sp+10h] [bp-8h] BYREF
  int v16; // [sp+14h] [bp-4h] BYREF

  v6 = sub_15DA78();
  v15 = 0;
  v7 = v6;
  v16 = 0;
  src[0] = 0;
  src[1] = 0;
  if ( !v6 )
    return v7;
  sub_15DAAC();
  sub_15DAA8(v6, 3);
  v8 = 3 - a3 % 3;
  if ( !(a3 % 3) || (v9 = sub_15DABC(v6, (int)a1, (int)&v15, src, 3 - a3 % 3)) != 0 )
  {
    v9 = sub_15DABC(v6, (int)&a1[v15], (int)&v16, a2, a3);
    if ( v9 )
    {
      v10 = &a1[v16 + v15];
      v15 += v16;
      sub_15DBE4(v6, v10, &v16);
      v11 = v16 + v15;
      v15 += v16;
      if ( v8 != 3 )
      {
        v12 = v11 - v8;
        memmove(a1, &a1[v8], v11 - v8);
        a1[v12] = 0;
      }
      v7 = 1;
      sub_15DA88(v6);
      return v7;
    }
  }
  sub_15DA88(v6);
  return v9;
}
