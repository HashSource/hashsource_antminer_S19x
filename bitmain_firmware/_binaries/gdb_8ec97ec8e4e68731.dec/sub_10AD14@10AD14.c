int __fastcall sub_10AD14(_DWORD *a1)
{
  int v1; // r1
  __int64 v3; // r2
  int v4; // lr
  int v5; // t1
  int v6; // r12

  v1 = *(_DWORD *)(a1[2] + 40);
  if ( v1 )
  {
    a1[2] = v1;
    return v1;
  }
  v3 = *(_QWORD *)a1;
  HIDWORD(v3) = a1[1] + 1;
  v4 = *(_DWORD *)(*a1 + 8);
  if ( v4 <= SHIDWORD(v3) )
    return v1;
  LODWORD(v3) = *(_DWORD *)(v3 + 12);
  v1 = *(_DWORD *)(v3 + 4 * HIDWORD(v3));
  LODWORD(v3) = v3 + 4 * HIDWORD(v3);
  if ( !v1 )
  {
    while ( v4 != ++HIDWORD(v3) )
    {
      v5 = *(_DWORD *)(v3 + 4);
      LODWORD(v3) = v3 + 4;
      v6 = v5;
      if ( v5 )
        goto LABEL_9;
    }
    return v1;
  }
  v6 = v1;
LABEL_9:
  a1[1] = HIDWORD(v3);
  a1[2] = v6;
  return v6;
}
