int __fastcall sub_10BEE8(int a1, int a2, int a3, unsigned int a4, int a5, char a6, _DWORD *a7)
{
  int v8; // r4
  int v10; // r0
  _DWORD v12[3]; // [sp+4h] [bp-E8h] BYREF
  int v13[40]; // [sp+10h] [bp-DCh] BYREF
  _DWORD v14[3]; // [sp+B0h] [bp-3Ch] BYREF
  char v15; // [sp+BCh] [bp-30h] BYREF
  _DWORD v16[3]; // [sp+CCh] [bp-20h] BYREF
  char v17; // [sp+D8h] [bp-14h] BYREF

  v8 = 0;
  v12[0] = a3;
  v12[2] = 0;
  v12[1] = 0;
  sub_10BABC(v13, a1, (int)v14, (int)sub_10B840);
  sub_256760(v14);
  v14[2] = 0;
  v15 = 0;
  v14[0] = &off_3F2924;
  v14[1] = &v15;
  sub_256760(v16);
  v16[0] = &off_3F2924;
  v16[1] = &v17;
  v16[2] = 0;
  v17 = 0;
  while ( v12[0] < a4 )
  {
    if ( v8 == a5 )
      break;
    v10 = sub_10BBCC(v13, a2, (int)v12, a6);
    if ( v10 <= 0 )
      break;
    ++v8;
    v12[0] += v10;
    sub_258BD4(v12[0]);
  }
  if ( a7 )
    *a7 = v12[0];
  sub_256478(v16);
  sub_256478(v14);
  return v8;
}
