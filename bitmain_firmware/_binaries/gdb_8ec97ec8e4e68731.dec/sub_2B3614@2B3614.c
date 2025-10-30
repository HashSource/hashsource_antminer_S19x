int __fastcall sub_2B3614(int a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v7; // r12
  char v8; // r7
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  bool v13; // zf
  int v14; // r12
  int v15; // r3
  _DWORD v17[3]; // [sp+4h] [bp-14h] BYREF
  int v18; // [sp+10h] [bp-8h]
  int v19; // [sp+14h] [bp-4h]

  if ( (*((_BYTE *)a2 + 14) & 3) == 1 )
  {
    v7 = a2;
    v8 = *((_BYTE *)a2 + 12);
    v9 = *a2;
    v10 = a2[1];
    v11 = v7[2];
    v12 = v7[3];
    v13 = (v8 & 0xF) == 10;
    v14 = v7[4];
    if ( (v8 & 0xF) != 0xA )
      v8 &= 0xF0u;
    v17[0] = v9;
    v17[1] = v10;
    v17[2] = v11;
    v18 = v12;
    if ( !v13 )
      LOBYTE(v18) = v8 + 2;
    v19 = v14;
    v15 = v14;
    if ( v14 )
      v15 = v17[0];
    a2 = v17;
    if ( v19 )
      v17[0] = v15 | 1;
  }
  return sub_2C862C(a1, a2, a3, a4);
}
