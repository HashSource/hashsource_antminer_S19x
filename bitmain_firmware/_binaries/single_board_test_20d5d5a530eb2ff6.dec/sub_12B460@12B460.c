int __fastcall sub_12B460(int *a1, int a2)
{
  int v3; // [sp+4h] [bp-68h] BYREF
  __int64 v4; // [sp+8h] [bp-64h] BYREF
  _DWORD v5[11]; // [sp+10h] [bp-5Ch] BYREF
  _BYTE v6[48]; // [sp+3Ch] [bp-30h] BYREF

  v3 = a2;
  if ( !sub_12B1F4(a1, v5) || !sub_1603FC(&v3, v6) || !sub_16064C(&v4, (char *)&v4 + 4, v6, v5) )
    return -2;
  if ( (int)v4 > 0 || SHIDWORD(v4) > 0 )
    return 1;
  if ( v4 )
    return -1;
  return 0;
}
