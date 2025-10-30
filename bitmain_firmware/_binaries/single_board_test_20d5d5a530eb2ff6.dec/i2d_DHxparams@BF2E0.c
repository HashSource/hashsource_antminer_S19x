int __fastcall i2d_DHxparams(_DWORD *a1, _BYTE **a2)
{
  _DWORD *v2; // r2
  size_t v3; // r6
  size_t v4; // r5
  size_t v5; // r4
  _DWORD *v6; // r3
  int v7; // r0
  _DWORD v9[2]; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v10[4]; // [sp+Ch] [bp-24h] BYREF
  size_t v11[5]; // [sp+1Ch] [bp-14h] BYREF

  v2 = (_DWORD *)a1[13];
  v3 = a1[2];
  v4 = a1[3];
  v5 = a1[9];
  v11[3] = a1[10];
  v6 = v2;
  v11[0] = v3;
  v11[2] = v4;
  v11[1] = v5;
  if ( v2 )
  {
    v6 = (_DWORD *)a1[11];
    if ( v6 )
    {
      v7 = a1[12];
      if ( v7 <= 0 )
        v6 = 0;
      else
        v10[2] = v6;
      if ( v7 > 0 )
      {
        v6 = v9;
        v10[0] = v7;
        v9[1] = v2;
        v10[3] = 8;
        v9[0] = v10;
      }
    }
  }
  v11[4] = (size_t)v6;
  return sub_BF24C(v11, a2);
}
