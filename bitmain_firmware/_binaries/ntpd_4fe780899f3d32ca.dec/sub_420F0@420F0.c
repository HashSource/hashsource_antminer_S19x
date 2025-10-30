int __fastcall sub_420F0(
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
        int a15)
{
  double v15; // d0
  double v16; // d1
  int result; // r0
  unsigned int v22; // r11
  const char *v23; // r9
  const char *v24; // r7
  const char *v25; // r6
  const char *v26; // r5
  const char *v27; // r4
  const char *v28; // r0
  int v29; // r4
  int v30; // t1
  int v31; // [sp+74h] [bp-20h]
  const char *v32; // [sp+78h] [bp-1Ch]
  const char *v33; // [sp+7Ch] [bp-18h]
  unsigned int v34; // [sp+84h] [bp-10h] BYREF

  result = a7;
  if ( stats_control )
  {
    sub_5F724(&v34);
    sub_2BE54((int)&dword_BCC34, v34);
    v22 = v34;
    v31 = dword_BCC34;
    result = v34 - (_DWORD)&off_15180 * (v34 / 0x15180);
    v34 = result;
    if ( dword_BCC34 )
    {
      v32 = (const char *)sub_63804(result);
      if ( a1 )
        v33 = (const char *)sub_6C2E8(a1);
      else
        v33 = "-";
      if ( a2 )
        v23 = (const char *)sub_6C2E8(a2);
      else
        v23 = "-";
      v24 = (const char *)sub_63804(*a3);
      v25 = (const char *)sub_63804(*a4);
      v26 = (const char *)sub_63804(*a5);
      v27 = (const char *)sub_63804(*a6);
      v28 = (const char *)sub_697A8(a13, a10);
      _fprintf_chk(
        v31,
        1,
        "%lu %s %s %s %s %s %s %s %d %d %d %d %d %d %.6f %.6f %s",
        v22 / 0x15180 + 15020,
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
        v29 = a15 - 1;
        _fprintf_chk(dword_BCC34, 1, " %d: ", a14);
        do
        {
          v30 = *(unsigned __int8 *)++v29;
          _fprintf_chk(dword_BCC34, 1, "%02x", v30);
        }
        while ( v29 != a15 - 1 + a14 );
      }
      fputc(10, (FILE *)dword_BCC34);
      return fflush((FILE *)dword_BCC34);
    }
  }
  return result;
}
