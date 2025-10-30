int __fastcall sub_50DA8(int result, int a2)
{
  int v3; // r4
  int v4; // r6
  int v5; // r3
  int *v6; // r0
  int v7; // r1
  int v8[8]; // [sp+4h] [bp-20h] BYREF

  v3 = result;
  v4 = dword_9CD91C;
  if ( a2 )
  {
    v8[0] = 0;
    memset(&v8[2], 0, 16);
    v8[6] = a2;
    v8[1] = 8;
    result = sub_50B8C(v8);
    v5 = *(_DWORD *)(v3 + 4);
    if ( v5 != 16 )
      goto LABEL_5;
LABEL_8:
    *(_DWORD *)(dword_9CD914 + 28 * v4 + 20) = dword_9CD91C - v4;
    return result;
  }
  v5 = *(_DWORD *)(result + 4);
  if ( v5 == 16 )
    return result;
  do
  {
LABEL_5:
    while ( v5 != 8 )
    {
      sub_509DC((const char **)v3);
      v6 = (int *)v3;
      v3 += 28;
      result = sub_50B8C(v6);
      v5 = *(_DWORD *)(v3 + 4);
      if ( v5 == 16 )
        goto LABEL_7;
    }
    v7 = *(_DWORD *)(v3 + 24);
    v3 += 28;
    result = sub_50DA8(*(_DWORD *)(v3 - 28), v7);
    v5 = *(_DWORD *)(v3 + 4);
  }
  while ( v5 != 16 );
LABEL_7:
  if ( a2 )
    goto LABEL_8;
  return result;
}
