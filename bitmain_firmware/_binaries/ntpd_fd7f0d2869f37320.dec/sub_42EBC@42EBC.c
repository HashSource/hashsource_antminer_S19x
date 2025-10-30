int __fastcall sub_42EBC(
        int a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        unsigned __int8 *a15)
{
  double v15; // d0
  double v16; // d1
  int result; // r0
  unsigned int v22; // r11
  const char *v23; // r10
  const char *v24; // r8
  const char *v25; // r7
  const char *v26; // r6
  const char *v27; // r5
  const char *v28; // r0
  unsigned __int8 *v29; // r4
  int v30; // t1
  int v31; // [sp+74h] [bp-20h]
  const char *v32; // [sp+78h] [bp-1Ch]
  const char *v33; // [sp+7Ch] [bp-18h]
  unsigned int v34; // [sp+84h] [bp-10h] BYREF

  result = a7;
  if ( stats_control )
  {
    sub_6055C(&v34);
    sub_2C1C4((int)&dword_BDC44, v34);
    v31 = dword_BDC44;
    result = v34 - (_DWORD)&loc_15180 * (v34 / 0x15180);
    v22 = v34 / 0x15180 + 15020;
    v34 = result;
    if ( dword_BDC44 )
    {
      v32 = (const char *)sub_6474C(result);
      if ( a1 )
        v33 = (const char *)sub_6D2C0(a1);
      else
        v33 = "-";
      if ( a2 )
        v23 = (const char *)sub_6D2C0(a2);
      else
        v23 = "-";
      v24 = (const char *)sub_6474C(*a3);
      v25 = (const char *)sub_6474C(*a4);
      v26 = (const char *)sub_6474C(*a5);
      v27 = (const char *)sub_6474C(*a6);
      v28 = (const char *)sub_6A72C(a13, a10);
      _fprintf_chk(
        v31,
        1,
        "%lu %s %s %s %s %s %s %s %d %d %d %d %d %d %.6f %.6f %s",
        v22,
        v32,
        v33,
        v23,
        v24,
        v25,
        v26,
        v27,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        v15,
        v16,
        v28);
      if ( a14 > 0 )
      {
        v29 = a15;
        _fprintf_chk(dword_BDC44, 1, " %d: ", a14);
        do
        {
          v30 = *v29++;
          _fprintf_chk(dword_BDC44, 1, "%02x", v30);
        }
        while ( v29 != &a15[a14] );
      }
      fputc(10, (FILE *)dword_BDC44);
      return fflush((FILE *)dword_BDC44);
    }
  }
  return result;
}
