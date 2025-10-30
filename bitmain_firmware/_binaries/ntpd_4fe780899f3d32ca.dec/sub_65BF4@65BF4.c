int __fastcall sub_65BF4(int a1, int a2)
{
  unsigned int v3; // r3
  int v4; // r1
  int v5; // r1
  int v6; // r2
  int v7; // r6
  __int16 v8; // r3
  char v9; // r3
  int result; // r0
  int v11; // [sp+0h] [bp-14h] BYREF
  int v12; // [sp+4h] [bp-10h] BYREF
  int v13; // [sp+8h] [bp-Ch]

  v3 = (unsigned __int8)(a2 % 7);
  v4 = a2 - 1;
  if ( v3 > 6 )
    LOBYTE(v3) = v3 + 7;
  *(_BYTE *)(a1 + 9) = v3;
  sub_65A30((unsigned int *)&v12, v4, (_BOOL4 *)&v11);
  v5 = v13;
  v6 = v11;
  if ( (unsigned int)(v12 + 1) >> 16 )
    v7 = 0;
  else
    v7 = -1;
  v8 = (v12 + 1) & v7;
  *(_WORD *)(a1 + 2) = v13 + 1;
  *(_WORD *)a1 = v8;
  sub_65B3C(&v12, v5, v6);
  v9 = v12;
  if ( v7 )
    result = v11;
  else
    result = -1;
  *(_BYTE *)(a1 + 5) = v13 + 1;
  *(_BYTE *)(a1 + 4) = v9 + 1;
  return result;
}
