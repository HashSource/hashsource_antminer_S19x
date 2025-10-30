_DWORD *__fastcall sub_2706B0(_DWORD *result, int a2, int a3)
{
  _DWORD *v4; // r4
  int v6; // r1
  _DWORD *v7; // r3
  int v8; // r2
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int (**v13)(); // [sp+28h] [bp-6Ch] BYREF
  _DWORD *v14; // [sp+2Ch] [bp-68h]
  int v15; // [sp+30h] [bp-64h]
  _DWORD v16[4]; // [sp+34h] [bp-60h] BYREF
  _DWORD v17[20]; // [sp+44h] [bp-50h] BYREF

  v4 = result;
  if ( a2 )
  {
    sub_256760(&v13);
    v13 = &off_3F2924;
    v6 = (unsigned __int8)aBoolIsPathExpr[4 * a3 + 88];
    v14 = v16;
    v15 = 0;
    LOBYTE(v16[0]) = 0;
    sub_266628(v17, v6);
    v17[13] = 0;
    v17[16] = 1;
    sub_266BC4(a2, (int)&v13, 0, v17, (int)off_46D5A4[0]);
    v7 = v14;
    *v4 = v4 + 2;
    if ( v7 == v16 )
    {
      v10 = v16[1];
      v11 = v16[2];
      v12 = v16[3];
      v4[2] = v16[0];
      v4[3] = v10;
      v4[4] = v11;
      v4[5] = v12;
    }
    else
    {
      v8 = v16[0];
      *v4 = v7;
      v4[2] = v8;
    }
    v9 = v15;
    v14 = v16;
    v15 = 0;
    v4[1] = v9;
    LOBYTE(v16[0]) = 0;
    sub_256478(&v13);
    return v4;
  }
  else
  {
    result[1] = 0;
    *((_BYTE *)result + 8) = 0;
    *result = result + 2;
  }
  return result;
}
