int __fastcall sub_25066C(_DWORD *a1, int (__fastcall *a2)(int *, _DWORD *))
{
  _DWORD *v2; // r5
  _DWORD *v4; // r4
  int v5; // r1
  int v6; // r2
  int v7; // r1
  int v8; // r2
  _DWORD *v9; // r1
  int result; // r0
  int v11; // r1
  int v12; // r2
  int v13; // [sp+4h] [bp-10h] BYREF
  int v14; // [sp+8h] [bp-Ch]
  int v15; // [sp+Ch] [bp-8h]

  v2 = a1;
  v4 = a1 - 3;
  v5 = a1[1];
  v6 = a1[2];
  v13 = *a1;
  v14 = v5;
  v15 = v6;
  while ( 1 )
  {
    v9 = v4;
    v4 -= 3;
    if ( !a2(&v13, v9) )
      break;
    v2 = v4 + 3;
    v7 = v4[4];
    v8 = v4[5];
    v4[6] = v4[3];
    v4[7] = v7;
    v4[8] = v8;
  }
  result = v13;
  v11 = v14;
  v12 = v15;
  *v2 = v13;
  v2[1] = v11;
  v2[2] = v12;
  return result;
}
