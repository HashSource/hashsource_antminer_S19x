int __fastcall sub_A25AC(int *a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r1
  int v9; // r3
  unsigned int v10; // r0
  int v11; // r6
  char **v12; // r4
  int v14; // [sp+Ch] [bp-Ch] BYREF
  char *v15; // [sp+10h] [bp-8h] BYREF
  char *v16; // [sp+14h] [bp-4h] BYREF

  sub_D1260();
  if ( sub_DA710(a4, &v14) == 2 && *a2 != v14 )
    return 0;
  sub_D128C();
  v8 = *a1;
  v9 = *(_DWORD *)(*a1 + 620);
  if ( !v9 )
    return 1;
  v10 = *(_DWORD *)(v8 + 628);
  if ( v10 )
  {
    v11 = 0;
    while ( 2 )
    {
      v12 = &off_202A94;
      while ( *((unsigned __int16 *)v12 + 2) != *(unsigned __int16 *)(v9 + 2 * v11) )
      {
        v12 += 8;
        if ( v12 == &off_202DD4 )
          goto LABEL_11;
      }
      if ( !sub_10FDB0(a3, &v15, &v16) || v12[2] != v15 || v12[4] != v16 )
      {
        v8 = *a1;
        v10 = *(_DWORD *)(*a1 + 628);
LABEL_11:
        if ( ++v11 >= v10 )
          return 0;
        v9 = *(_DWORD *)(v8 + 620);
        continue;
      }
      return 1;
    }
  }
  return 0;
}
