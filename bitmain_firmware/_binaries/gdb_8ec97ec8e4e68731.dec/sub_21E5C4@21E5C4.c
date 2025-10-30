int __fastcall sub_21E5C4(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11,
        _DWORD *a12)
{
  unsigned int v12; // r12
  int result; // r0
  int v14; // r3
  int v15; // r2
  int v16[5]; // [sp+0h] [bp-48h] BYREF
  int v17; // [sp+14h] [bp-34h]
  int v18; // [sp+18h] [bp-30h]
  int v19; // [sp+38h] [bp-10h]
  int v20; // [sp+3Ch] [bp-Ch]
  int v21; // [sp+40h] [bp-8h]
  int v22; // [sp+44h] [bp-4h]

  v12 = a6;
  v19 = a1;
  v20 = a2;
  v21 = a3;
  v22 = a4;
  if ( a6 )
    goto LABEL_5;
  result = v20;
  if ( v20 )
  {
    result = sub_21E260(v20, a5, v16, 0);
    if ( result )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(result + 8) + 8 * v16[0] + 8);
LABEL_5:
      sub_21DF08(v16, v12, v22, 0);
      v14 = v17;
      if ( a5 == v16[4] )
      {
        v15 = v18;
        *a11 = v17;
        *a12 = v15;
        return 1;
      }
      else
      {
        result = 1;
        *a11 = v17;
        *a12 = v14;
      }
    }
  }
  return result;
}
