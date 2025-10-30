int __fastcall sub_2E2F0(int a1, int a2, time_t *a3)
{
  _QWORD *v6; // r0
  int v7; // r3
  int v8; // r8
  int v9; // r0
  int v10; // r2
  int v12; // r0
  int v13; // r3
  int v14; // r1
  __int16 v15; // r12
  __int16 v16; // r2
  __int16 v17; // r2
  __int64 v18; // [sp+0h] [bp-34h] BYREF
  __int64 v19; // [sp+8h] [bp-2Ch] BYREF
  __int64 v20; // [sp+10h] [bp-24h] BYREF
  __int64 v21; // [sp+18h] [bp-1Ch] BYREF
  __int16 v22; // [sp+20h] [bp-14h]

  v6 = sub_2D4D0(0);
  v7 = *((__int16 *)v6 + 17);
  v8 = (int)v6;
  if ( *((_WORD *)v6 + 17) )
    v7 = 1;
  if ( a1 <= 9 )
    v7 |= 1u;
  if ( v7 )
    return 0;
  v9 = *((unsigned __int16 *)v6 + 16);
  if ( v9 )
  {
    if ( !*(_BYTE *)(v8 + 94) )
      return 0;
    v10 = v8;
    while ( ++v7 != v9 )
    {
      v10 += 16;
      if ( !*(_BYTE *)(v10 + 94) )
        return 0;
    }
  }
  sub_6694C((int)&v18, a2, a3);
  v19 = v18;
  sub_2D280((int)&v20, v8, (int)&v19);
  sub_6EBD8(&v18, &v20, 20);
  v20 = v18;
  if ( sub_6EAC0(&v19, &v20) < 0 )
    return 0;
  sub_6EBD8(&v18, &v21, -20);
  v21 = v18;
  if ( sub_6EAC0(&v19, &v21) > 0 )
    return 0;
  v12 = *(unsigned __int16 *)(v8 + 32);
  v13 = (unsigned __int16)(a1 - v22);
  v14 = v13 + *(unsigned __int16 *)(v8 + 36);
  v15 = v13 + *(_WORD *)(v8 + 34);
  v16 = v13 + *(_WORD *)(v8 + 38);
  *(_WORD *)(v8 + 36) = v14;
  *(_WORD *)(v8 + 34) = v15;
  if ( v12 )
    v14 = 0;
  *(_WORD *)(v8 + 38) = v16;
  if ( v12 )
  {
    do
    {
      ++v14;
      v17 = *(_WORD *)(v8 + 92);
      v8 += 16;
      *(_WORD *)(v8 + 76) = v13 + v17;
    }
    while ( v14 != v12 );
  }
  return 1;
}
