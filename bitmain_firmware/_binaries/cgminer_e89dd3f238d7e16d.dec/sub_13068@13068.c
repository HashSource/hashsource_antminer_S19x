int __fastcall sub_13068(int result, _DWORD *a2)
{
  int v2; // [sp+4h] [bp-20h]
  double v3; // [sp+8h] [bp-1Ch] BYREF
  double v4; // [sp+10h] [bp-14h] BYREF
  _DWORD *v5; // [sp+18h] [bp-Ch]
  int v6; // [sp+1Ch] [bp-8h]

  v2 = result;
  v5 = a2;
  v4 = 0.0;
  v3 = 0.0;
  v6 = 0;
  if ( result )
  {
    sscanf(s, "%lf", &v4);
    sscanf(byte_94484, "%lf", &v3);
    if ( v3 * 0.95 > v4 || (dword_95D50 & 8) != 0 )
      v6 = -1;
    else
      v6 = 0;
    return sub_12F18(v2, v5, v6);
  }
  return result;
}
