_BYTE *__fastcall sub_26DDC8(int a1, _DWORD *a2)
{
  int v2; // r8
  int v3; // r3
  int v4; // r5
  int v5; // r4
  int v6; // r2
  int v7; // t1
  int v10; // r0
  char *endptr[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( *(_BYTE *)a1 != 36 )
    return 0;
  v2 = *(unsigned __int8 *)(a1 + 1);
  if ( v2 == 36 )
    v3 = *(unsigned __int8 *)(a1 + 2);
  else
    v3 = *(unsigned __int8 *)(a1 + 1);
  if ( v2 == 36 )
    v4 = 2;
  else
    v4 = 1;
  v5 = v4;
  if ( (unsigned int)(v3 - 48) <= 9 )
  {
    v6 = a1 + v4;
    do
    {
      v7 = *(unsigned __int8 *)++v6;
      v3 = v7;
      v4 = ++v5;
    }
    while ( (unsigned int)(v7 - 48) <= 9 );
  }
  if ( v3 == 95 )
    return 0;
  v10 = isalpha(v3);
  if ( v10 )
    return 0;
  if ( v2 == 36 )
  {
    if ( v5 == 2 )
    {
      v10 = -1;
      *a2 += v4;
    }
    else
    {
      v10 = -strtol((const char *)(a1 + 2), endptr, 10);
      *a2 = endptr[0];
    }
  }
  else if ( v5 == 1 )
  {
    *a2 += v4;
  }
  else
  {
    v10 = strtol((const char *)(a1 + 1), endptr, 10);
    *a2 = endptr[0];
  }
  return sub_26C838(v10);
}
