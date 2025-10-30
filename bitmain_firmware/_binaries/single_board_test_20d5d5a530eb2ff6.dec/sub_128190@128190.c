bool __fastcall sub_128190(int a1, int *a2)
{
  int v2; // r2
  int v5; // r5
  int v6; // r0
  int v7; // r4
  unsigned int v8; // r3
  unsigned int v9; // t1
  bool v10; // r1
  _BYTE *v12; // r6
  int v13; // r0
  _BYTE v15[112]; // [sp+0h] [bp-70h] BYREF

  if ( !a2 )
    return 0;
  if ( *a2 <= 0 )
    return 1;
  v2 = 0;
  v5 = a2[2] - 1;
  v6 = *a2;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v9 = *(unsigned __int8 *)++v5;
      v8 = v9;
      if ( v9 <= 0x7E )
      {
        v10 = v8 <= 0x1F;
        if ( v8 == 10 )
          v10 = 0;
        if ( v8 != 13 && v10 )
          LOBYTE(v8) = 46;
      }
      else
      {
        LOBYTE(v8) = 46;
      }
      ++v7;
      v12 = &v15[v2++ + 80];
      *(v12 - 80) = v8;
      if ( v2 > 79 )
        break;
      if ( v7 >= v6 )
        goto LABEL_17;
    }
    v13 = sub_B69CC(a1, (int)v15, v2);
    v2 = 0;
    if ( v13 <= 0 )
      return 0;
    v6 = *a2;
  }
  while ( v7 < *a2 );
LABEL_17:
  if ( !v2 )
    return 1;
  return sub_B69CC(a1, (int)v15, v2) > 0;
}
