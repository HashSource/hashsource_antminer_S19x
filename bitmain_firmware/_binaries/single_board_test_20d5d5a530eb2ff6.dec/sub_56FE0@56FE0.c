int __fastcall sub_56FE0(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r9
  int v4; // r3
  int v5; // r4
  int v6; // r6
  int v7; // r8
  int v8; // r7
  unsigned int v9; // r3
  int v10; // r5
  int v11; // r0

  if ( !a2 )
  {
    v8 = 8;
    v5 = a1 == 0;
    v7 = 8;
LABEL_19:
    v3 = 0xFFFF;
    v6 = 0x10000;
    goto LABEL_13;
  }
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 36);
  v6 = *(_DWORD *)(a2 + 8) + 1;
  v7 = 4 * v6;
  v8 = 4 * *(_DWORD *)(a2 + 28) + 4;
  if ( !a1 )
    v5 |= 1u;
  if ( !v4 )
    goto LABEL_19;
  v9 = v4 - 4;
  if ( v9 > 3 )
    v3 = -3;
  else
    a2 = 204;
  if ( v9 > 3 )
    v6 = -2;
  else
    HIWORD(a2) = 26;
  if ( v9 <= 3 )
  {
    v6 = *(_DWORD *)(a2 + 4 * v9);
    v3 = v6 - 1;
  }
LABEL_13:
  if ( a3 > v3 )
    v10 = a1 + v3;
  else
    v10 = a1 + a3;
  v11 = sub_189090(v10, v6);
  if ( v5 )
    return (v10 & v3) + v7 + v6 * v11 + v8 * (((v10 & v3) != 0) + v11);
  else
    return v7 + v6 * v11 + v8 * v11;
}
