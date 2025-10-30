_DWORD *__fastcall sub_195A64(_DWORD *a1, int a2)
{
  int v2; // r3
  int v5; // r2
  const char *v6; // r0
  int v7; // t1
  int v8; // r1
  int v9; // r0
  int v10; // r4
  __int64 v11; // r0
  int v13; // r0
  int v14; // [sp+4h] [bp-10h] BYREF
  _DWORD v15[3]; // [sp+8h] [bp-Ch] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1);
  *a1 = 0;
  a1[1] = 0;
  v14 = 0;
  if ( v2 == 36 )
  {
    v2 = *(unsigned __int8 *)(a2 + 2);
    v6 = (const char *)(a2 + 2);
    if ( v2 == 36 )
    {
      v2 = *(unsigned __int8 *)(a2 + 3);
      v5 = a2 + 3;
    }
    else
    {
      v5 = a2 + 2;
    }
    if ( (unsigned int)(v2 - 48) <= 9 )
      goto LABEL_7;
  }
  else
  {
    v5 = a2 + 1;
    v6 = (const char *)(a2 + 1);
    while ( (unsigned int)(v2 - 48) <= 9 )
    {
LABEL_7:
      v7 = *(unsigned __int8 *)++v5;
      v2 = v7;
    }
  }
  if ( v2 )
  {
    v13 = sub_26CA48((char *)(a2 + 1));
    if ( v13 )
    {
      if ( !sub_26EB3C(v13, v15) )
        sub_946E0("Convenience variables used in line specs must have integer values.");
      *a1 = v15[0];
    }
    else
    {
      a1[1] = 3;
    }
  }
  else
  {
    sscanf(v6, "%d", &v14);
    v9 = v14;
    if ( *(_BYTE *)(a2 + 1) == 36 )
      v9 = -v14;
    v10 = sub_26C838(v9, v8);
    v11 = sub_26BC70(v10);
    if ( **(_BYTE **)(v11 + 24) != 8 )
      sub_946E0("History values used in line specs must have integer values.", HIDWORD(v11));
    *a1 = sub_26EB1C(v10);
  }
  return a1;
}
