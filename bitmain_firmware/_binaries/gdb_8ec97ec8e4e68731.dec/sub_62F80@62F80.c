int __fastcall sub_62F80(int result)
{
  _DWORD *v1; // r4
  int v2; // r5
  double v3; // d9
  double v4; // r0
  double v5; // [sp+8h] [bp-2Ch]
  __int64 v6; // [sp+10h] [bp-24h] BYREF
  __int64 v7; // [sp+18h] [bp-1Ch]
  __int64 v8; // [sp+20h] [bp-14h] BYREF
  __int64 v9; // [sp+28h] [bp-Ch] BYREF

  v1 = (_DWORD *)dword_474868;
  if ( dword_474868 )
  {
    v2 = result;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    sub_33B25C(&v6);
    v7 = v6;
    sub_997A4(&v8, &v9);
    v3 = sub_347C5C((int)v7 - *v1, (unsigned __int64)(v7 - *(_QWORD *)v1) >> 32) / 1000000000.0;
    v5 = sub_347C5C((int)v9 - v1[4], (unsigned __int64)(v9 - *((_QWORD *)v1 + 2)) >> 32) / 1000000.0;
    v4 = sub_347C5C((int)v8 - v1[2], (unsigned __int64)(v8 - *((_QWORD *)v1 + 1)) >> 32);
    return sub_2594B0(v2, ",time={wallclock=\"%0.5f\",user=\"%0.5f\",system=\"%0.5f\"}", v3, v4 / 1000000.0, v5);
  }
  return result;
}
