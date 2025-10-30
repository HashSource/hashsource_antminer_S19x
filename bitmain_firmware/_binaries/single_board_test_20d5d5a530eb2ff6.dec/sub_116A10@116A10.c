int __fastcall sub_116A10(int a1, char *a2, int a3)
{
  int v4; // r5
  size_t *v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r0
  char *v10; // [sp+0h] [bp-Ch]
  char *v11; // [sp+0h] [bp-Ch]
  int v12; // [sp+4h] [bp-8h]
  int v13; // [sp+4h] [bp-8h]

  if ( a2 )
  {
    if ( !a1 )
      return 0;
    v4 = *(_DWORD *)(a1 + 196);
    if ( !v4 )
    {
      v10 = a2;
      v12 = a3;
      v8 = sub_116960();
      a2 = v10;
      a3 = v12;
      v4 = v8;
      *(_DWORD *)(a1 + 196) = v8;
      if ( !v8 )
        return 0;
    }
    v5 = *(size_t **)(v4 + 12);
    if ( v5 )
      return sub_AE088(v5, a2, a3);
    v11 = a2;
    v13 = a3;
    v5 = (size_t *)sub_B2068();
    a2 = v11;
    a3 = v13;
    *(_DWORD *)(v4 + 12) = v5;
    if ( v5 )
      return sub_AE088(v5, a2, a3);
    else
      return 0;
  }
  else if ( a1 && (v6 = *(_DWORD *)(a1 + 196)) != 0 && (v7 = *(_DWORD *)(v6 + 12)) != 0 )
  {
    j_ASN1_STRING_free(v7);
    *(_DWORD *)(*(_DWORD *)(a1 + 196) + 12) = 0;
    return 1;
  }
  else
  {
    return 1;
  }
}
