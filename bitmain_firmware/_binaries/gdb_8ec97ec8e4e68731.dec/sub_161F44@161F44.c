__int64 __fastcall sub_161F44(int a1, int *a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v6; // r8
  __int64 v7; // r0
  __int64 i; // r4
  int v10; // r0
  __int64 v11; // r2
  int v13; // r4
  int *v14; // r0
  int v15; // r12
  int v16; // r1
  int v17; // [sp+1Ch] [bp-8h] BYREF

  v6 = *a2;
  v7 = a5;
  if ( a5 < 1 )
    return 0;
  for ( i = 0; i < a5; i += v11 )
  {
    sub_258BD4(v7);
    v10 = sub_231258(
            v6,
            a3 + i,
            a5 - i,
            (unsigned __int64)(a6 + i) >> 32,
            a6 + i,
            (unsigned __int64)(a6 + i) >> 32,
            &v17);
    v11 = v10;
    if ( !v10 )
      break;
    LODWORD(v7) = -1;
    if ( v11 == -1 )
    {
      v13 = v17;
      v14 = _errno_location();
      v16 = v13 - 1;
      if ( (unsigned int)(v13 - 1) > 0x5A )
        v16 = -1;
      else
        LOWORD(v15) = -21564;
      if ( (unsigned int)(v13 - 1) <= 0x5A )
      {
        HIWORD(v15) = 58;
        v16 = *(char *)(v15 + v16);
      }
      *v14 = v16;
      ((void (__fastcall *)(int))loc_2A6C48)(1);
      return -1;
    }
  }
  return i;
}
