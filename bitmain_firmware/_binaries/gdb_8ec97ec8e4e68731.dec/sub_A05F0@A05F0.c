bool __fastcall sub_A05F0(__int64 a1, int a2, int a3)
{
  int v4; // r2
  int v5; // r1
  int v6; // r6
  int v7; // r0
  int v9; // r1
  int v10; // r1
  int v11; // [sp+4h] [bp-14h] BYREF
  __int64 v12; // [sp+8h] [bp-10h] BYREF
  __int64 v13; // [sp+10h] [bp-8h] BYREF

  v4 = *(_DWORD *)(*(_DWORD *)(a2 + 24) + 24);
  v5 = 0;
  v11 = 0;
  v6 = *(_DWORD *)(v4 + 24 * a3 + 16);
  while ( 1 )
  {
    v7 = *(unsigned __int8 *)(v6 + v5);
    if ( v7 != 82 )
      break;
    v9 = v5 + 1;
    if ( (unsigned int)*(unsigned __int8 *)(v6 + v9) - 48 > 9
      || !sub_9D47C(v6, v9, &v12, &v11)
      || *(_BYTE *)(v6 + v11) != 84
      || (unsigned int)*(unsigned __int8 *)(v6 + v11 + 1) - 48 > 9
      || !sub_9D47C(v6, v11 + 1, &v13, &v11) )
    {
      return 0;
    }
    if ( a1 >= v12 && v13 >= a1 )
      return 1;
LABEL_12:
    v5 = v11;
  }
  if ( v7 != 83 )
    return v7 == 79;
  v10 = v5 + 1;
  if ( (unsigned int)*(unsigned __int8 *)(v6 + v10) - 48 <= 9 && sub_9D47C(v6, v10, &v13, &v11) )
  {
    if ( v13 == a1 )
      return 1;
    goto LABEL_12;
  }
  return 0;
}
