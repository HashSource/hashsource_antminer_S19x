unsigned int __fastcall sub_8F1B0(_DWORD *a1, int a2, __int16 a3)
{
  int v3; // r3
  int v4; // r5
  unsigned int result; // r0
  int *v6; // r5
  int v7; // r5
  _BOOL4 v8; // r4
  int v9; // r3

  if ( (a3 & 0x800) != 0 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8;
    if ( v3 )
    {
      LOBYTE(v3) = 0;
      v4 = 1;
      if ( (a2 & 4) != 0 )
        return 0;
      goto LABEL_6;
    }
    goto LABEL_18;
  }
  v6 = (int *)a1[1];
  v3 = *(_DWORD *)(v6[25] + 48) & 8;
  if ( v3 )
  {
    v4 = a3 & 0x800;
    LOBYTE(v3) = 1;
    if ( (a2 & 4) != 0 )
      return 0;
LABEL_6:
    if ( *a1 != 768 )
      goto LABEL_7;
    goto LABEL_28;
  }
  v7 = *v6;
  v8 = v7 != 0x10000;
  if ( v7 < 772 )
    v8 = 0;
  if ( v8 )
  {
LABEL_18:
    if ( *a1 != 768 )
    {
LABEL_19:
      if ( (a2 & 0x10) == 0 )
        goto LABEL_20;
      return 0;
    }
    v4 = 1;
    if ( (a2 & 8) == 0 )
      return 0;
LABEL_7:
    if ( !v4 )
      goto LABEL_8;
    goto LABEL_19;
  }
  if ( *a1 == 768 )
  {
    v4 = 0;
    LOBYTE(v3) = 1;
LABEL_28:
    if ( (a2 & 8) == 0 )
      return 0;
    goto LABEL_7;
  }
  LOBYTE(v3) = 1;
LABEL_8:
  if ( (a2 & 0x20) != 0 )
  {
    if ( (a3 & 0x80) == 0 )
      return 0;
    if ( !a1[7] )
      v3 = 0;
    if ( v3 )
      return 0;
  }
LABEL_20:
  v9 = a1[35];
  result = 1;
  if ( v9 )
    return ((a2 ^ 0x40u) >> 6) & 1;
  return result;
}
