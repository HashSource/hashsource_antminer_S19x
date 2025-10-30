int __fastcall sub_CAC1C(unsigned __int8 *a1, int a2, int a3, unsigned __int8 *a4)
{
  int v4; // r0
  unsigned __int8 *v6; // [sp+4h] [bp-18h] BYREF
  int v7; // [sp+8h] [bp-14h] BYREF
  _DWORD v8[3]; // [sp+Ch] [bp-10h] BYREF

  v6 = a1;
  if ( !a1 )
    sub_51E9C("hit count");
  v4 = sub_5ADBC(&v6, a2, a3, a4);
  v8[0] = &v7;
  v8[1] = v8;
  v7 = v4;
  v8[2] = sub_DC8A4;
  return sub_CABA0(v6, (int)v8, (int (__fastcall *)(int, int, int))sub_DC8A4);
}
