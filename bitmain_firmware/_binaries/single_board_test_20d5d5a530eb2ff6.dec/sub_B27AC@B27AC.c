_DWORD *__fastcall sub_B27AC(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // r6
  int (__fastcall *v5)(int *); // r3
  int v6; // r2
  _DWORD *v7; // r1
  int v8; // r3
  _DWORD *result; // r0
  int v10; // [sp+Ch] [bp-14h] BYREF

  if ( (*a2 & 0x300) == 0 )
    return a2;
  v4 = (_DWORD *)a2[4];
  if ( !*(_DWORD *)(*a1 + v4[1]) )
  {
    result = (_DWORD *)v4[6];
    if ( result )
      return result;
    goto LABEL_18;
  }
  if ( (*a2 & 0x100) != 0 )
    v10 = sub_EAC84();
  else
    v10 = sub_126F04();
  v5 = (int (__fastcall *)(int *))v4[2];
  if ( v5 && !v5(&v10) )
  {
    sub_D0048(13, 110, 164, "crypto/asn1/tasn_utl.c", 226);
    return 0;
  }
  v6 = v4[4];
  v7 = (_DWORD *)v4[3];
  if ( v6 > 0 )
  {
    if ( *v7 == v10 )
      return v7 + 1;
    v8 = 0;
    while ( 1 )
    {
      ++v8;
      v7 += 6;
      if ( v8 == v6 )
        break;
      if ( *v7 == v10 )
        return v7 + 1;
    }
  }
  result = (_DWORD *)v4[5];
  if ( !result )
  {
LABEL_18:
    result = a3;
    if ( a3 )
    {
      sub_D0048(13, 110, 164, "crypto/asn1/tasn_utl.c", 251);
      return 0;
    }
  }
  return result;
}
