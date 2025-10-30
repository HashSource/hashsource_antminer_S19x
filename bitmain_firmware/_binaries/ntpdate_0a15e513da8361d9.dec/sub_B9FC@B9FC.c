int __fastcall sub_B9FC(int a1, int a2)
{
  unsigned __int8 v3; // r3
  signed int v4; // r1
  int v5; // r1
  __int16 v6; // r3
  int v7; // r2
  bool v8; // zf
  int v9; // r6
  char v10; // r3
  int v12; // [sp+0h] [bp-10h] BYREF
  int v13; // [sp+4h] [bp-Ch] BYREF
  int v14; // [sp+8h] [bp-8h]

  v3 = a2 % 7;
  v4 = a2 - 1;
  if ( v3 > 6u )
    v3 += 7;
  *(_BYTE *)(a1 + 9) = v3;
  sub_B834((unsigned int *)&v13, v4, (_BOOL4 *)&v12);
  v5 = v14;
  v6 = v13 + 1;
  v7 = v12;
  v8 = (unsigned int)(v13 + 1) >> 16 == 0;
  *(_WORD *)(a1 + 2) = v14 + 1;
  if ( v8 )
    v9 = -1;
  else
    v9 = 0;
  *(_WORD *)a1 = v6 & v9;
  sub_B940(&v13, v5, v7);
  v10 = v13;
  *(_BYTE *)(a1 + 5) = v14 + 1;
  *(_BYTE *)(a1 + 4) = v10 + 1;
  if ( v9 )
    return v12;
  else
    return -1;
}
