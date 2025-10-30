int __fastcall sub_2DE9C(int a1, int a2, time_t *a3)
{
  _WORD *v6; // r0
  int v7; // r3
  int v9; // r8
  int v10; // r0
  int v11; // r2
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

  v6 = sub_2D0F4(0);
  v7 = a1 <= 9;
  if ( v6[17] )
    v7 = 1;
  if ( v7 )
    return 0;
  v9 = (int)v6;
  v10 = (unsigned __int16)v6[16];
  if ( v10 )
  {
    if ( !*(_BYTE *)(v9 + 94) )
      return 0;
    v11 = v9;
    while ( ++v7 != v10 )
    {
      v11 += 16;
      if ( !*(_BYTE *)(v11 + 94) )
        return 0;
    }
  }
  sub_658E8((int)&v18, a2, a3);
  v19 = v18;
  sub_2CF08((int)&v20, v9, (int)&v19);
  sub_6DC24(&v18, &v20, 20);
  v20 = v18;
  if ( sub_6DAF4(&v19, &v20) < 0 )
    return 0;
  sub_6DC24(&v18, &v21, -20);
  v21 = v18;
  if ( sub_6DAF4(&v19, &v21) > 0 )
    return 0;
  v12 = *(unsigned __int16 *)(v9 + 32);
  v13 = (unsigned __int16)(a1 - v22);
  v14 = v13 + *(unsigned __int16 *)(v9 + 36);
  v15 = v13 + *(_WORD *)(v9 + 34);
  v16 = v13 + *(_WORD *)(v9 + 38);
  *(_WORD *)(v9 + 36) = v14;
  *(_WORD *)(v9 + 34) = v15;
  if ( v12 )
    v14 = 0;
  *(_WORD *)(v9 + 38) = v16;
  if ( v12 )
  {
    do
    {
      v17 = *(_WORD *)(v9 + 92);
      ++v14;
      v9 += 16;
      *(_WORD *)(v9 + 76) = v13 + v17;
    }
    while ( v14 != v12 );
  }
  return 1;
}
