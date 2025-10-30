int __fastcall sub_BD9D0(int result, _DWORD *a2)
{
  int v2; // r4
  int v3; // r6
  int v5; // r3
  int v6; // r3
  int v7; // r1
  int v8; // r0
  __int64 v9; // r0

  v2 = result;
  v3 = *(_DWORD *)(result + 52);
  if ( v3 )
  {
    v5 = *(_DWORD *)(a2[1] + 24);
    if ( *(_BYTE *)v5 == 1 )
    {
      v8 = sub_171258(*(_DWORD *)(v5 + 20));
      result = sub_EC10C(v8, 115);
      v3 = result;
      if ( result )
        v3 = 1;
    }
    else
    {
      v3 = 0;
    }
  }
  if ( (*(_BYTE *)(v2 + 48) & 1) == 0 )
  {
LABEL_12:
    result = sub_C09B8(v2, 41);
    v6 = *(_BYTE *)(v2 + 48) & 1;
    goto LABEL_13;
  }
  switch ( *a2 )
  {
    case 1:
      v9 = sub_171258(a2[1]);
      if ( v3 )
      {
        sub_BCCD8(v2, a2[1]);
        goto LABEL_17;
      }
      sub_C0B5C(v2, HIDWORD(v9), *(_DWORD *)(a2[1] + 20), 0);
      result = sub_C09B8(v2, 12);
      v6 = *(_BYTE *)(v2 + 48) & 1;
LABEL_13:
      if ( !v6 )
        return result;
      break;
    case 0:
      if ( v3 )
        goto LABEL_17;
      goto LABEL_12;
    case 2:
      result = sub_C10E4(v2, a2[3]);
      if ( !v3 )
        goto LABEL_10;
      sub_C0C84(v2, a2[3]);
LABEL_17:
      sub_C0B5C(v2, a2, *(_DWORD *)(v2 + 52), *(int *)(v2 + 52) >> 31);
      result = sub_C09B8(v2, 47);
LABEL_10:
      if ( (*(_BYTE *)(v2 + 48) & 1) == 0 )
        return result;
      break;
  }
  v7 = a2[1];
  if ( (unsigned int)**(unsigned __int8 **)(v7 + 24) - 3 <= 1 )
    return sub_BD888(v2, v7);
  return result;
}
