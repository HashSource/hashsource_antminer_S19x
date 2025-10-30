int __fastcall sub_2E14C(int a1, int a2, time_t *a3)
{
  _QWORD *v6; // r4
  int v7; // r5
  int v8; // r5
  __int16 v9; // r12
  __int16 v10; // r3
  int result; // r0
  __int64 v12; // [sp+0h] [bp-38h] BYREF
  __int64 v13; // [sp+8h] [bp-30h] BYREF
  _BYTE v14[4]; // [sp+14h] [bp-24h] BYREF
  char v15; // [sp+18h] [bp-20h]
  char v16; // [sp+19h] [bp-1Fh]
  char v17; // [sp+1Ah] [bp-1Eh]
  char v18; // [sp+1Bh] [bp-1Dh]
  char v19; // [sp+1Ch] [bp-1Ch]
  __int64 v20; // [sp+20h] [bp-18h] BYREF
  int v21; // [sp+28h] [bp-10h]
  __int16 v22; // [sp+2Ch] [bp-Ch]
  char v23; // [sp+2Eh] [bp-Ah]

  v6 = sub_2D4D0(1);
  sub_6694C((int)&v12, a2, a3);
  v13 = v12;
  if ( sub_6EAC0(&v13, v6 + 3) < 0 || *((_WORD *)v6 + 16) && sub_6EAC0(&v13, v6 + 10) <= 0 )
  {
    *_errno_location() = 34;
    return 0;
  }
  sub_676E0(v14, &v13);
  if ( v16 == 1 && !v17 )
  {
    *_errno_location() = 22;
    return 0;
  }
  v16 = 1;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  sub_677BC(&v12, v14);
  v7 = v12;
  ++v15;
  sub_677BC(&v12, v14);
  v8 = v12 - v7;
  if ( *((_WORD *)v6 + 16) )
    v9 = *((_WORD *)v6 + 46);
  else
    v9 = *((_WORD *)v6 + 17);
  v20 = v12;
  v10 = -1;
  if ( a1 )
    v10 = 1;
  v21 = v8;
  v23 = 1;
  v22 = v10 + v9;
  result = sub_2CE2C((int)v6, (int)&v20);
  if ( result )
    return sub_2D580(v6) != 0;
  return result;
}
