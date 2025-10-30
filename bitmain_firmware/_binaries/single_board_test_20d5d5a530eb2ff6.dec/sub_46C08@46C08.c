bool __fastcall sub_46C08(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r7
  _BOOL4 result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r2
  _DWORD v14[8]; // [sp+0h] [bp-128h] BYREF
  _BYTE s[32]; // [sp+20h] [bp-108h] BYREF
  _DWORD v16[58]; // [sp+40h] [bp-E8h] BYREF

  v3 = bswap32(a2);
  memset(v14, 0, sizeof(v14));
  memset(s, 0, sizeof(s));
  result = (_BOOL4)a1;
  if ( a1 )
  {
    v5 = a1[7];
    v6 = a1[8];
    v7 = a1[9];
    v16[2] = a1[6];
    v16[3] = v5;
    v16[4] = v6;
    v16[5] = v7;
    v8 = a1[11];
    v9 = a1[12];
    v10 = a1[13];
    v16[6] = a1[10];
    v16[7] = v8;
    v16[8] = v9;
    v16[9] = v10;
    sub_6AAD0(&v16[2], 32);
    v11 = a1[3];
    v16[0] = 80;
    v16[1] = 0;
    v12 = a1[4];
    v13 = a1[5];
    v14[0] = v11;
    v14[1] = v12;
    v14[2] = v13;
    sub_6AAD0(v14, 12);
    sub_6AB0C(&v16[10], v14, 12);
    v14[0] = v3;
    sub_6AAD0(v14, 4);
    sub_6AB0C(&v16[13], v14, 4);
    sub_6D8D8((int)v16);
    memset(v16, 0, sizeof(v16));
    sub_6D9DC(v14);
    sub_6AAF4(v14, s);
    return v14[7] != 0;
  }
  return result;
}
